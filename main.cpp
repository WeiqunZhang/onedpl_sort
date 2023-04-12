#include <oneapi/dpl/execution>
#include <oneapi/dpl/algorithm>

void f (int* p, int n)
{
    std::sort(oneapi::dpl::execution::dpcpp_default, p, p+n);
}
