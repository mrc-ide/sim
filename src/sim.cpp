#include <Rcpp.h>

// [[Rcpp::export]]
double add2(double a, double b) {
  return a + b;
}

// [[Rcpp::export]]
double compute_pi_c(int n) {
  int tot = 0;
  for (int i = 0; i < n; ++i) {
    double x = R::runif(0, 1);
    double y = R::runif(0, 1);
    if (x * x + y * y <= 1) {
      ++tot;
    }
  }
  return 4 * (double) tot / n;
}
