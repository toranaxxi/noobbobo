<html>
<head><title>This is Calculator</title></head>

        <body>

        <?php

        if ( ! empty($_POST['1']) && ! empty($_POST['2']) ){

                $number  = $_POST['1'];
                $number2 = $_POST['2'];

                if ($_POST['operator'] == 'add'){

                        $complete = $number + $number2;
                        echo "The answer is ";
                        echo $complete;
                }

                if ($_POST['operator'] == 'subtract'){

                        $complete = $number - $number2;
                        echo "The answer is ";
                        echo $complete;
