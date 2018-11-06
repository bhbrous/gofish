//FILE card.cpp
//This contains the definition for the card class
//
#include "card.h"
#include <string>
#include <iostream>

using namespace std;
//BB default constructor
   Card::Card(){
      this->int myRank = 1; // equivalent of saying Ace
      this->Suit mySuit = Spades; // equivalent of saying 0
   }
//BB Preferred constructor
   Card::Card(int _rank, Suit _s){
      this->myRank = _rank;
      this->mySuit = _s;
   }
//main function to me utilized. getRank gets the int of the card's rank(expected output 1-13), rankString (expected output A, 2-10, J, Q, K) converts it then prints it out. suit
//String converts the suit's value(compared to an int) as a string. Expected output s,h,d,c
   string Card::toString() const{
      int rankn = getRank();
      string rankc = rankString(rank);
      cout<<""<<rank;
      string suit = suitString(Suit s);
      cout<<""<<suit;
   }
//BB checks to determine whether or not the card matches the suit of the card passed. Utilizes the overloaded operator
   bool Card::sameSuitAs(const Card& c) const{
      return(if(this->Suit == c.Suit));
   }
//BB Should return the proper rank due to this function being within the scope of the Card. Therefore able to access the
//private variables
   int Card::getRank() const{
      return(this->myRank);
   }
//BB checks the nominal values of the Suit s 
   string Card::suitString(Suit s) const{
      if(0 == static_cast<int>(s)){
         return ("s");}
      if(1 == static_cast<int>(s)){
         return ("h");}
      if(2 == static_cast<int>(s)){
         return ("d");}
      if(3 == static_cast<int>(s)){
         return ("c");}
   }
//BB rankString functions converts the rank obtained from getRank to a string. If the rank is above 10, it will convert
//it to the appropriate letter to return.
   string Card::rankString(int r) const{
      string rank = to_string(getRank()); //included within string library. Should convert the int value to a string)
      if(rank = "1"){
         return ("A");}
      if(rank = "11"){
         return ("J");}
      if(rank = "12"){
         return ("Q");}
      if(rank = "13"){
         return ("K");}
      return(rank);     
   }
//BB returns the result of the if statement which compares the two cards and only returns true if both are true
   bool Card::operator == (const Card& rhs) const {
      return(if((this->myRank == rhs.myRank) && (this->mySuit.compare(rhs.mySuit) == 0)));     
   }
//BB returns the result of the if statements which compares the two elements of the card. Returns true if either are true
   bool Card::operator != (const Card& rhs) const {
      return(if((this->myRank != rhs.myRank) || (this->mySuit.compare(rhs.mySuit) != 0))); 
   }
