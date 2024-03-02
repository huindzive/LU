<?php

function isHoliday($year) {
    $neatkaribasDiena = strtotime("$year-11-18");
    $dayOfWeek = date('N', $neatkaribasDiena);
    return in_array($dayOfWeek, [6, 7]);
}

if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $startYear = filter_var($_POST['startYear'], FILTER_VALIDATE_INT);
    $endYear = filter_var($_POST['endYear'], FILTER_VALIDATE_INT);

    if ($startYear === false || $endYear === false || $startYear < 0 || $endYear < 0 || $startYear > $endYear) {
        echo "Error: TU ir tups, ievadi skaitļus un tikai skaitļus, kur sākuma gads ir mazāks par beigu gadu.";
        exit;
    }

    for ($year = $startYear; $year <= $endYear; $year++) {
        $isHoliday = isHoliday($year) ? 'was a holiday' : 'was not a holiday';
        echo "The next Monday after November 18, $year $isHoliday<br>";
    }
} else {
    echo "Please submit the form with valid year range.";
}
?>
