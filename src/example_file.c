#include "example_file.h"
#include "drv_aaa.h"
#include "other_header.h"

static int static_func2(int x)
{
    return x * x;
}

int func1(int x) {
    int a = get_aaa();
    int b = static_func2(x);
    return a + b + x + SOMETHING;
}