<?php

function isHoliday($year) {
    $neatkaribasDiena = strtotime("$year-11-18");
    $dayOfWeek = date('N', $neatkaribasDiena);
    return in_array($dayOfWeek, [6, 7]);
}
$testaGads = 2023;
$vaiIr = isholiday($testaGads) ? 'bija' : 'nebija';
echo "Nākošā pirmdiena pēc neatkarības dienas $testaGads. gadā $vaiIr brīvdiena"."<br><br>";


$SakumaGads = 2023;
$beiguGads = 2030;

for ($year = $SakumaGads; $year <= $beiguGads; $year++) {
    $isHoliday = isHoliday($year) ? 'was a holiday' : 'was not a holiday';
    echo "The next Monday after November 18, $year  $isHoliday"."<br>";
}
?>
