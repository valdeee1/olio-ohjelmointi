#include <iostream>
#include "pankkitili.h"
using namespace std;

int main()
{
    Pankkitili Keijo("Keijo Karhunen", "12345", 2017.5);
    Pankkitili Jaakko("Jaakko Keljunen","67890",199.1);
    Keijo.tulostaTilitiedot();
    Jaakko.tulostaTilitiedot();
    return 0;
}
