#include <iostream>
#include "invoice.h"
#include "textprinter.h"
#include "discount.h"

int main() {
    Invoice invoice;
    Product superMob("Super Mob", 12.90);
    Product teaCup("Tea Cup", 5.30);
    Product redWineGlass("Red Wine Glass", 8.60);
    Product * p = new Product(redWineGlass);
    FixedDiscount *fiveOff = new FixedDiscount(5.0);
    PercentageDiscount *tenPercentsOff = new PercentageDiscount(10);

    invoice.add(fiveOff);
    invoice.add(tenPercentsOff);

    invoice.add(superMob, 5);
    invoice.add(teaCup, 12);
    invoice.add(redWineGlass, 8);

    TextPrinter printer;
    printer.print(std::cout, invoice);
    return 0;
}
