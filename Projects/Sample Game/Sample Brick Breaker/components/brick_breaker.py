import pygame
import random

# Initialize Pygame
pygame.init()

# Game constants
CANVAS_WIDTH = 480
CANVAS_HEIGHT = 640
PADDLE_WIDTH = 100
PADDLE_HEIGHT = 20
BALL_RADIUS = 10
BRICK_ROWS = 5
BRICK_COLUMNS = 8
BRICK_WIDTH = (CANVAS_WIDTH - 40) // BRICK_COLUMNS
BRICK_HEIGHT = 30
BRICK_PADDING = 5
BRICK_TOP_OFFSET = 60
BRICK_LEFT_OFFSET = 20
BRICK_COLORS = [
    (255, 82, 82),  # Red
    (255, 152, 0),  # Orange
    (255, 235, 59),  # Yellow
    (76, 175, 80),  # Green
    (33, 150, 243),  # Blue
]

# Initialize screen
screen = pygame.display.set_mode((CANVAS_WIDTH, CANVAS_HEIGHT))
pygame.display.set_caption("Brick Breaker")

# Fonts and colors
font = pygame.font.Font(None, 36)
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)

# Game objects
class Paddle:
    def __init__(self):
        self.x = CANVAS_WIDTH // 2 - PADDLE_WIDTH // 2
        self.y = CANVAS_HEIGHT - PADDLE_HEIGHT - 10
        self.width = PADDLE_WIDTH
        self.height = PADDLE_HEIGHT
        self.dx = 8

    def move(self, mouse_x):
        new_x = mouse_x - self.width // 2
        self.x = max(0, min(CANVAS_WIDTH - self.width, new_x))

    def draw(self):
        pygame.draw.rect(screen, (0, 149, 221), (self.x, self.y, self.width, self.height))

class Ball:
    def __init__(self):
        self.x = CANVAS_WIDTH // 2
        self.y = CANVAS_HEIGHT - PADDLE_HEIGHT - 10 - BALL_RADIUS
        self.dx = 4 * random.choice([-1, 1])
        self.dy = -4
        self.radius = BALL_RADIUS

    def move(self):
        self.x += self.dx
        self.y += self.dy

        # Wall collision
        if self.x - self.radius < 0 or self.x + self.radius > CANVAS_WIDTH:
            self.dx = -self.dx
        if self.y - self.radius < 0:
            self.dy = -self.dy

    def draw(self):
        pygame.draw.circle(screen, WHITE, (self.x, self.y), self.radius)

class Brick:
    def __init__(self, x, y, color):
        self.x = x
        self.y = y
        self.width = BRICK_WIDTH
        self.height = BRICK_HEIGHT
        self.color = color
        self.visible = True

    def draw(self):
        if self.visible:
            pygame.draw.rect(screen, self.color, (self.x, self.y, self.width, self.height))
            pygame.draw.rect(screen, BLACK, (self.x, self.y, self.width, self.height), 1)

# Initialize bricks
def init_bricks():
    bricks = []
    for row in range(BRICK_ROWS):
        for col in range(BRICK_COLUMNS):
            x = col * (BRICK_WIDTH + BRICK_PADDING) + BRICK_LEFT_OFFSET
            y = row * (BRICK_HEIGHT + BRICK_PADDING) + BRICK_TOP_OFFSET
            bricks.append(Brick(x, y, BRICK_COLORS[row]))
    return bricks

# Main game loop
def main():
    running = True
    clock = pygame.time.Clock()

    paddle = Paddle()
    ball = Ball()
    bricks = init_bricks()

    score = 0
    lives = 3

    while running:
        screen.fill(BLACK)

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False

        # Paddle movement
        mouse_x, _ = pygame.mouse.get_pos()
        paddle.move(mouse_x)

        # Ball movement
        ball.move()

        # Ball collision with paddle
        if (
            ball.y + ball.radius > paddle.y
            and paddle.x < ball.x < paddle.x + paddle.width
        ):
            ball.dy = -abs(ball.dy)
            hit_position = (ball.x - paddle.x) / paddle.width
            ball.dx = 8 * (hit_position - 0.5)

        # Ball collision with bricks
        for brick in bricks:
            if brick.visible and (
                brick.x < ball.x < brick.x + brick.width
                and brick.y < ball.y < brick.y + brick.height
            ):
                ball.dy = -ball.dy
                brick.visible = False
                score += 10

        # Ball out of bounds
        if ball.y - ball.radius > CANVAS_HEIGHT:
            lives -= 1
            if lives == 0:
                running = False
            else:
                ball = Ball()

        # Draw objects
        paddle.draw()
        ball.draw()
        for brick in bricks:
            brick.draw()

        # Draw score and lives
        score_text = font.render(f"Score: {score}", True, WHITE)
        lives_text = font.render(f"Lives: {lives}", True, WHITE)
        screen.blit(score_text, (10, 10))
        screen.blit(lives_text, (CANVAS_WIDTH - 100, 10))

        pygame.display.flip()
        clock.tick(60)

    pygame.quit()

if __name__ == "__main__":
    main()