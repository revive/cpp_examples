#include "student.h"

int main ()
{
    Student s("Wang Wu", 'f', 122, 80, "SJTU");
    s.Run();

    Human &h = s;
    h.Run();
}
