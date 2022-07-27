//Given the details of Anu's birthday 
//write a boolean expression to check if its Party Time (Anu's birthday) by comparing it with the details for the given day.
//Note: You can assume that the given year will always be greater than Anu's Birth Year.

let anuBirthDay = 26;
let anuBirthMonth = "August";
let anuBirthYear = 1986;

let givenDay = 26; 
let givenMonth = "February"; 
let givenYear = 2021; 

let isPartyTime;
if(givenYear > anuBirthYear && anuBirthDay == givenDay && anuBirthMonth == givenMonth){
    isPartyTime = " It's party time";
}else{
    isPartyTime = "Not party time";
}
console.log(isPartyTime); 