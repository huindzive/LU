<?php
function printPyramid($inputString) {
    $length = strlen($inputString);
    
    for ($i = 0; $i < $length; $i++) {
        echo substr($inputString, 0, $i + 1) . "<br>";
    }
    
    for ($i = $length - 1; $i > 0; $i--) {
        echo substr($inputString, 0, $i) . "<br>";
    }
}

$inputString = 'HELLO';
printPyramid($inputString);
?>