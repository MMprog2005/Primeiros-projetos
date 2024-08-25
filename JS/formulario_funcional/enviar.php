<?php
    $nome = $_POST["nome"];
    $email = $_POST["email"];
    $assunto = $_POST["assunto"];
    $mensagem = $_POST["mensagem"];

    global $email;
    $data = date("d/m/y"); //validarr a variavel email no script todo
    $hora = date("H:i");

    mail("gabriel.marra.ribeiro@gmail.com", 
    "mensagem do site", 
    "contato: \n 
    Nome: $nome \n  
    Email: $email \n 
    Mensagem: $mensagem");

    $site = "gabriel.marra.ribeiro@gmail.com";
    $titulo = "mensagem automatica";
    $msg = "$nome, obrigado por entrar em contato conosco, em breve nos falamos";

    //envia o emial auto-resposta para o visitante
    mail("$email", "$titulo", "$msg");

    echo "<script>window.location='index.php'; alert('$nome, sua mensagem foi enviada com sucesso!'); </script>";

?>