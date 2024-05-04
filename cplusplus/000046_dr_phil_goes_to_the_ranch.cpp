// Title: Dr Phil Goes To The Ranch
// Difficulty:
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(1)
// Space Complexity:
// Topic: Stack & Queue

/**
 * Dr. Phil has put you in charge of his new hospital while he is chilling at the ranch. N people have booked appointment with the Doctor
 * today numbered from 1 to N such that person X booked appointment before person Y if X<Y.
 *
 * Now, the people do not necessarily arrive at the hospital on time, so you decide of an unusual way of handling the situation. At the
 * start you fulfill the appointment of the people who booked first (so if person 1 is available then that person can meet the doctor)
 * otherwise you look for next available person.
 *
 * If you fulfill the appointment of any person and their exist some people (1 or more) who have booked earlier but haven’t arrived at the
 * hospital yet, then those people are said to have missed their appointment.
 *
 * If at some point of time there exists a set of people that have missed their appointment earlier and the person who booked appointment
 * most recently among them (later than others in that set) say person X is now available then X is given the priority to meet the doctor
 * over any other person. But even if any person in that set Y other than X is available and X is not available then you start appointments
 * of the people who have not yet missed their appointments in their order of booking.
 *
 * You are given the order in which people arrive at the hospital and have to print the order of their appointments.
 *
 * Input:
 * First line contains T, the number of test cases.
 * First line of each test case contains a single integer N, the number of people who have booked appointment.
 * Next line contains N space separated integers denoting the order of their arrival.
 *
 * Constraint:
 *      1≤T≤10^3
 *      1≤N≤10^4
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
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}