const numbers = document.querySelectorAll(".number");
const operators = document.querySelectorAll(".operator");
const clear = document.querySelector(".clear");
const equal = document.querySelector(".equal");
const display = document.querySelector(".display");

let firstValue = 0;
let operatorValue = "";
let awaitingNextValue = false;

function inputNumber(number) {
  const displayValue = display.textContent;
  const currentValue = parseFloat(displayValue);

  if (awaitingNextValue) {
    display.textContent = number;
    awaitingNextValue = false;
  } else {
    display.textContent =
      displayValue === "0" ? number : displayValue + number;
  }
}

function inputOperator(operator) {
  const displayValue = display.textContent;
  const currentValue = parseFloat(displayValue);

  if (operatorValue && awaitingNextValue) {
    operatorValue = operator;
    return;
  }

  firstValue = currentValue;
  operatorValue = operator;
  awaitingNextValue = true;
}

function clearInput() {
  firstValue = 0;
  operatorValue = "";
  display.textContent = 0;
  awaitingNextValue = false;
}

function calculate() {
  const displayValue = display.textContent;
  const currentValue = parseFloat(displayValue);
  let result;

  switch (operatorValue) {
    case "+":
      result = firstValue + currentValue;
      break;
    case "-":
      result = firstValue - currentValue;
      break;
    case "x":
      result = firstValue * currentValue;
      break;
    case "/":
      result = firstValue / currentValue;
      break;
    default:
      result = currentValue;
  }

  display.textContent = result;
  firstValue = result;
  awaitingNextValue = true;
}

numbers.forEach(number => {
  number.addEventListener("click", () => inputNumber(number.textContent));
});

operators.forEach(operator => {
  operator.addEventListener("click", () => inputOperator(operator.textContent));
});

clear.addEventListener("click", clearInput);

equal.addEventListener("click", calculate);