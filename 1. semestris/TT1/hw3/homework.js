/*
Arturs Balnass ab23183
 */

// window.addEventListener('DOMContentLoaded', (event) => { // execute the code when the initial HTML document has been completely loaded, we need the regions select to be loaded 
    
// 	let lookup = {};

// 	for (let d in rates.Cube) { // for every item in the rates.Cube array (actually for every date)
//         for (let c in rates.Cube[d].Cube) { // for every currency object
//             let cur = rates.Cube[d].Cube[c].currency;
//             if (cur && !(cur in lookup)) { // if the currency hasn't been previously processed
//                 lookup[cur] = {}; // add a new currency to the lookup
//             }
//             lookup[cur] = 1; // add a station to the lookup. lookup is a two-dimensional associative array/object    
//         }
// 	}

	//console.log(lookup); // uncomment this line if you want to see the result in the console

	// now let's get the array of currencies for the select element
	// let currencies = Object.keys(lookup).concat(["EUR"]).sort(); // get the list of keys in the lookup, add EUR and sort it

    // console.log(currencies); // uncomment this line if you want to see the result in the console

	// write your code to fill the currencies select element

// });
window.addEventListener('DOMContentLoaded', (event) => {
    let lookup = {};

    for (let d in rates.Cube) {
        for (let c in rates.Cube[d].Cube) {
            let cur = rates.Cube[d].Cube[c].currency;
            if (cur && !(cur in lookup)) {
                lookup[cur] = {};
            }
            lookup[cur] = 1;
        }
    }
    let currencies = Object.keys(lookup).concat(["EUR"]).sort();

    let currencySellSelect = document.getElementById('currency-sell');
    let currencyBuySelect = document.getElementById('currency-buy');
    currencies.forEach(currency => {
        let sellOption = document.createElement('option');
        let buyOption = document.createElement('option');

        sellOption.value = buyOption.value = currency;
        sellOption.text = buyOption.text = currency;

        currencySellSelect.appendChild(sellOption);
        currencyBuySelect.appendChild(buyOption);
    });

    document.getElementById('convert').addEventListener('click', convertCurrency);
});


function convertCurrency() {
    var sellCurr = document.getElementById('currency-sell').value;
    var buyCurr = document.getElementById('currency-buy').value;
    var amountSell = document.getElementById('amount-sell').value;
    var amountBuy = document.getElementById('amount-buy').value;
    var date = document.getElementById('date-on').value;

    var exchangeRate = findExchangeRate(date,sellCurr,buyCurr)
        if(exchangeRate == null || exchangeRate == undefined){
            alert("Date is not in the database or date is not written properly")
        } else {
        
        if (amountSell > 0 && amountBuy > 0){
            alert("Both inputs are populated, please try again")
        }
        else if (isNaN(amountBuy) || isNaN(amountSell)) {
            alert("Amount that needs to be sold/bought is not a number");
        }
        else if (amountSell > 0) {
            var convertedAmount = amountSell * exchangeRate;
            let result = 1 / exchangeRate;
            document.getElementById('amount-buy').value = convertedAmount.toFixed(2);
            changeSee(sellCurr,buyCurr,result);
        } else if (amountBuy > 0) {
            var convertedAmount = amountBuy / exchangeRate;
            let result = 1 * exchangeRate;
            document.getElementById('amount-sell').value = convertedAmount.toFixed(2);
            changeSee(buyCurr,sellCurr,result);
        }}
}
function findExchangeRate(date, sellCurrency, buyCurrency) {
    let exchangeRate = null;
    let dailyRates = rates['Cube'].find(d => d['time'] === date);
    if (dailyRates) {
        let sellRate = (sellCurrency === 'EUR') ? 1 : dailyRates['Cube'].find(r => r['currency'] === sellCurrency)?.['rate'];
        let buyRate = (buyCurrency === 'EUR') ? 1 : dailyRates['Cube'].find(r => r['currency'] === buyCurrency)?.['rate'];

        if (sellRate && buyRate) {
            exchangeRate = buyRate / sellRate;
        }
    }
    return exchangeRate;
}

function changeSee(buy, sell, result){
    document.getElementById('calculator-rate').textContent =" " + sell + " = 1 x " + result.toFixed(4) +" = "+ result.toFixed(2);
    document.getElementById('calculator-currency').textContent = buy;
    document.getElementById('calculator-rate-info').style.cssText = 'display:flex;';
    document.getElementById('rates-source').textContent = rates.Sender.name;
}