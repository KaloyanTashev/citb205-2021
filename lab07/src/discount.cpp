#include "discount.h"

double Discount::total(){
    return 1;
}

FixedDiscount::FixedDiscount(double amount){

}
double FixedDiscount::total() {
    return 2;
}
PercentageDiscount::PercentageDiscount(int percentage){

}
double PercentageDiscount::total(){
    return 3;
}