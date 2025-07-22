#include <iostream>
using namespace std;

int main() {
    int choice;
    char choice_rail, choice1, choice2, choice3, choice_air, choice4, choice5, choice6, choice_road, choice7, choice8, choice9;
    cout << "!!!Welcome To The Ticket Booking Platform!!!";
    cout << "\nWhich Mode Of Transport Do You Prefer?";
    cout << "\n1. Railways";
    cout << "\n2. Airways";
    cout << "\n3. Roadways";
    cout << "\nYour Choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "\nThank you For Choosing Railways";
            cout << "\nDeparture From:";
            cout << "\na. Pune";
            cout << "\nb. Mumbai";
            cout << "\nc. Nashik";
            cout << "\nYour Choice: ";
            cin >> choice_rail;
            switch (choice_rail) {
                case 'a':
                    cout << "\nDeparture From: Pune";
                    cout << "\nArrival To:";
                    cout << "\ne. Mumbai";
                    cout << "\nf. Nashik";
                    cout << "\nYour Choice: ";
                    cin >> choice1;
                    switch (choice1) {
                        case 'e':
                            cout << "\nDeparture From: Pune";
                            cout << "\nArrival To: Mumbai";
                            cout << "\nTicket Fare: ₹1500";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'f':
                            cout << "\nDeparture From: Pune";
                            cout << "\nArrival To: Nashik";
                            cout << "\nTicket Fare: ₹600";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                case 'b':
                    cout << "\nDeparture From: Mumbai";
                    cout << "\nArrival To:";
                    cout << "\ng. Pune";
                    cout << "\nh. Nashik";
                    cout << "\nYour Choice: ";
                    cin >> choice2;
                    switch (choice2) {
                        case 'g':
                            cout << "\nDeparture From: Mumbai";
                            cout << "\nArrival To: Pune";
                            cout << "\nTicket Fare: ₹1500";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'h':
                            cout << "\nDeparture From: Mumbai";
                            cout << "\nArrival To: Nashik";
                            cout << "\nTicket Fare: ₹560";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                case 'c':
                    cout << "\nDeparture From: Nashik";
                    cout << "\nArrival To:";
                    cout << "\ni. Mumbai";
                    cout << "\nj. Pune";
                    cout << "\nYour Choice: ";
                    cin >> choice3;
                    switch (choice3) {
                        case 'i':
                            cout << "\nDeparture From: Nashik";
                            cout << "\nArrival To: Mumbai";
                            cout << "\nTicket Fare: ₹560";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'j':
                            cout << "\nDeparture From: Nashik";
                            cout << "\nArrival To: Pune";
                            cout << "\nTicket Fare: ₹700";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                default:
                    cout << "\nPlease Select Valid Option!!!";
            }
            break;
        case 2:
            cout << "\nThank you For Choosing Airways";
            cout << "\nDeparture From:";
            cout << "\na. Pune";
            cout << "\nb. Mumbai";
            cout << "\nc. Delhi";
            cout << "\nYour Choice: ";
            cin >> choice_air;
            switch (choice_air) {
                case 'a':
                    cout << "\nDeparture From: Pune";
                    cout << "\nArrival To:";
                    cout << "\nd. Mumbai";
                    cout << "\ne. Delhi";
                    cout << "\nYour Choice: ";
                    cin >> choice4;
                    switch (choice4) {
                        case 'd':
                            cout << "\nDeparture From: Pune";
                            cout << "\nArrival To: Mumbai";
                            cout << "\nTicket Fare: ₹4500";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'e':
                            cout << "\nDeparture From: Pune";
                            cout << "\nArrival To: Delhi";
                            cout << "\nTicket Fare: ₹6000";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                case 'b':
                    cout << "\nDeparture From: Mumbai";
                    cout << "\nArrival To:";
                    cout << "\nf. Pune";
                    cout << "\ng. Delhi";
                    cout << "\nYour Choice: ";
                    cin >> choice5;
                    switch (choice5) {
                        case 'f':
                            cout << "\nDeparture From: Mumbai";
                            cout << "\nArrival To: Pune";
                            cout << "\nTicket Fare: ₹4500";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'g':
                            cout << "\nDeparture From: Mumbai";
                            cout << "\nArrival To: Delhi";
                            cout << "\nTicket Fare: ₹6000";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                case 'c':
                    cout << "\nDeparture From: Delhi";
                    cout << "\nArrival To:";
                    cout << "\nh. Mumbai";
                    cout << "\ni. Pune";
                    cout << "\nYour Choice: ";
                    cin >> choice6;
                    switch (choice6) {
                        case 'h':
                            cout << "\nDeparture From: Delhi";
                            cout << "\nArrival To: Mumbai";
                            cout << "\nTicket Fare: ₹6000";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'i':
                            cout << "\nDeparture From: Delhi";
                            cout << "\nArrival To: Pune";
                            cout << "\nTicket Fare: ₹5000";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                default:
                    cout << "\nPlease Select Valid Option!!!";
            }
            break;
        case 3:
            cout << "\nThank you For Choosing Roadways";
            cout << "\nDeparture From:";
            cout << "\na. Pune";
            cout << "\nb. Mumbai";
            cout << "\nc. Nagpur";
            cout << "\nYour Choice: ";
            cin >> choice_road;
            switch (choice_road) {
                case 'a':
                    cout << "\nDeparture From: Pune";
                    cout << "\nArrival To:";
                    cout << "\nd. Mumbai";
                    cout << "\ne. Nagpur";
                    cout << "\nYour Choice: ";
                    cin >> choice7;
                    switch (choice7) {
                        case 'd':
                            cout << "\nDeparture From: Pune";
                            cout << "\nArrival To: Mumbai";
                            cout << "\nTicket Fare: ₹550";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'e':
                            cout << "\nDeparture From: Pune";
                            cout << "\nArrival To: Nagpur";
                            cout << "\nTicket Fare: ₹2000";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                case 'b':
                    cout << "\nDeparture From: Mumbai";
                    cout << "\nArrival To:";
                    cout << "\nf. Pune";
                    cout << "\ng. Nagpur";
                    cout << "\nYour Choice: ";
                    cin >> choice8;
                    switch (choice8) {
                        case 'f':
                            cout << "\nDeparture From: Mumbai";
                            cout << "\nArrival To: Pune";
                            cout << "\nTicket Fare: ₹600";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'g':
                            cout << "\nDeparture From: Mumbai";
                            cout << "\nArrival To: Nagpur";
                            cout << "\nTicket Fare: ₹1000";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                case 'c':
                    cout << "\nDeparture From: Nagpur";
                    cout << "\nArrival To:";
                    cout << "\nh. Mumbai";
                    cout << "\ni. Pune";
                    cout << "\nYour Choice: ";
                    cin >> choice9;
                    switch (choice9) {
                        case 'h':
                            cout << "\nDeparture From: Nagpur";
                            cout << "\nArrival To: Mumbai";
                            cout << "\nTicket Fare: ₹1100";
                            cout << "\nThank you for Using our Platform";
                            break;
                        case 'i':
                            cout << "\nDeparture From: Nagpur";
                            cout << "\nArrival To: Pune";
                            cout << "\nTicket Fare: ₹2000";
                            cout << "\nThank you for Using our Platform";
                            break;
                        default:
                            cout << "\nPlease Select Valid Option!!!";
                    }
                    break;
                default:
                    cout << "\nPlease Select Valid Option!!!";
            }
            break;
        default:
            cout << "\nPlease Select Valid Option!!!";
    }
    return 0;
}
