#include <iostream>
#include <windows.h>
#include <cmath>


using namespace std;

int main()

{

        SetConsoleOutputCP(CP_UTF8);

    string anotherCalc = "YES";
    while (anotherCalc=="YES" || anotherCalc=="yes" || anotherCalc=="Yes") {

    cout<< "       _______________________________________________     "<<endl;
    cout<< "      |    🎀Welcome to the Girl Math Calculator🎀    |    "<<endl;
    cout<< "      |_______________________________________________|    "<<endl; 
    cout<< "                                                            "<<endl;

    cout<< "                       hii bestie!!                "<<endl;
    cout<< "                                                     "<<endl;
    cout<< "                Let's do some girl math💅          "<<endl;
    cout<< "                                                     "<<endl;

    cout<< "       __________________    "<<endl;
    cout<< "      |    ✨MENU✨      |  "<<endl;
    cout<< "      |__________________|   "<<endl; 
    cout<< "                                                            "<<endl;

    cout<<"1.💸 Cost Per Use"<<endl;
    cout<<"2.🎫 Event Math"<<endl;
    cout<<"3.💰 Cashback Math"<<endl;
    cout<<"4.🪩  Core Memory Math"<<endl;
    cout<< "                                                            "<<endl;

    int choice;

    cout<< "What do you want to calculate?"<<endl;
    cout<< "Enter your choice: ";

    cin>>choice;

    if (cin.fail())
{
    break;
}

    if (choice==1) {
        cout<< "You have selected 1.💸 Cost Per Use" << endl;
        cout<<"\n";
        cout<<"Enter the total price of the item: ";
        double totalCost;
        cin>>totalCost;
        cout<<"\n";
        cout<<"Be honest... how many times will you use it?: ";
        int noOfUses;
        cin>>noOfUses;
        cout<<"\n";
        cout<<"✨ YOUR GIRL MATH RESULT ✨"<<endl;
        cout<<"\n";
        double costPerUse = totalCost/noOfUses;
        cout<< "The cost per use of the item is: "<<costPerUse<<endl;
        cout<<"\n";
        
        if (costPerUse<=250) {
            cout<<"GIRL MATH APPROVED✅"<<endl;
            cout<<"Honestly,"<<costPerUse<<" per use is a steal!"<<endl;
            
        }
        else if (costPerUse>250 && costPerUse<=1000) {
            cout<<"Honestly, not bad!"<<endl;
            cout<<"That's a pretty reasonable price per use!"<<endl;

        }
        else if (costPerUse>1000 && costPerUse<=5000) {
            cout<<"Okay girl..we need to talk😭"<<endl;
            cout<<"That's getting a little pricey per use"<<endl;

        }
        else if (costPerUse>5000) {
            cout<<"GIRL MATH HAS LEFT THE CHAT💀"<<endl;
            cout<<"You better use this thing EVERY.SINGLE.DAY."<<endl;
        
        }

    }

    else if (choice==2) {
        cout<< "You have selected 2.🎫 Event Math" << endl;
        cout<<"\n";
        cout<< "Enter the ticket price for the Event: ";
        double ticketPrice;
        cin>> ticketPrice;
        cout<<"\n";
        cout<<"For how many hours do you plan to attend the event?: ";
        double hours;
        cin>>hours;
        cout<<"\n";
        cout<<"Any additional costs for the event?(travel+food+drinks etc): ";
        double additionalCosts;
        cin>>additionalCosts;
        cout<<"\n";
        cout<<"✨ YOUR GIRL MATH RESULT ✨"<<endl;
        cout<<"\n";
        double totalPrice = ticketPrice+additionalCosts;
        double costPerHour = totalPrice/hours;
        cout<<"The total cost for event is: "<<totalPrice<<endl;
        cout<<"The cost per hour for the event is: "<<costPerHour<<endl;
        cout<<"\n";


        if (costPerHour<=500) {
            cout<<"GIRL MATH APPROVED✅"<<endl;
            cout<<"Honestly,"<<costPerHour<<" per hour is a steal!"<<endl;
            
        }
        else if (costPerHour>500 && costPerHour<=1000) {
            cout<<"Honestly, not bad!"<<endl;
            cout<<"That's a pretty reasonable price per hour!"<<endl;

        }
        else if (costPerHour>1000 && costPerHour<=5000) {
            cout<<"Okay girl..we need to talk😭"<<endl;
            cout<<"That's getting a little pricey per hour"<<endl;

        }
        else if (costPerHour>5000) {
            cout<<"GIRL MATH HAS LEFT THE CHAT💀"<<endl;
            cout<<"You better enjoy this event EVERY.SINGLE.HOUR."<<endl;
        }

    }

    else if (choice==3) {
        cout<< "You have selected 3.💰 Cashback Math" << endl;
        cout<<"\n";
        cout<< "Enter the total cost of the item: ";
        double TotalCost;
        cin>> TotalCost;
        cout<<"\n";
        cout<<"Enter the cashback percentage: ";
        double cashbackPercentage;
        cin>>cashbackPercentage;
        cout<<"\n";
        cout<<"✨ YOUR GIRL MATH RESULT ✨"<<endl;
        cout<<"\n";

        double cashbackAmount = (cashbackPercentage / 100) * TotalCost;
        cout<<"The cashback amount is: "<<cashbackAmount<<endl;
        cout<<"\n";
        cout<<"The effective cost of the item after cashback is: "<<TotalCost-cashbackAmount<<endl;
        cout<<"\n";

        if (cashbackAmount>=0 && cashbackAmount<=100) {
            cout<< cashbackAmount << " back? It's a start, but girl, we can do better!💸" << endl;
        
        }
        else if (cashbackAmount>100 && cashbackAmount<=500) {
            cout<< "Nice! " << cashbackAmount << " back is a solid win, bestie! 💅" << endl;
        }
        else if (cashbackAmount>500 && cashbackAmount<=2000) {
            cout<< "Now we're talking! " << cashbackAmount << " back is chef's kiss. 😍" << endl;
        }
        else {
            cout<< "Ohhh that's a whole cashback glow-up! " << cashbackAmount << " back? GIRL MATH IS SERVING✨" << endl;
        }
    }
    else if (choice==4) {
        cout<< "You have selected 4.🪩 Core Memory Math" << endl;
        cout<<"\n";
        cout<<"Enter the total amount needed to make this core memory: "<<endl;
        double totalAmount;
        cin>> totalAmount;
        cout<<"\n";
        string Useranswer;
        cout<<"Would you regret NOT doing it?👀(YES/NO): "<<endl;

        cin>>Useranswer;
        if (Useranswer=="YES" || Useranswer=="yes" || Useranswer=="Yes") {
            cout<<"\n";
            cout<<"✨ YOUR GIRL MATH RESULT ✨"<<endl;
            cout<<"\n";
            cout<<"Then technically, you are not spending "<<totalAmount<<" on this core memory, you are avoiding future regret!"<<endl;
        }
        else if (Useranswer=="NO" || Useranswer=="no" || Useranswer=="No") {
            cout<<"\n";
            cout<<"✨ YOUR GIRL MATH RESULT ✨"<<endl;
            cout<<"\n";
            cout<<"Then save the "<<totalAmount<<" for something else. Your future self will thank you🥹"<<endl;
        }
        else {
            cout<<"\n";
            cout<<"✨ YOUR GIRL MATH RESULT ✨"<<endl;
            cout<<"\n";
            cout<<"Oops bestie! That's not a valid answer. Please answer with YES or NO."<<endl;
        }
    }
    else {
        cout<< "Oops bestie! That's not on the menu 🎀 Pick an option from 1 to 4!" << endl;
    }
    
    cout<< "\n";

    cout<<"Would you like to perform another calculation? (YES/NO): ";
    
    cin>> anotherCalc;
    
    cout<<"\n";

    }

    cout<<"Thanks for using the Girl Math Calculator!💖"<<endl;
    cout<<"\n";

    return 0;
}