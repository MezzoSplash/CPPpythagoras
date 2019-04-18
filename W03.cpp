#include <iostream>
using namespace std;

bool pythagoras(int A, int B, int C){
        //test
        //cout << A << B << C << "\n";

        if (((A*A) + (B*B)) == (C*C) ) {
                return true;
        } else {
                return false;
        }
}

int main() {

        int A;
        int B;
        int C;
        cout << "Geef drie getallen: \n";
        cin >> A >> B >> C;
        bool ganni;
        ganni = pythagoras(A, B, C);

        if(ganni) {
                cout << "SUCCES" <<endl;
        } else {
                cout << "FOUT" <<endl;
        }

}
