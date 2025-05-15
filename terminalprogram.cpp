//CONTAINER
#include <iostream>
using namespace std;
int main() {
    cout << "---- CONTAINER TERMINAL DATABASE -- 0.2 ----\n";
    //header
    cout << "---- CREATE YOUR DATABASE ----\n";
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
    string BANK_BOOL[BANK_SIZE];
    if(BANK_TYPE == "int"){
        int BANK_INT[BANK_SIZE];
    }else if(BANK_TYPE == "dec"){
        float BANK_FLT[BANK_SIZE];
    }else if(BANK_TYPE == "str"){
        string BANK_STR[BANK_SIZE];
    }else if(BANK_TYPE == "tof"){
        string BANK_BOOL[BANK_SIZE];
    }
    cout << "Your " << BANK_NAME << " with " << BANK_TYPE << " values and " << BANK_SIZE << " spaces to values has created!\n";
    cout << "Let's program!\n";
    int i;
    while(i < 60000000){
    string ALTER_BANK,MATH_FUNCTION,RES,OP,PO,PE;
    int POS;    
    int POS1,POS2,POS3;    
    int INTV;
    float DECV;
    string BOOLV;
    int BOOLSYSTEM;
    string STRV;
    int INTI;
    float FLTI;        
    cin >> ALTER_BANK;
    //functions    
        if(ALTER_BANK == "add.values"){
            if(BANK_TYPE == "int"){
                cin >> BANK_NAME >> PO >> POS >> PE >> OP >> INTV;
                if(PO == "(" && POS > -1 && PE == ")" && OP == "="){
                    BANK_INT[POS] = INTV;
                }
            }
            else if(BANK_TYPE == "dec"){
                cin >> BANK_NAME >> PO >> POS >> PE >> OP >> DECV;
                if(PO == "(" && POS > -1 && PE == ")" && OP == "="){
                    BANK_FLT[POS] = DECV;
                }
            }
            else if(BANK_TYPE == "str"){
                cin >> BANK_NAME >> PO >> POS >> PE >> OP >> STRV;
                if(PO == "(" && POS > -1 && PE == ")" && OP == "="){
                    BANK_STR[POS] = STRV;
                }
            }
            else if(BANK_TYPE == "bool"){
                cin >> BANK_NAME >> PO >> POS >> PE >> OP >> BOOLV;
                if(PO == "(" && POS > -1 && PE == ")" && OP == "="){
                    BANK_BOOL[POS] = BOOLV;
                    if(BOOLV == "true"){
                        BOOLSYSTEM = 2;
                    }else if(BOOLV == "false"){
                        BOOLSYSTEM = 1;
                    }
                }
            }
        }else if(ALTER_BANK == "remove.values"){
            if(BANK_TYPE == "int"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    BANK_INT[POS] = 0;
                }
            }
            else if(BANK_TYPE == "dec"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    BANK_FLT[POS] = -1;
                }
            }
            else if(BANK_TYPE == "str"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    BANK_STR[POS] = "\0";
                }
            }
            else if(BANK_TYPE == "bool"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    BANK_BOOL[POS] = "\0";
                    BOOLSYSTEM = 0;
                }
            }
        }else if(ALTER_BANK == "output.values"){
            if(BANK_TYPE == "int"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    cout << "$ -> " << BANK_INT[POS];
                }
            }
            else if(BANK_TYPE == "dec"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    cout << "$ -> " << BANK_FLT[POS];
                }
            }
            else if(BANK_TYPE == "str"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    cout << "$ -> " << BANK_STR[POS];
                }
            }
            else if(BANK_TYPE == "bool"){
                cin >> BANK_NAME >> PO >> POS >> PE;
                if(PO == "(" && POS > -1 && PE == ")"){
                    cout << "$ -> " << BANK_BOOL[POS];
                }
            }
        }else if(ALTER_BANK == "operate.values"){
            if(BANK_TYPE == "int"){
                cin >> BANK_NAME >> PO >> POS1 >> PE >> OP >> PO >> POS2 >> PE;
                if(PO == "(" && PE == ")" && POS1 > -1 && POS2 > -1 && OP == "==" || OP == "/=" || OP == ">" || OP == "<"){
                    if(OP == "=="){
                        if(BANK_INT[POS1] == BANK_INT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == "/="){
                        if(BANK_INT[POS1] != BANK_INT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == ">"){
                        if(BANK_INT[POS1] > BANK_INT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == "<"){
                        if(BANK_INT[POS1] < BANK_INT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }
                }
            }else if(BANK_TYPE == "dec"){
                cin >> BANK_NAME >> PO >> POS1 >> PE >> OP >> PO >> POS2 >> PE;
                if(PO == "(" && PE == ")" && POS1 > -1 && POS2 > -1 && OP == "==" || OP == "/=" || OP == ">" || OP == "<"){
                    if(OP == "=="){
                        if(BANK_FLT[POS1] == BANK_FLT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == "/="){
                        if(BANK_FLT[POS1] != BANK_FLT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == ">"){
                        if(BANK_FLT[POS1] > BANK_FLT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == "<"){
                        if(BANK_FLT[POS1] < BANK_FLT[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }
                }
            }else if(BANK_TYPE == "str"){
                cin >> BANK_NAME >> PO >> POS1 >> PE >> OP >> PO >> POS2 >> PE;
                if(PO == "(" && PE == ")" && POS1 > -1 && POS2 > -1 && OP == "==" || OP == "/=" || OP == ">" || OP == "<"){
                    if(OP == "=="){
                        if(BANK_STR[POS1] == BANK_STR[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == "/="){
                        if(BANK_STR[POS1] != BANK_STR[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == ">"){
                        if(BANK_STR[POS1] > BANK_STR[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == "<"){
                        if(BANK_STR[POS1] < BANK_STR[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }
                }
            }else if(BANK_TYPE == "bool"){
                cin >> BANK_NAME >> PO >> POS1 >> PE >> OP >> PO >> POS2 >> PE;
                if(PO == "(" && PE == ")" && POS1 > -1 && POS2 > -1 && OP == "==" || OP == "/=" || OP == ">" || OP == "<"){
                    if(OP == "=="){
                        if(BANK_BOOL[POS1] == BANK_BOOL[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }else if(OP == "/="){
                        if(BANK_BOOL[POS1] != BANK_BOOL[POS2]){
                            cout << "$ -> true";
                        }else{
                            cout << "$ -> false";
                        }
                    }
                }
            }
        }else if(ALTER_BANK == "math.values"){
            cin >> MATH_FUNCTION;
            if(MATH_FUNCTION == "math.pv"){
                cin >> BANK_NAME >> PO >> POS1 >> PE >> OP >> PO >> POS2 >> PE >> RES >> PO >> POS3 >> PE;
                if(PO == "(" && PE == ")" && POS1 > -1 && POS2 > -1 && POS3 > -1 && RES == "result" && OP == "+" || OP == "-" || OP == "*" || OP == "/"){
                    if(OP == "+" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] + BANK_INT[POS2];
                    }else if(OP == "-" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] - BANK_INT[POS2];
                    }else if(OP == "*" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] * BANK_INT[POS2];
                    }else if(OP == "/" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] / BANK_INT[POS2];
                    }else if(OP == "+" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] + BANK_INT[POS2];
                    }else if(OP == "-" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] - BANK_INT[POS2];
                    }else if(OP == "*" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] * BANK_INT[POS2];
                    }else if(OP == "/" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] / BANK_INT[POS2];
                    }
                }
            }else if(MATH_FUNCTION == "math.v"){
                cin >> BANK_NAME >> PO >> POS1 >> PE >> OP >> INTI >> RES >> PO >> POS3 >> PE;
                if(PO == "(" && PE == ")" && POS1 > -1 && POS3 > -1 && RES == "result" && OP == "+" || OP == "-" || OP == "*" || OP == "/"){
                    if(OP == "+" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] + INTI;
                    }else if(OP == "-" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] - INTI;
                    }else if(OP == "*" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] * INTI;
                    }else if(OP == "/" && BANK_TYPE == "int"){
                        BANK_INT[POS3] = BANK_INT[POS1] / INTI;
                    }else if(OP == "+" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] + FLTI;
                    }else if(OP == "-" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] - FLTI;
                    }else if(OP == "*" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] * FLTI;
                    }else if(OP == "/" && BANK_TYPE == "dec"){
                        BANK_INT[POS3] = BANK_FLT[POS1] / FLTI;
                    }
                }
            }
        }
        i++;
        ALTER_BANK = "\0";
    }
    system("pause");
    return 0;
}