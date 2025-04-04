import pygame
import sys

# Initialize pygame
pygame.init()

# Screen dimensions
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Brick Breaker")

# Colors
WHITE = (255, 255, 255)
BLUE = (0, 0, 255)
BLACK = (0, 0, 0)
RED = (255, 0, 0)
GREEN = (0, 255, 0)

# Paddle setup
paddle_width, paddle_height = 100, 10
paddle_pos = [WIDTH // 2 - paddle_width // 2, HEIGHT - 20]
paddle_speed = 7

# Ball setup
ball_radius = 10
ball_pos = [WIDTH // 2, HEIGHT // 2]
ball_speed = [4, -4]

# Brick setup
brick_rows, brick_cols = 5, 8
brick_width = WIDTH // brick_cols
brick_height = 20
bricks = [
    pygame.Rect(col * brick_width, row * brick_height, brick_width, brick_height)
    for row in range(brick_rows) for col in range(brick_cols)
]

# Game loop
def game_loop():
    clock = pygame.time.Clock()
    running = True

    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                sys.exit()

        # Paddle movement
        keys = pygame.key.get_pressed()
        if keys[pygame.K_LEFT] and paddle_pos[0] > 0:
            paddle_pos[0] -= paddle_speed
        if keys[pygame.K_RIGHT] and paddle_pos[0] < WIDTH - paddle_width:
            paddle_pos[0] += paddle_speed

        # Ball movement
        ball_pos[0] += ball_speed[0]
        ball_pos[1] += ball_speed[1]

        # Ball collision with walls
        if ball_pos[0] <= ball_radius or ball_pos[0] >= WIDTH - ball_radius:
            ball_speed[0] = -ball_speed[0]
        if ball_pos[1] <= ball_radius:
            ball_speed[1] = -ball_speed[1]
        if ball_pos[1] >= HEIGHT:
            running = False  # Game over

        # Ball collision with paddle
        paddle_rect = pygame.Rect(paddle_pos[0], paddle_pos[1], paddle_width, paddle_height)
        if paddle_rect.collidepoint(ball_pos[0], ball_pos[1] + ball_radius):
            ball_speed[1] = -ball_speed[1]

        # Ball collision with bricks
        for brick in bricks[:]:
            if brick.collidepoint(ball_pos[0], ball_pos[1]):
                bricks.remove(brick)
                ball_speed[1] = -ball_speed[1]
                break

        # Check win condition
        if not bricks:
            running = False  # Win

        # Drawing
        screen.fill(BLACK)
        pygame.draw.rect(screen, BLUE, paddle_rect)
        pygame.draw.circle(screen, RED, ball_pos, ball_radius)
        for brick in bricks:
            pygame.draw.rect(screen, GREEN, brick)
        pygame.display.flip()

        # Cap the frame rate
        clock.tick(60)

# Main execution
game_loop()
pygame.quit()
sys.exit()
