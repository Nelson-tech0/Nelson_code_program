//Elections are going on in a state of India called 'Goa'. 
//A person is eligible to vote if they are at least 18 years old and live in Goa. Given a person's age and residence,
//write code to determine if he or she is eligible to vote or not.


let age = 17;
let residence = "Goa";
let canVote;
if(age >= 18 && residence == "Goa"){
    canVote = "Eligible";
}else{
    canVote = "Not Eligible";
}
console.log(canVote); 


//Change the third line such that the user can still vote (variable canVote is true) even if the user intializes the variable residence incorrectly as Goo.
let age1 = 22;
let residence1 = "Goo"; // initialized incorrectly (spelling mistake)
let canVote1 = age1 >= 18 && residence === "Goa" || residence === "Goo";// change this line
console.log(canVote1); // should print true


//Change the code such that the user can vote (variable canVote is true) if the user intializes the variable residence as Goo,Gaa or 'Goa'.
let age3 = 22;
let residence3 = "Gaa"; // initialized incorrectly (spelling mistake)
let canVote3 = age3 >= 18 && residence3 === "Goa" || residence3 === "Goo" || residence3 === "Gaa";
console.log(canVote3); // should print true
