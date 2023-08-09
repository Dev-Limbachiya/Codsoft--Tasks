#include <iostream>

using namespace std;

int main() {
    int selected_movie;
    int number_of_seats;
    int movie_confirmed;
    int seat_valid ;

    int selected_seats_1[] = {3, 4, 5, 6, 7, 10, 12, 13, 16, 18, 20, 24, 27, 28, 29, 30, 34, 35, 37, 39, 43, 46, 48, 49, 50, 51, 52, 53, 54};
    int selected_seats_2[] = {1, 3, 7, 8, 9, 11, 13, 14, 19, 20, 21, 22, 25, 26, 28, 30, 33, 35, 37, 39, 41, 42, 43, 44, 46, 48, 49, 51, 52};
    int selected_seats_3[] = {2, 5, 6, 7, 10, 12, 16, 17, 19, 21, 22, 23, 24, 25, 26, 28, 29, 30, 31, 33, 35, 38, 39, 43, 47, 48, 50, 55, 56};

    int filled_1 = sizeof(selected_seats_1) / sizeof(selected_seats_1[0]);
    int avail_1 = 56 - filled_1;
    int filled_2 = sizeof(selected_seats_2) / sizeof(selected_seats_2[0]);
    int avail_2 = 56 - filled_2;
    int filled_3 = sizeof(selected_seats_3) / sizeof(selected_seats_3[0]);
    int avail_3 = 56 - filled_3;
    cout <<"-------------------------------------------------------------"<<endl;
    cout << "       .....Welcome to Movie Booking system....." << endl;
    cout <<"-------------------------------------------------------------"<<endl;
    cout << "Please fill the details according to your requirements" << endl;
    cout << endl;
    cout << "We have total 3  movies available for now " << endl;
    cout << endl;
    cout << "1. AVENGERS:ENDGAME chapter 2 at prize 180 ruppes" << endl;
    cout << "2. URI at prize 150 ruppes" << endl;
    cout << "3. MAARI 2 at prize 130 ruppes" << endl;
    cout << endl;
    cout << "Chose your movie (as 1,2 or 3): " << ends;
    cin >> selected_movie;
    cout << endl;

    switch (selected_movie)
    {
        case 1: cout << ".....AVENGERS:ENDGAME....." <<endl;
        movie_confirmed = 1 ;
        cout << "Unavailable seats (already occupied) are : " << ends;
        cout << filled_1 << " out of 56" << endl;
        cout << endl;

        cout << "Unavailable seat number :" << ends;
        for (int i = 0; i < filled_1; i++) {
        cout << selected_seats_1[i] << ends;
        if (i != filled_1 - 1) {
            cout << "," << ends;
        }
        else {
            cout << "" << endl;
            }
        }
        cout << endl;
            cout << "Availabe seats :" << avail_1 << endl;
        break;

        case 2: cout << ".....URI....." <<endl;
        movie_confirmed = 2 ;
        cout << "Unavailable seats (already occupied) are : " << ends;
        cout << filled_2 << " out of 56" << endl;
        cout << endl;

        cout << "Unavailable seat number :" << ends;
        for (int i = 0; i < filled_2; i++) {
        cout << selected_seats_2[i] << ends;
        if (i != filled_2 - 1) {
            cout << "," << ends;
        }
        else {
            cout << "" << endl;
            }
        }
        cout << endl;
            cout << "Availabe seats: " << avail_2 << endl;
        break;

        case 3: cout << ".....MAARI 2....." <<endl;
        movie_confirmed = 3 ;
        cout << "Unavailable seats (already occupied) are : " << ends;
        cout << filled_3 << " out of 56" << endl;
        cout << endl;

        cout << "Unavailable seat number :" << ends;
        for (int i = 0; i < filled_3; i++) {
        cout << selected_seats_3[i] << ends;
        if (i != filled_3 - 1) {
            cout << "," << ends;
        }
        else {
            cout << "" << endl;
            }
        }
        cout << endl;
            cout << "Availabe seats :" << avail_3 << endl;
        break;

        default:
                cout <<endl;
                cout << "You entered wrong choice  " <<selected_movie << ".  Your choice must be in (1,2 and 3) movies " << endl;
    }

    cout << "How many seats you want to book ? : " <<ends;
    cin >> number_of_seats;
    cout << endl;

    switch (movie_confirmed)
    {
        case 1:
        if (number_of_seats > avail_1 ) {
            cout << "sorry...We do not have that number of available seats." << endl;
        }
        break;

        case 2:
        if (number_of_seats > avail_2 ) {
            cout << "sorry...We do not have that number of available seats." << endl;
        }
        break;

        case 3:
        if (number_of_seats > avail_3 ) {
            cout << "sorry...We do not have that number of available seats." << endl;
        }
        break;
    }

    int* chosen_seats = new int[number_of_seats];
    cout<< "Please enter the seat.no that you want to book" <<endl;

    switch(movie_confirmed){
    case 1:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
        cout << "enter seat.no " << i << " :" << ends;
        cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 56) {
            cout << "Invalid seat number. Please enter a valid seat number (1 to 56)." << endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                    cout << "You had already chosen that seat before. Enter another seat number." << endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_1; m++) {
                    if (selected_seats_1[m] == chosen_seats[i - 1]) {
                        cout << "Selected seat is already occupied. Please choose another seat." << endl;
                        break;
                        break;
                    } 
                    else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    case 2:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
        cout << "enter seat.no " << i << " :" << ends;
        cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 56) {
            cout << "Invalid seat number. Please enter a valid seat number (1 to 56)." << endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                    cout << "You had already chosen that seat before. Enter another seat number." << endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_2; m++) {
                    if (selected_seats_2[m] == chosen_seats[i - 1]) {
                        cout << "Selected seat is already occupied. Please choose another seat." << endl;
                        break;
                    } else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    case 3:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
        cout << "enter seat.no " << i << " :" << ends;
        cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 56) {
            cout << "Invalid seat number. Please enter a valid seat number (1 to 56)." << endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                    cout << "You had already chosen that seat before. Enter another seat number." << endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_3; m++) {
                    if (selected_seats_3[m] == chosen_seats[i - 1]) {
                        cout << "Selected seat is already occupied. Please choose another seat." << endl;
                        break;
                    } else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    }

    cout << endl << endl;
    cout << "..... TOTAL BILL ....." << endl;
    cout << endl;
    cout << "Movie Name : " << ends;

    switch(selected_movie){
        case 1 : cout << " AVENGERS:ENDGAME " << endl;
        break;

        case 2 : cout << " URI " << endl;
        break;
        
        case 3 : cout << " MAARI 2 " << endl;
        break;

    }

    cout << "Seats selected : " << ends;
    cout << number_of_seats << endl;
    cout << endl;

    cout << "selected seats' number " << endl;

    for (int i = 1; i <= number_of_seats; i++)
    {
        cout << "Seat number " << i << " : " << ends; 
        cout << chosen_seats[i - 1] << endl; 
    }
    
    cout << endl;
    cout <<"-------------------------------------------------------------"<<endl;
    cout << "Ticket Cost Per Seat: " << ends;

    switch (selected_movie)
    {
    case 1: cout << "180 Rupees " << endl;
        break;

    case 2: cout << "150 Rupees " << endl;
        break;

    case 3: cout << "130 Rupees " << endl;
        break;

    }

    cout<< "Total Cost : " << ends;

    switch (selected_movie)
    {
    case 1: cout << 180 * number_of_seats << ends;
        break;

    case 2: cout << 150 * number_of_seats << ends;
        break;

    case 3: cout << 130 * number_of_seats << ends;
        break;

    }

    cout << " Rupees" << endl;
    cout <<"-------------------------------------------------------------"<<endl;
    cout << endl;
    cout<< "..... THANK YOU FOR CHOOSING OUR THEATER ......" << endl;
    cout << "..... ENJOY THE MOVIE ....." << endl;
    cout << ends;  

    return 0;
}