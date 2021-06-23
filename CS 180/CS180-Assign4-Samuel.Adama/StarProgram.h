//Group2 Project for Star Program 
//Trevor Walswick, Samuel Adama, Vetle Peterson, Mindy Le
// This function will calculate the top 5 scores given by judges at a talent competition
// Then will find the lowest score and highest score and will drop them
// Finally will take the average of the remaining three scores and becomes the final score


// This function will get the scores from each of the five judges
// The input will between 0-10 And can be a fractinal score such as 8.3	
//Use Return or Void
//Trevor
double getJudge();

// will be taking the average of the remaining 3 scores From getLowest
// As well as get Highest to create the final score
double calcscore(double JudgeA, double JudgeB, double JudgeC, double JudgeD, double JudgeE, double High, double Low);

//Will be taking the highest score given by the judges and removing it from the scoring
double findHighest(double JudgeA, double JudgeB, double JudgeC, double JudgeD, double JudgeE);

// Will be taking the lowest score given by the judges and removing it
double FindLowest(double JudgeA, double JudgeB, double JudgeC, double JudgeD, double JudgeE);



