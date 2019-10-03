#include <R.h>
#include <Rdefines.h>
#include <vector>
#include <cmath>

// [[Rcpp::interfaces(r, cpp)]]
//' Calculate the euclidian distance between consecutive points
//' Can also produce the integral values of the distance.
//' @name euclidian_distances
//' @aliases euclidian_distances,FastWilcoxTest-method
//' @rdname euclidian_distances-methods
//' @docType methods
//' @description calculates the (2D) euclidian distance for a set of x and y values
//' @param X one ORDERED numeric vector
//' @param Y the other vector
//' @param sum create a total sum of these values (integral) default = FALSE
//' @title Calculate  over two double vectors
//' @export
// [[Rcpp::export]]
std::vector<double> euclidian_distances( std::vector<double> X,  std::vector<double> Y, bool sum = false)
{
	std::vector<double> distance ( X.size() );
	distance[0] = 0;
	for ( int i = 1; i< X.size(); i++ ) {
		distance[i] = sqrt(	pow( (X[i-1] - X[i]) ,2 ) +	pow( (Y[i-1] - Y[i]) ,2 )  );
	}
	if ( sum ) {
		for ( int i = 1; i< X.size(); i++ ) {
			distance[i] += distance[i-1];
		}
	}
	return distance;
}
