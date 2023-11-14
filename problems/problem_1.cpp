float problemSolution1(float consumed_water) {
    float cost = 0;
    // write your code here

    // fixed amount
    float fixedAmount = 13;

    // rates
    float rate1 = 0.4;
    float rate2 = 0.12;
    float rate3 = 1.4;
    float additionalRate = 1.5;

    cost += fixedAmount;

    //limits
    float limit1 = 30;
    float limit2 = 20;
    float limit3 = 10;

    if(consumed_water <= limit1){
        cost = consumed_water * rate1;
    } else if(consumed_water <= limit1 + limit2){
        cost = (limit1 * rate1) + (consumed_water - limit1) * rate2;
    } else if(consumed_water <= limit1 + limit2 + limit3){
        cost = limit1 * rate1 + limit2 * rate2 + (consumed_water - limit1 - limit2) * rate3;
    } else {
        cost = limit1 * rate1 + limit2 * rate2 + limit3 * rate3 + (consumed_water - limit1 - limit2 - limit3) * additionalRate;
    }
    return cost;
}
