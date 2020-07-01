#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <memory>
#include <list>
#include "C:\Users\andre\CLionProjects\untitled\cmake-build-debug-mingw\Date.h"
#include "C:\Users\andre\CLionProjects\untitled\cmake-build-debug-mingw\Activity.h"

// non mi trova la libreria FileClass.h, uso il path globale
//*





int main(){
    std::list<Date> danni;
    Date d;
    Date f;
    f.setdate(29,2,2000);
    f.setTimeofDay(11,00,00);
    Date da(29,2,2000,11,32,00);
    std::string name= "Parruchiere";
    Activity de(name ,f,da);
    de.printInfo();






}

