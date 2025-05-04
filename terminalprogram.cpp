//CONTAINER
#include <iostream>
using namespace std;
int main() {
    cout << "---- CONTAINER TERMINAL DATABANK -- 0.1 ----\n";
    //header
    cout << "---- CREATE YOUR DATABANK ----\n";
    //bank propities
    cout << "Write a bank name: ";
    string BANK_NAME;
    cin >> BANK_NAME;
    cout << "\nWhat is type of " << BANK_NAME << " ?";
    string BANK_TYPE;
    cin >> BANK_TYPE;
    cout << "\nDefine size of " << BANK_NAME << ": ";
    int BANK_SIZE;
    cin >> BANK_SIZE;
    //base
    int BANK_INT[BANK_SIZE];
    float BANK_FLT[BANK_SIZE];
    string BANK_STR[BANK_SIZE];
    if(BANK_TYPE == "int"){
        BANK_INT[BANK_SIZE];
    }else if(BANK_TYPE == "dec"){
        BANK_FLT[BANK_SIZE];
    }else if(BANK_TYPE == "str"){
        BANK_STR[BANK_SIZE];
    }
    cout << "Your " << BANK_NAME << " with " << BANK_TYPE << " values and " << BANK_SIZE << " spaces to values has created!\n";
    cout << "Let's program!\n";
    int i;
    while(i < 60000000){
    string ALTER_BANK,OP,PO,PE;
    int POS;    
    int INTV;
    float DECV;
    string STRV;
    cin >> ALTER_BANK;
        if(ALTER_BANK == "add.values"){
            if(BANK_TYPE == "int"){
                cin >> BANK_NAME >> PO >> POS >> PE >> OP >> INTV;
                if(PO == "(" && POS > 0 && PE == ")" && OP == "="){
                    BANK_INT[POS] = INTV;
                }
            }
            else if(BANK_TYPE == "dec"){
                cin >> BANK_NAME >> PO >> POS >> PE >> OP >> DECV;
                if(PO == "(" && POS > 0 && PE == ")" && OP == "="){
                    BANK_FLT[POS] = DECV;
                }
            }
            else if(BANK_TYPE == "str"){
                cin >> BANK_NAME >> PO >> POS >> PE >> OP >> STRV;
                if(PO == "(" && POS > 0 && PE == ")" && OP == "="){
                    BANK_STR[POS] = STRV;
                }
            }
        }else if(ALTER_BANK == "remove.values"){
            if(BANK_TYPE == "int"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > 0 && PE == ")"){
                    BANK_INT[POS] = 0;
                }
            }
            else if(BANK_TYPE == "dec"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > 0 && PE == ")"){
                    BANK_FLT[POS] = 0;
                }
            }
            else if(BANK_TYPE == "str"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > 0 && PE == ")"){
                    BANK_STR[POS] = "\0";
                }
            }
        }else if(ALTER_BANK == "output.values"){
            if(BANK_TYPE == "int"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > 0 && PE == ")"){
                    cout << "$ -> " << BANK_INT[POS];
                }
            }
            else if(BANK_TYPE == "dec"){
                    cin >> BANK_NAME >> PO >> POS >> PE;
                    if(PO == "(" && POS > 0 && PE == ")"){
                        cout << "$ -> " << BANK_INT[POS];
                    }
            }
            else if(BANK_TYPE == "str"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                    if(PO == "(" && POS > 0 && PE == ")"){
                        cout << "$ -> " << BANK_INT[POS];
                    }
            }
        }
        i++;
        ALTER_BANK = "\0";
    }
    return 0;
}