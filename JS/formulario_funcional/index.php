<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js" integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz" crossorigin="anonymous"></script>
    <link rel="stylesheet" href="estilo.css">
    <title>Formulário</title>
</head>

<body>
    <nav class="navbar navbar-expand-lg ">
        <div class="container-fluid">
            <a class="navbar-brand" href="#">
                <img src="image/logo.png" alt="" width="90px">
            </a>
            <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
            </button>
            <div class="collapse navbar-collapse" id="navbarNav">
                <ul class="navbar-nav">
                    <li class="nav-item">
                        <a class="nav-link" aria-current="page" href="#">Home</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="#">Contato</a>
                    </li>
                    <li class="nav-item">
                        <a class="nav-link" href="#">Sobre</a>
                    </li>
                </ul>
            </div>
        </div>
    </nav>

    <!--Formulario-->
    <div class="conteudo">
        <h1 class="titulo">Entre em contato conosco!</h1>
        <div class="formulario">
            <form action="enviar.php" name="meu-form" method="post">
                <label class="label">Nome:</label>
                <input type="text" class="input" name="nome" required placeholder="Digite Seu Nome">
                
                <label class="label">E-mail:</label>
                <input type="text" class="input" name="email" required placeholder="Digite Seu E-mail">

                <label class="label">Assunto:</label>
                <input type="text" class="input" name="assunto" required placeholder="Digite o Assunto do E-mail">
                
                <label class="label">Mensagem:</label>
                <textarea class="input" name="mensagem" required placeholder="Digite a Mensagem" id="" cols="30" rows="10"></textarea>
                <button class="botao" type="submit" value="enviar">Enviar</button>
            </form>
        </div>
    </div>


    <?php

    ?>
</body>

</html>