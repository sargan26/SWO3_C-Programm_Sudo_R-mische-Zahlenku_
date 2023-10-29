#include <stdio.h>
#include <stdlib.h>

int main () {
   char r[20];
   int d;

   d = roman_to_decimal("CXI");
   printf("Roman to Decimal: CXI = %d\n", d);
   d = roman_to_decimal("DCXLIII");
   printf("Roman to Decimal: DCXLIII = %d\n", d);
   d = roman_to_decimal("DXXX");
   printf("Roman to Decimal: DXXX = %d\n", d);
   d = roman_to_decimal("");
   printf("Roman to Decimal: " " = %d\n", d);
   d = roman_to_decimal("A");
   printf("Roman to Decimal: A = %d\n", d);

   decimal_to_roman(123, r);
   printf("Decimal to Roman: 123 = %s\n", r);
   decimal_to_roman(1037, r);
   printf("Decimal to Roman: 1037 = %s\n", r);
   decimal_to_roman(883, r);
   printf("Decimal to Roman: 883 = %s\n", r);
   decimal_to_roman(2153, r);
   printf("Decimal to Roman: 2153 = %s\n", r);
   decimal_to_roman(0, r);
   printf("Decimal to Roman: 0 = %s\n", r);
   decimal_to_roman(-1, r);
   printf("Decimal to Roman: -1 = %s\n", r);
   decimal_to_roman(9999, r);
   printf("Decimal to Roman: 9999 = %s\n", r);

   return EXIT_SUCCESS;
}
