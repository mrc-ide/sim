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


// [[Rcpp::export]]
double my_sum1(Rcpp::NumericVector x) {
  double tot = 0.0;
  for (int i = 0; i < x.size(); ++i) {
    tot += x[i];
  }

  return tot;
}


// [[Rcpp::export]]
double my_sum2(std::vector<double> x) {
  double tot = 0.0;
  for (size_t i = 0; i < x.size(); ++i) {
    tot += x[i];
  }

  return tot;
}


// [[Rcpp::export]]
Rcpp::NumericVector my_cumulative_sum1(Rcpp::NumericVector x) {
  x = Rcpp::clone(x);
  double tot = 0;
  for (int i = 0; i < x.size(); ++i) {
    tot += x[i];
    x[i] = tot;
  }
  return x;
}


// [[Rcpp::export]]
std::vector<double> my_cumulative_sum2(std::vector<double> x) {
  double tot = 0;
  for (size_t i = 0; i < x.size(); ++i) {
    tot += x[i];
    x[i] = tot;
  }
  return x;
}
