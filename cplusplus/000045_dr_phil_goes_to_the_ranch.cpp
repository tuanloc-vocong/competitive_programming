// Title: Dr Phil goes to the ranch
// Source: Codechef
// Difficulty:
// Time Complexity:
// Topic: Stack & Queue

/**
 * Dr. Phil has put you in charge of his new hospital while he is chilling at the ranch. N people have booked appointment with
 * the Doctor today numbered from 1 to N such that person X booked appointment before person Y if X<Y.
 *
 * Now, the people do not necessarily arrive at the hospital on time, so you decide of an unusual way of handling the situation.
 * At the start you fulfill the appointment of the people who booked first (so if person 1 is available then that person can meet
 * the doctor) otherwise you look for next available person.
 *
 * If you fulfill the appointment of any person and their exist some people (1 or more) who have booked earlier but haven’t
 * arrived at the hospital yet, then those people are said to have missed their appointment.
 *
 * If at some point of time there exists a set of people that have missed their appointment earlier and the person who booked
 * appointment most recently among them (later than others in that set) say person X is now available then X is given the priority
 * to meet the doctor over any other person. But even if any person in that set Y other than X is available and X is not available
 * then you start appointments of the people who have not yet missed their appointments in their order of booking.
 *
 * You are given the order in which people arrive at the hospital and have to print the order of their appointments.
 *
 * Input:
 * First line contains T, the number of test cases.
 * First line of each test case contains a single integer N, the number of people who have booked appointment.
 * Next line contains N space separated integers denoting the order of their arrival.
 *
 * Constraint:
 * 1≤T≤10^3
 * 1≤N≤10^4
 *
 * Output:
 * For each test case print in a new line N space separated integers denoting the order of their appointment.
 *
 * Example 1:
 * Input:
 * 3
 * 3
 * 3 1 2
 * 9
 * 1 3 2 6 4 7 5 8 9
 * 5
 * 4 2 3 5 1
 *
 * Output:
 * 3 2 1
 * 1 3 2 6 7 5 4 8 9
 * 4 3 2 5 1
 *
 * Explanation:
 * Sample Case 1
 * 3 arrives earlier than others therefore 3 meets the doctor and 1 & 2 miss their appointments.
 * Then 1 arrives but will have to wait for 2 to finish his appointment since they both missed their appointment and 2 was the most
 * recent one among the two to book it.
 *
 * Sample Case 2
 * 1 arrives before anyone else and meets the doctor, since no one booked an appointment before 1, no one missed their appointment.
 * Then 3 arrives causing 2 to miss the appointment.
 * Then 2 arrives and since he is the most recent person to miss an appointment, he meets the doctor.
 * Then 6 arrives causing 4 & 5 to miss their appointments.
 * Then 7 arrives and since 5 has not yet arrived, gets to meet the doctor.
 * Then 5 arrives and since among the people who missed their appointment he is the most recent once, he gets to meet the doctor.
 * Then 4 arrives and since he is the most recent one to miss his appointment, gets to meet the doctor.
 * Then 8 and 9 arrive in order and meet the doctor in order.
 *
 * Sample Case 3
 * 4 arrives earliest causing 1, 2, and 3 to miss their appointments.
 * 2 arrives but cannot meet the doctor as 3 has not yet arrived.
 * 3 arrives and meets the doctor then 2 meets the doctor.
 * 5 arrives and meets the doctor.
 * 1 arrives and meets the doctor.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}