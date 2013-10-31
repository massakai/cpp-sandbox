#ifdef __cplusplus
extern "C" {
#endif

typedef void* ExamplePtr;


ExamplePtr ExampleCreateInstance(void);
void ExampleDeleteInstance(ExamplePtr instance);

// inline
void ExampleSetValue(ExamplePtr instance, int value);
int ExampleGetValue(const ExamplePtr instance);

// not inline
int ExampleAdd(const ExamplePtr instance, int value);

#ifdef __cplusplus
}
#endif
