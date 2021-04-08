#include "textprinter.h"
#include <iostream>
#include <iomanip>

using std::setw;
using std::setfill;
using std::endl;
using std::left;
using std::right;
void TextPrinter::print(std::ostream &out, Invoice invoice) {
    out << std::setprecision(2) << std::fixed;
    printLineSeparator(out);
    for (auto item : invoice.getItems()){
        printLineItem(out, item);
        printLineSeparator(out);
    }

   
   
   
    out << setfill(' ');
    out << setw(58+3) << right << "Subtotal";
    out << "|";
    out << setw(10) << right << invoice.total();
}
void TextPrinter::printLineItem(std::ostream &out, Item item){
out << setfill(' ');
out << '|';
out << setw(8) << right << item.getQuantity();
out << '|';
out << setw(40) << left << item.getProduct().getName();
out << '|';
out << setw(10) << right << item.getProduct().getPrice();
out << '|';
out << setw(10) << right << item.total();
out << endl;
}

void TextPrinter::printLineSeparator(std::ostream &out){
    out << setfill('-');
    out << '+';
    out << setw(8) << "";
    out << '+';
    out << setw(40) << "";
    out << '+';
    out << setw(10) << "";
    out << '+';
    out << setw(10) << "";
    out << '+';
    out << endl;
    
}
