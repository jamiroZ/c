/*
8. Averigüe los tamaños de todos los tipos básicos en su sistema aplicando 
    el operador sizeof().
*/
#include <stdio.h>
#include <stdbool.h>
//sizeof(tipo) devuelve el tamaño en bytes de un tipo de dato
//char,short,int,long son de tipo entero
//float,double,long double son de tipo flotante
//bool requiere #include <stdbool.h> ,ya que en C no es tipo estandar
int main() {
    printf("Tamaño de los tipos de datos en este sistema:\n");
    printf("char: %lu byte\n", sizeof(char));//1 byte
    printf("short: %lu bytes\n", sizeof(short));//2 bytes
    printf("int: %lu bytes\n", sizeof(int));//4 bytes
    printf("long: %lu bytes\n", sizeof(long));//8 bytes
    printf("long long: %lu bytes\n", sizeof(long long));//8 bytes
    
    printf("float: %lu bytes\n", sizeof(float));//4 bytes 
    printf("double: %lu bytes\n", sizeof(double));//8 bytes
    printf("long double: %lu bytes\n", sizeof(long double));//16 bytes
    
    printf("bool: %lu byte\n", sizeof(bool));//1 bytes

    return 0;
}