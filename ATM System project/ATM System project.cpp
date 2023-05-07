#include <iostream>
#include <string>
using namespace std;

class withdraw {
private:
    float value;
public:
    float withdrawValue(float value, float balance) {
        balance -= value;
        return balance;
    }
};

class deposit {
private:
    float value;
public:
    float depositValue(float value, float balance) {
        balance += value;
        return balance;
    }
};
class newPassword {
private:
    int value;
public:
    void setPassword(int pass) {
        value = pass;
    }
};

class pinCardForOther {
private:
    float balanceVar;
public:
    float balance() {

    }
};

class transferToOther {
private:
    float pinCard, value;
public:
    void transfer(float newvalue, float balance, float pinCardOther) {
        //pinCardForOther x;
        pinCard = pinCardOther;
        value = newvalue;
        //x.balance() + value;
        cout << "You are sent " << value << " to " << pinCardOther << endl;
    }
};

class currency {
private:
    double value;
public:
    double converttoUSD(double newvalue) {
        value = newvalue / 30.27;
        return value;
    }
    double converttoEUR(float newvalue) {
        value = newvalue / 33.94;
        return value;
    }
    double converttoAED(float newvalue) {
        value = newvalue / 8.24;
        return value;
    }
    double converttoBTC(float newvalue) {
        value = newvalue / 874228.67;
        return value;
    }
    double converttoKWD(float newvalue) {
        value = newvalue / 98.83;
        return value;
    }
    double converttoQAR(float newvalue) {
        value = newvalue / 8.31;
        return value;
    }
    
};

class yourBalance {
private:
    float balance;
public:
    void yourbalance(float newbalance) {
        balance = newbalance;
        cout << "Your Balance is " << balance;
    }
};

class payForCompany {
private:
    int idStu;
    float value;
    string coNam;
public:
    void yourCompany(int id, float newvalue,string name) {
        idStu = id;
        value = newvalue;
        coNam = name;
        cout << "We sent " << value << " to " << name << " by your ID " << idStu << endl;
    }
};

class PayForBank {
private:
    float balance;
    float value;
public:
    float Loan(float newvalue, float newbalance) {
        balance = newbalance;
        value = newvalue;
        balance -= value;
        return balance;
    }
};

class getFromBank {
private:
    float balance;
    float value;
public:
    float Loan(float newvalue, float newbalance) {
        balance = newbalance;
        value = newvalue;
        balance += value;
        return balance;
    }
};
int main()
{
    int operationType,hisLanguage,idCardNumber,passwordIdCard,check=25;
    float balance=1000.0;
    
    cout << "\t\t\t################################################################################" << endl;
    cout << "\t\t\t#                                                                              #" << endl;
    cout << "\t\t\t#                           Hello to Tohamy ATM!                               #" << endl;
    cout << "\t\t\t#                                                                              #" << endl;
    cout << "\t\t\t################################################################################" << endl;
    
    cout << "choose your Language \n ";
    cout << "\t (1) English \t (2) Arabic \n";
    cout << "English is preffred we can't use other now! I am sorry.\n";
    cin >> hisLanguage;
    cout << "choose your opeartion \n";
    cout << "\t (1) ID Card \t (2) By Phone Number \n\n";
    cout << "Enter number of your operation: \n";
    cin >> operationType;
    while(check == 25){
    if (operationType == 1) {

        cout << "\n \t \t Welcome To Our Cards \n\n";
        cout << "Enter your PIN Card Number: ";
        cin >> idCardNumber;
        cout << "Enter     your    Password: ";
        cin >> passwordIdCard;
        // we want to check security if Id card and password are correct 
        // we need to use data base for this
        // we can use function includes this user and check
        // if we can make name for every user that is good 
        // we need to print the name of this user 
        // cout << "welcome Mr *his_name*";

        int typeOperationATM;

        cout << " \n \n \t \t Welcome our good user! \n";
        cout << "choose the type of your operation on ATM \n";
        cout << "\n \t \t \t \tMain Menu \n";
        cout << "\t (1) Balance Inquiry     \t (2) Withdraw \n";
        cout << "\t (3) Password Change     \t (4) Deposit \n";
        cout << "\t (5) Transfer for other  \t (6) Currency Exchange \n";
        cout << "\t (7) Pay for other       \t (8) Pay off your loan \n";
        cout << "\t (9) Take a loan         \t (10) transfer outside Country \n";

        cout << "\nEnter number of your operation on ATM: ";
        cin >> typeOperationATM;

        if (typeOperationATM == 2) {
            float withdrawValue;
            withdraw card;

            cout << "\n\t \t Withdraw\n";
            cout << "Enter value: ";
            cin >> withdrawValue;
            balance = card.withdrawValue(withdrawValue, balance);
            cout << "Your withdraw value is: " << withdrawValue << endl;
            cout << "And your Balance = " << balance << endl;

        }
        else if (typeOperationATM == 1) {
            cout << "\n\t \t Balancy Inquiry \n";
            yourBalance card;
            card.yourbalance(balance);
            cout << endl;
        }
        else if (typeOperationATM == 3) {
            int newpass,x;
            newPassword n;
            cout << "\n\t \tChange Password\n";
            cout << "We Are Reset Your Password" << endl;
            cout << "Enter Your New Password : ";
            cin >> newpass;
            n.setPassword(passwordIdCard);
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "ReEnter Your New Password :";
                cin >> newpass;
            }
            else {
                cout << "Don't Worry, We return Your old password.";
            }
            cout << endl;
        }

        else if (typeOperationATM == 4) {
            float depositValue;
            deposit card;

            cout << "\n\t \t Deposit\n";
            cout << "Enter value: ";
            cin >> depositValue;
            balance = card.depositValue(depositValue, balance);
            cout << "Your deposit value is: " << depositValue << endl;
            cout << "And your Balance = " << balance << endl;
        }
        else if (typeOperationATM == 5) {
            transferToOther card;
            float pincard, value;
            short x;

            cout << "\n\t \t Transfer for other\n";
            cout << "Enter PIN card for other: ";
            cin >> pincard;
            cout << "Enter value: ";
            cin >> value;
            card.transfer(value, balance, pincard);
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if(x == 1)
                balance -= value;
            cout << "And your Balance = " << balance << endl;
        }

        else if (typeOperationATM == 6) {
            currency card;
            float value;
            int x;
            cout << "\n\t \t Currency Exchange And Withdraw\n";
            cout << "Choose another Currency\n";
            cout << "\t(1)USD    \t (2)EUR"<<endl; // EGP
            cout << "\t(3)AED    \t (4)BTC" << endl;
            cout << "\t(5)KWD    \t (6)QAR" << endl;
            cin >> x;
            cout << "\nEnter Your EGP value: ";
            cin >> value;

            switch (x) {
            case 1:
                cout << "Your " << value << " EGP = " << card.converttoUSD(value) << endl;
                //balance -= card.converttoUSD(value);
                break;
            case 2:
                cout << "Your " << value << " EGP = " << card.converttoEUR(value) << endl;
                //balance -= card.converttoEUR(value);
                break;
            case 3:
                cout << "Your " << value << " EGP = " << card.converttoAED(value) << endl;
                //balance -= card.converttoAED(value);
                break;
            case 4:
                cout << "Your " << value << " EGP = " << card.converttoBTC(value) << endl;
                //balance -= card.converttoBTC(value);
                break;
            case 5:
                cout << "Your " << value << " EGP = " << card.converttoKWD(value) << endl;
                //balance -= card.converttoKWD(value);
                break;
            case 6:
                cout << "Your " << value << " EGP = " << card.converttoQAR(value) << endl;
                //balance -= card.converttoQAR(value);
                break;
            }
            cout << "Your Balance Is " << balance - value << endl;

            // cout << "Your EGP value = ";
        }   
        else if (typeOperationATM == 7) {
            string testString;
            int idNum,x;
            float value;
            payForCompany comPany;

            cout << "\n\t \t Pay For Other\n";
            cout << "Enter Your Company or University Name: ";
            cin.ignore();
            getline(cin, testString);
            cout << "\nEnter Your ID: ";
            cin >> idNum;
            cout << "Enter Your Value to Send to " << testString << ": ";
            cin >> value;
            comPany.yourCompany(idNum,value,testString);
            
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "Okay, ";
                comPany.yourCompany(idNum, value, testString);
                balance -= value;
            }
            else {
                cout << "Don't Worry, We return Your Value.";
            }
            cout << "Your balance is " << balance << endl;
        }
        else if (typeOperationATM == 8) {
            int x;
            float value;
            PayForBank card;

            cout << "\n\t \t Pay Off Your Loan To The Bank \n\n";
            cout << "Enter Your Value: ";
            cin >> value;

            cout << "We will take " << value << " from your balance \n";
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "Thanks, We get " << value << " from your balance to Pay Off Your Loan." << endl;
                balance = card.Loan(value, balance);
            }
            else {
                cout << "Don't Worry, We return Your Value.";
            }
            
            cout << "Your balance is " << balance << endl;

        }
        else if (typeOperationATM == 9) {
            float value;
            getFromBank card;
            int x;
            // Take a loan from the bank
            cout << "\n\t \t Take A Loan From The Bank \n\n";
            cout << "Enter Your Value: ";
            cin >> value;

            cout << "We will add " << value << " to your balance \n";
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "We Added " << value << " to your balance." << endl;
                balance = card.Loan(value, balance);
            }
            else {
                cout << "Don't Worry, We return Your Value.";
            }
            cout << "Your balance is " << balance << endl;
        }
        else if (typeOperationATM == 10) {
            int x,pINCard;
            float value;
            currency card;

            cout << "\n\t \t Transfer Outside The Country \n\n";
            cout << "Enter PIN Card For Other: ";
            cin >> pINCard;

            cout << "Enter Your Value: ";
            cin >> value;
            cout << "You will convert Currency to another or NO?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "Choose another Currency\n";
                cout << "\t(1)USD    \t (2)EUR" << endl; // EGP
                cout << "\t(3)AED    \t (4)BTC" << endl;
                cout << "\t(5)KWD    \t (6)QAR" << endl;
                cin >> x;
                
                switch (x) {
                case 1:
                    cout << "Your " << value << " EGP = " << card.converttoUSD(value) << endl;
                    cout << "We will sent " << card.converttoUSD(value) << " to " << pINCard << endl;
                    break;
                case 2:
                    cout << "Your " << value << " EGP = " << card.converttoEUR(value) << endl;
                    cout << "We will sent " << card.converttoEUR(value) << " to " << pINCard << endl;
                    break;
                case 3:
                    cout << "Your " << value << " EGP = " << card.converttoAED(value) << endl;
                    cout << "We will sent " << card.converttoAED(value) << " to " << pINCard << endl;
                    break;
                case 4:
                    cout << "Your " << value << " EGP = " << card.converttoBTC(value) << endl;
                    cout << "We will sent " << card.converttoBTC(value) << " to " << pINCard << endl;
                    break;
                case 5:
                    cout << "Your " << value << " EGP = " << card.converttoKWD(value) << endl;
                    cout << "We will sent " << card.converttoKWD(value) << " to " << pINCard << endl;
                    break;
                case 6:
                    cout << "Your " << value << " EGP = " << card.converttoQAR(value) << endl;
                    cout << "We will sent " << card.converttoQAR(value) << " to " << pINCard << endl;                    
                    break;
                }
                cout << "We will sent " << value << " to " << pINCard << endl;
                
            }
            cout << "Are you sure?" << endl;
            cout << "(1)Yes  \t  (2)No\n";
            cout << "Enter Your Answer: ";
            cin >> x;
            if (x == 1) {
                cout << "We sent " << value << " to " << pINCard << endl;
                balance -= value;
            }
            else {
                cout << "Don't Worry, We return Your Value.";
            }

            cout << "Your Balance Is " << balance - value << endl;
        }


    }
    

else {
    cout << "Welcome to Our Phone Numbers."<< endl;
    cout << " "<< endl;
    cout << "                       '''''''''''''''''''''''''''''                      " << endl;
    cout << "        '''''''''''''''                             '''''''''''''''       " << endl;
    cout << "''''''''                                                           '''''''" << endl;
    cout << "..                     Welcome to Our Phone Numbers.                    .." << endl;
    cout << ",,,,,,,,                                                           ,,,,,,," << endl;
    cout << "        ,,,,,,,,,,,,,,,                             ,,,,,,,,,,,,,,,       " << endl;
    cout << "                       ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,                      " << endl;
    
    }








    cout << "\t\t\t********************************************************************************" << endl;
    cout << "\t\t\t*                          You Need Other Process?                             *" << endl;
    cout << "\t\t\t********************************************************************************" << endl;
    cout << "(1)Yes  \t  (2)No\n";
    cout << "Enter Your Answer: ";
    int y;
    cin >> y;
    if (y == 1)
        check = 25;
    else{
        check = 5;
        cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "\t\t\t~````````````````````````````````````````````````````````````````````````````````~" << endl;
        cout << "\t\t\t~`                                                                              '~" << endl;
        cout << "\t\t\t~`                         Thank you, our dear customer                         '~" << endl;
        cout << "\t\t\t~,                                See you soon.                                 ,~" << endl;
        cout << "\t\t\t~,                                                                              ,~" << endl;
        cout << "\t\t\t~,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,~" << endl;
        cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    }


}
}

 