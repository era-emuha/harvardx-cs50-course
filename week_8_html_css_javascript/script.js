function greet() {
    const table = document.querySelector("tbody");
    const firstRow = table.querySelector("tr");
    const firstValue = firstRow.querySelector("td").textContent;
    alert("Hello " + firstValue);
}

greet();