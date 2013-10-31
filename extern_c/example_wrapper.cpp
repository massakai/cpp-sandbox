#include "example_wrapper.h"
#include "Example.hpp"

ExamplePtr ExampleCreateInstance(void) {
    return (ExamplePtr) new Example();
}

void ExampleDeleteInstance(ExamplePtr instance) {
    delete (Example *) instance;
}

void ExampleSetValue(ExamplePtr instance, int value) {
    ((Example *)instance)->SetValue(value);
}

int ExampleGetValue(const ExamplePtr instance) {
    return ((const Example *)instance)->GetValue();
}

int ExampleAdd(const ExamplePtr instance, int value) {
    return ((const Example *)instance)->Add(value);
}
