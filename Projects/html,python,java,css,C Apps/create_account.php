<?php
$conn = new mysqli("localhost", "root", "", "game_accounts");

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $email = $_POST['email'];
    $password = $_POST['password'];
    $confirm_password = $_POST['confirm_password'];

    if ($password !== $confirm_password) {
        echo "<script>alert('Passwords do not match'); window.location.href='Create_Account.html';</script>";
        exit();
    }

    $stmt = $conn->prepare("INSERT INTO users (email, password) VALUES (?, ?)");
    $stmt->bind_param("ss", $email, $password);

    if ($stmt->execute()) {
        echo "<script>alert('Account created successfully'); window.location.href='Login_Page.html';</script>";
    } else {
        echo "<script>alert('Error creating account'); window.location.href='Create_Account.html';</script>";
    }
}
?>
