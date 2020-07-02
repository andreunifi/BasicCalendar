#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <memory>
#include <list>
#include "C:\Users\andre\CLionProjects\untitled\cmake-build-debug-mingw\Date.h"
#include "C:\Users\andre\CLionProjects\untitled\cmake-build-debug-mingw\Activity.h"
#include "C:\Users\andre\CLionProjects\untitled\cmake-build-debug-mingw\Registro.h"
// non mi trova la libreria FileClass.h, uso il path globale
//*





int main(){

   Date giorno;
   giorno.setdate(10,11,2019);
   giorno.setTimeofDay(11,21,13);
   Date giorno2;
   giorno2.setdate(10,11,2019);
   giorno2.setTimeofDay(11,21,34);
   Date giorno3(10,11,2019,10,00,00);
   Date giorno4(10,11,2019,10,00,01);
   Activity a("an","Parrucchiere",giorno,giorno2);
   Activity as("ao","Svegliarsi",giorno3,giorno4);
   Register zon;
   Date g(10,11,2019,00,00,00);
   zon.addActivity(g,a);
   zon.addActivity(g,as);
   zon.printSpecificDay(g);
   zon.removeActivity(g,as);
    zon.printSpecificDay(g);







}

