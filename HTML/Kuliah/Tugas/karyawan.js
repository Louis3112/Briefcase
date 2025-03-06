function handleSubmit() {
    calcYearlyTax();
    calcYear();
    return false; 
}

function calcYearlyTax() {
    let salary = document.getElementById("salary").value;
    let tax = document.getElementById("tax");

    tax.innerText = "Yearly Tax: Rp " + salary * 0.1;
}

function calcYear() {
    let year = document.getElementById("year").value;
    let promotion = document.getElementById("promotion");
    let howLong = 2025 - year;

    if (howLong > 5 && howLong >= 0) {
        promotion.innerText = "Note: Eligible for promotion.";
    } 
    else if (howLong <= 5 && howLong >= 0) {
        promotion.innerText = "Note: Not eligible for promotion yet.";
    }
    else{
        promotion.innerText = "Note: Please enter a valid starting year.";
    }
}

