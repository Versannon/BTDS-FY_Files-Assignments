<?php
session_start();
$conn = new mysqli("localhost", "root", "", "game_accounts");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $email = $_POST['email'];
    $password = $_POST['password'];

    $stmt = $conn->prepare("SELECT * FROM users WHERE email = ? AND password = ?");
    $stmt->bind_param("ss", $email, $password);
    $stmt->execute();
    $result = $stmt->get_result();

    if ($result->num_rows > 0) {
        header("Location: Temp_Game.html");
    } else {
        echo "<script>alert('Invalid email or password'); window.location.href='Login_Page.html';</script>";
    }
}
?>
