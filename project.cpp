//$hell++
#include <iostream>
using namespace std;
int main(){
    cout << "SHELL++ INSTALLER\n";
    //Install $hell++
    string SINSTALL,SUVERSION,SVERSION,SSTART;
    //Install Process
    cin >> SINSTALL;
    if(SINSTALL == "$install"){
        cout << "$ -> INSTALL COMPLETE\n";
        cin >> SUVERSION >> SVERSION;
        if(SUVERSION == "$usingversion" && SVERSION == "0.1"){
            cout << "$ -> VERSION " << SVERSION << " SELECTED\n";
            cin >> SSTART;
            if(SSTART == "$startshellpp"){
                cout << "$ -> LET'S PROGRAM\n$ SHELL++ 0.1 BETA $\n\n";
                //Commands
                string CMD;
                //Symbols
                string PO,PE,KO,KE,BO,BE,SC,EQ;
                //Var Call
                string VARCALL1,VARCALL2;
                //Type
                string TYPE1,TYPE2;
                //Message
                string MSG;
                //If Else
                string IF,ELSE;
                //Print
                string PRINT;
                //Numeric Values
                int INT_VALUE1,INT_VALUE2;
                float DEC_VALUE1,DEC_VALUE2;
                //Operators
                string OP;
                //Names
                string NAME1,NAME2;
                //Finctions
                string CHECK,RETURN;
                //Result
                string RES;
                float RESV;
                bool BOOL_VALUE;
                //Write Command
                cin >> CMD;
                //Print
                if(CMD == "$terminal.write"){
                    cin >> PO >> MSG >> PE >> SC;
                }
                //Variable Operation
                else if(CMD == "$terminal.varoperation"){
                    cin >> VARCALL1 >> TYPE1 >> NAME1;
                    if(TYPE1 == "int"){
                        cin >> EQ >> INT_VALUE1 >> SC;
                    }else if(TYPE1 == "dec"){
                        cin >> EQ >> DEC_VALUE1 >> SC;
                    }
                    cin >> VARCALL2 >> TYPE2 >> NAME2;
                    if(TYPE2 == "int"){
                        cin >> EQ >> INT_VALUE2 >> SC;
                    }else if(TYPE2 == "dec"){
                        cin >> EQ >> DEC_VALUE2 >> SC;
                    }
                    cin >> RES >> EQ >> NAME1 >> OP >> NAME2 >> SC;
                    if(TYPE1 == "int" && OP == "+" && TYPE2 == "int"){
                        RESV = INT_VALUE1 + INT_VALUE2;
                    }else if(TYPE1 == "int" && OP == "+" && TYPE2 == "dec"){
                        RESV = INT_VALUE1 + DEC_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "+" && TYPE2 == "int"){
                        RESV = DEC_VALUE1 + INT_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "+" && TYPE2 == "dec"){
                        RESV = DEC_VALUE1 + DEC_VALUE2;
                    }else if(TYPE1 == "int" && OP == "-" && TYPE2 == "int"){
                        RESV = INT_VALUE1 - INT_VALUE2;
                    }else if(TYPE1 == "int" && OP == "-" && TYPE2 == "dec"){
                        RESV = INT_VALUE1 - DEC_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "-" && TYPE2 == "int"){
                        RESV = DEC_VALUE1 - INT_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "-" && TYPE2 == "dec"){
                        RESV = DEC_VALUE1 - DEC_VALUE2;
                    }else if(TYPE1 == "int" && OP == "*" && TYPE2 == "int"){
                        RESV = INT_VALUE1 * INT_VALUE2;
                    }else if(TYPE1 == "int" && OP == "*" && TYPE2 == "dec"){
                        RESV = INT_VALUE1 * DEC_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "*" && TYPE2 == "int"){
                        RESV = DEC_VALUE1 * INT_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "*" && TYPE2 == "dec"){
                        RESV = DEC_VALUE1 * DEC_VALUE2;
                    }else if(TYPE1 == "int" && OP == "/" && TYPE2 == "int"){
                        RESV = INT_VALUE1 / INT_VALUE2;
                    }else if(TYPE1 == "int" && OP == "/" && TYPE2 == "dec"){
                        RESV = INT_VALUE1 / DEC_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "/" && TYPE2 == "int"){
                        RESV = DEC_VALUE1 / INT_VALUE2;
                    }else if(TYPE1 == "dec" && OP == "/" && TYPE2 == "dec"){
                        RESV = DEC_VALUE1 / DEC_VALUE2;
                    }
                }else if(CMD == "$terminal.variablecheckequality"){
                    cin >> VARCALL1 >> TYPE1 >> NAME1;
                    if(TYPE1 == "int"){
                        cin >> EQ >> INT_VALUE1 >> SC;
                    }else if(TYPE1 == "dec"){
                        cin >> EQ >> DEC_VALUE1 >> SC;
                    }
                    cin >> VARCALL2 >> TYPE2 >> NAME2;
                    if(TYPE2 == "int"){
                        cin >> EQ >> INT_VALUE2 >> SC;
                    }else if(TYPE2 == "dec"){
                        cin >> EQ >> DEC_VALUE2 >> SC;
                    }
                    cin >> CHECK >> PO >> NAME1 >> EQ >> NAME2 >> PE >> KO >> RETURN >> SC >> KE;
                }else if(CMD == "$terminal.ifelse"){
                    cin >> VARCALL1 >> TYPE1 >> NAME1;
                    if(TYPE1 == "int"){
                        cin >> EQ >> INT_VALUE1 >> SC;
                    }else if(TYPE1 == "dec"){
                        cin >> EQ >> DEC_VALUE1 >> SC;
                    }
                    cin >> VARCALL2 >> TYPE2 >> NAME2;
                    if(TYPE2 == "int"){
                        cin >> EQ >> INT_VALUE2 >> SC;
                    }else if(TYPE2 == "dec"){
                        cin >> EQ >> DEC_VALUE2 >> SC;
                    }
                    cin >> IF >> PO >> NAME1 >> OP >> NAME2 >> PE >> KO >> PRINT >> PO >> MSG >> PE >> SC >> KE >> ELSE >> KO >> PRINT >> PO >> MSG >> PE >> SC >> KE;
                }
                //If else Lexer
                if(VARCALL1 == "$add.variable" && VARCALL2 == "$add.variable" && TYPE1 == "int" || TYPE1 == "dec" && TYPE2 == "int" || TYPE2 == "dec" && NAME1 != "\0" && NAME2 != "\0" && IF == "$if" && PO == "(" && OP == "==" || OP == ">" || OP == "<" && PE == ")" && KO == "{" && PRINT == "$print" && SC == ";" && ELSE == "$else"){
                    if(INT_VALUE1 == INT_VALUE2 && DEC_VALUE1 == DEC_VALUE2){
                        cout << "$ -> " << MSG;
                    }else{
                        cout << "$ -> " << MSG;
                    }
                }
                //Var operations Lexer
                if(VARCALL1 == "$add.variable" && VARCALL2 == "$add.variable" && TYPE1 == "int" || TYPE1 == "dec" && TYPE2 == "int" || TYPE2 == "dec" && NAME1 != "\0" && NAME2 != "\0" && EQ == "=" && SC == ";" && RES == "$result"){
                    cout << "$ -> " << RESV;
                }
                //Var equality Lexer
                if(VARCALL1 == "$add.variable" && VARCALL2 == "$add.variable" && TYPE1 =="int" || TYPE1 == "dec" && TYPE2 == "int" || TYPE2 == "dec" && NAME1 != "\0" && NAME2 != "\0" && CHECK == "$function.check" && PO == "(" && PE == ")" && EQ == "==" && KO == "{" && RETURN == "$return" && SC == ";" && KE == "}"){
                    if(INT_VALUE1 == INT_VALUE2 && DEC_VALUE1 == DEC_VALUE2){
                        BOOL_VALUE = true;
                        cout << "$ -> true";
                    }else{
                        BOOL_VALUE = false;
                        cout << "$ -> false";
                    }
                }
                //Print Lexer
                if(PO == "(" && PE == ")" && SC == ";"){
                    cout << "$ -> " << MSG;
                }
            }else{
                cout << "$ -> ERROR: " << SSTART << " IS NOT A COMMAND";
            }
        }else{
            cout << "$ -> ERROR:IMPORT VERSION NOT IS CORRECT";
        }
    }else{
        cout << "$ -> ERROR: " << SINSTALL << " IS NOT A COMMAND";
    }
    return 0;
}