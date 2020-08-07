<?php
echo "Par ou Impar" . PHP_EOL;
echo "Digite 0 para parar". PHP_EOL;

($num = readline('Informe um numero: '));

        while ($num != 0) 
{

        if (($num % 2) == 0) 
{
	echo " o numero é PAR". PHP_EOL;
        ($num = readline('Informe um numero: '));
} 
        else if (($num /$num) != 0)
{
        echo " o numero é IMPAR". PHP_EOL;
        ($num = readline('Informe um numero: '));
}
}