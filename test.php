// Making some changes and Third commit


<?php 

// We will open the myfile.txt and set to variable $check 
$check = fopen("myfile.txt", "r"); 

$seq = fgets($check); 

// Outputs a line of the file until 
// the end-of-file is reached 
while(! feof($check)) 
{ 
echo $seq ; 
$seq = fgets($check); 
} 

// We will close the file with fclose() function 
fclose($check); 

?>