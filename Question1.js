// Q.1 Given the number of the month, your task is to calculate the number of days present in the particular month

// Note:- Consider non-leap year


let month=6;  // take month 

if((month===1)||(month===3)||(month===5)||(month===7)||(month===8)||(month===10)||(month===12)){
    console.log("There are total 31 days in the given Month");
}
else if(month===2){
    console.log("There are total 28 days in the given month");
}
else{
    console.log("There are total 30 days in the given month")
}
