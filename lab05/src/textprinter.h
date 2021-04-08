#ifndef LAB1_TEXTPRINTER_H
#define LAB1_TEXTPRINTER_H

#include "invoice.h"

class TextPrinter {
public:
    void print(std::ostream &out, Invoice invoice);
private:
    void printLineSeparator(std::ostream &out);
    void printLineItem(std::ostream &out, Item item);
};


#endif //LAB1_TEXTPRINTER_H
