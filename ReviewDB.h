//
// Created by Ben on 2/3/2021.
//

#ifndef PF2_PROGRAMMING_PROJECT_1_REVIEWDB_H
#define PF2_PROGRAMMING_PROJECT_1_REVIEWDB_H

#include <iostream>
#include "Review.h"
using namespace std;

int const MAX_REVIEWDB_SIZE = 10;

class ReviewDB {

public:
    // Constructors and Destructor
    ReviewDB();
    ReviewDB(const ReviewDB &copy);
    ~ReviewDB();

    void insertReview();

    // Print methods
    void printRestaurantReviews() const;
    void printCategoryReviews() const;
    void printRecentReviews() const;

private:
    Review reviews[MAX_REVIEWDB_SIZE];
    int numOfReviews;

};


#endif //PF2_PROGRAMMING_PROJECT_1_REVIEWDB_H
