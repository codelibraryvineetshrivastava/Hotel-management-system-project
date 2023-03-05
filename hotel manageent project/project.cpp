#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodle=0,Qshake=0,Qchicken=0;
    int Srooms=0,Spasta=0,Sburger=0,Snoodle=0,Sshake=0,Schicken=0;
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodle=0,Total_shake=0,Total_chicken=0;

    cout<<"\n\t Quantity of item we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodle;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll:";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\t please select from the menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Burger";
    cout<<"\n4) Noodles";
    cout<<"\n5) shake";
    cout<<"\n6) chicken-roll";
    cout<<"\n7) Information regarding sales and collection";
    cout<<"\n) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter the number of rooms you want:";
        cin>>quant;
        if(Qrooms-Srooms >=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=(Total_rooms+quant*1200);
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
        }
        else{
            cout<<"\n\tonly"<<Qrooms-Srooms<<"Rooms remaining in hotel ";
            break;
        }
        case 2:
        cout<<"\n\n Enter Pasta Quantity :";
        cin>>quant;
        if(Qpasta-Spasta >=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta= (Total_pasta+quant*250);
            cout<<"\n\n\t\t"<<quant<<"pasta is the order!";
        }
        else{
            cout<<"\n\tonly"<<Qpasta-Spasta<<"Pasta remaining in hotel ";
            break;
        }
        case 3:
        cout<<"\n\n Enter Bureger Quantity :";
        cin>>quant;
        if(Qburger-Sburger >=quant)
        {
            Sburger=Sburger+quant;
            Total_burger=(Total_burger+quant*120);
            cout<<"\n\n\t\t"<<quant<<"burger is the order!";
        }
        else{
            cout<<"\n\tonly"<<Qburger-Sburger<<"Burger remaining in hotel ";
            break;
        }
        case 4:
        cout<<"\n\n Enter Noodles Quantity :";
        cin>>quant;
        if(Qnoodle-Snoodle >=quant)
        {
            Snoodle=Snoodle+quant;
            Total_noodle=(Total_noodle+quant*140);
            cout<<"\n\n\t\t"<<quant<<"Noodles is the order!";
        }
        else{
            cout<<"\n\tonly"<<Qnoodle-Snoodle<<"Noodles remaining in hotel ";
            break;
        }
        case 5:
        cout<<"\n\n Enter shake Quantity :";
        cin>>quant;
        if(Qshake-Sshake >=quant)
        {
            Sshake=Sshake+quant;
            Total_shake=(Total_shake+quant*150);
            cout<<"\n\n\t\t"<<quant<<"shake is the order!";
        }
        else{
            cout<<"\n\tonly"<<Qshake-Sshake<<"shake remaining in hotel ";
            break;
        }
        case 6:
        cout<<"\n\n Enter Chicken-roll Quantity :";
        cin>>quant;
        if(Qchicken-Schicken >=quant)
        {
            Schicken=Schicken+quant;
            Total_chicken=(Total_chicken+quant*120);
            cout<<"\n\n\t\t"<<quant<<"chicken is the order!";
        }
        else{
            cout<<"\n\tonly"<<Qchicken-Schicken<<"Chicken-roll remaining in hotel ";
            break;
        }
        case 7:
        cout<<"\n\t\tDetails of sales and collection :";
        cout<<"\n\n Number of rooms we had : "<<Qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
        cout<<"\n\n Remaining room : "<<Qrooms-Srooms;
        cout<<"\n\n Total rooms coolection for the day :"<<Total_rooms;

        cout<<"\n\n Number of pasta we had : "<<Qpasta;
        cout<<"\n\n Number of pasta we sold "<<Spasta;
        cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
        cout<<"\n\n Total pasta coolection for the day :"<<Total_pasta;

        cout<<"\n\n Number of burger we had : "<<Qburger;
        cout<<"\n\n Number of burgers sold "<<Sburger;
        cout<<"\n\n Remaining burger : "<<Qburger-Sburger;
        cout<<"\n\n Total burger coolection for the day :"<<Total_burger;

        cout<<"\n\n Number of Noodles we had : "<<Qnoodle;
        cout<<"\n\n Number of Noodles sold "<<Snoodle;
        cout<<"\n\n Remaining Noodles : "<<Qnoodle-Snoodle;
        cout<<"\n\n Total Noodles coolection for the day :"<<Total_noodle;

        cout<<"\n\n Number of shakes we had : "<<Qshake;
        cout<<"\n\n Number of shakes sold "<<Sshake;
        cout<<"\n\n Remaining shakes : "<<Qshake-Sshake;
        cout<<"\n\n Total shakes coolection for the day :"<<Total_shake;

        cout<<"\n\n Number of Chicken-roll we had : "<<Qchicken;
        cout<<"\n\n Number of Chicken-roll sold "<<Schicken;
        cout<<"\n\n Remaining Chicken-roll : "<<Qchicken-Schicken;
        cout<<"\n\n Total Chicken-roll coolection for the day :"<<Total_chicken;

        cout<<"\n\n\n Total Collection for the day: "<<Total_pasta+Total_burger+Total_noodle+Total_shake+Total_chicken;

        case 8:
            exit(0);
            default:
                cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;
}