#include <stdio.h>
#include "example_wrapper.h"

int main(int argc, char **argv) {
    ExamplePtr p = ExampleCreateInstance();
    
    printf("ExampleGetValue() = %d\n", ExampleGetValue(p));
    ExampleSetValue(p, 10);
    printf("ExampleGetValue() = %d\n", ExampleGetValue(p));
    ExampleAdd(p, 100);
    printf("ExampleAdd() = %d\n", ExampleAdd(p, 100));

    ExampleDeleteInstance(p);
}
