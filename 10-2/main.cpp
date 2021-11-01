#include <iostream>

namespace A {
    int i=1;
}

namespace B {
    int i=2;
    namespace C {

        int b=4;
    }
}

int main()
{
    using namespace B;
    using C::b;

    printf("%d",i);
    printf("%d",b);

    return 0;
}
