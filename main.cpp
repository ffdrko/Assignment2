#include <iostream>
//#include "UnsortedType.h"
//#include "studentinfo.h"

using namespace std;

int main()
{


    bool found = false;
                                studentinfo s1("15234", "Abdullah", 2.6);
                                studentinfo s2("13732", "Muhammad", 3.9);
                                studentinfo s3("13569", "Ali", 1.2);
                                studentinfo s4("15467", "Saad", 3.1);
                                studentinfo s5("16285", "Mahdi", 3.1);

                                studentinfo tempo;
                                studentinfo s6("-99", "Not inserted", 0.0);

    UnsortedType<studentinfo> us;

    us.InsertItem(s1);
    us.InsertItem(s2);
    us.InsertItem(s3);
    us.InsertItem(s4);
    us.InsertItem(s5);
    cout << "5 entry inserted" << endl;


    us.DeleteItem(s4);
    cout << "1 entry deleted" << endl;



   studentinfo   tempo = s6;
    us.RetrieveItem(tempo, found);
    if(found) {
        cout << "Item is found" << endl;
        tempo.print();
    } else cout << "Item is not found" << endl;
    cout << endl;

 studentinfo     tempo = s3;
    us.RetrieveItem(tempo, found);
    if(found) {
        cout << "Item is found" << endl;
        tempo.print();
    } else cout << "Item is not found" << endl;
    cout << endl;





    for(int i=0; i<us.LengthIs(); ++i) {
        us.GetNextItem(tempo);
        tempo.print();
    }
    us.ResetList();





    cout << endl;
    return 0;
}
