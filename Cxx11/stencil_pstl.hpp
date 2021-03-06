void star1(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(1,n-1);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i)*n+(j-1)] * -0.5
                          +in[(i-1)*n+(j)] * -0.5
                          +in[(i+1)*n+(j)] * 0.5
                          +in[(i)*n+(j+1)] * 0.5;
      });
    });
}

void star2(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(2,n-2);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i)*n+(j-2)] * -0.125
                          +in[(i)*n+(j-1)] * -0.25
                          +in[(i-2)*n+(j)] * -0.125
                          +in[(i-1)*n+(j)] * -0.25
                          +in[(i+1)*n+(j)] * 0.25
                          +in[(i+2)*n+(j)] * 0.125
                          +in[(i)*n+(j+1)] * 0.25
                          +in[(i)*n+(j+2)] * 0.125;
      });
    });
}

void star3(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(3,n-3);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i)*n+(j-3)] * -0.0555555555556
                          +in[(i)*n+(j-2)] * -0.0833333333333
                          +in[(i)*n+(j-1)] * -0.166666666667
                          +in[(i-3)*n+(j)] * -0.0555555555556
                          +in[(i-2)*n+(j)] * -0.0833333333333
                          +in[(i-1)*n+(j)] * -0.166666666667
                          +in[(i+1)*n+(j)] * 0.166666666667
                          +in[(i+2)*n+(j)] * 0.0833333333333
                          +in[(i+3)*n+(j)] * 0.0555555555556
                          +in[(i)*n+(j+1)] * 0.166666666667
                          +in[(i)*n+(j+2)] * 0.0833333333333
                          +in[(i)*n+(j+3)] * 0.0555555555556;
      });
    });
}

void star4(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(4,n-4);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i)*n+(j-4)] * -0.03125
                          +in[(i)*n+(j-3)] * -0.0416666666667
                          +in[(i)*n+(j-2)] * -0.0625
                          +in[(i)*n+(j-1)] * -0.125
                          +in[(i-4)*n+(j)] * -0.03125
                          +in[(i-3)*n+(j)] * -0.0416666666667
                          +in[(i-2)*n+(j)] * -0.0625
                          +in[(i-1)*n+(j)] * -0.125
                          +in[(i+1)*n+(j)] * 0.125
                          +in[(i+2)*n+(j)] * 0.0625
                          +in[(i+3)*n+(j)] * 0.0416666666667
                          +in[(i+4)*n+(j)] * 0.03125
                          +in[(i)*n+(j+1)] * 0.125
                          +in[(i)*n+(j+2)] * 0.0625
                          +in[(i)*n+(j+3)] * 0.0416666666667
                          +in[(i)*n+(j+4)] * 0.03125;
      });
    });
}

void star5(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(5,n-5);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i)*n+(j-5)] * -0.02
                          +in[(i)*n+(j-4)] * -0.025
                          +in[(i)*n+(j-3)] * -0.0333333333333
                          +in[(i)*n+(j-2)] * -0.05
                          +in[(i)*n+(j-1)] * -0.1
                          +in[(i-5)*n+(j)] * -0.02
                          +in[(i-4)*n+(j)] * -0.025
                          +in[(i-3)*n+(j)] * -0.0333333333333
                          +in[(i-2)*n+(j)] * -0.05
                          +in[(i-1)*n+(j)] * -0.1
                          +in[(i+1)*n+(j)] * 0.1
                          +in[(i+2)*n+(j)] * 0.05
                          +in[(i+3)*n+(j)] * 0.0333333333333
                          +in[(i+4)*n+(j)] * 0.025
                          +in[(i+5)*n+(j)] * 0.02
                          +in[(i)*n+(j+1)] * 0.1
                          +in[(i)*n+(j+2)] * 0.05
                          +in[(i)*n+(j+3)] * 0.0333333333333
                          +in[(i)*n+(j+4)] * 0.025
                          +in[(i)*n+(j+5)] * 0.02;
      });
    });
}

void grid1(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(1,n-1);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i-1)*n+(j-1)] * -0.25
                          +in[(i)*n+(j-1)] * -0.25
                          +in[(i-1)*n+(j)] * -0.25
                          +in[(i+1)*n+(j)] * 0.25
                          +in[(i)*n+(j+1)] * 0.25
                          +in[(i+1)*n+(j+1)] * 0.25
                          ;
      });
    });
}

void grid2(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(2,n-2);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i-2)*n+(j-2)] * -0.0625
                          +in[(i-1)*n+(j-2)] * -0.0208333333333
                          +in[(i)*n+(j-2)] * -0.0208333333333
                          +in[(i+1)*n+(j-2)] * -0.0208333333333
                          +in[(i-2)*n+(j-1)] * -0.0208333333333
                          +in[(i-1)*n+(j-1)] * -0.125
                          +in[(i)*n+(j-1)] * -0.125
                          +in[(i+2)*n+(j-1)] * 0.0208333333333
                          +in[(i-2)*n+(j)] * -0.0208333333333
                          +in[(i-1)*n+(j)] * -0.125
                          +in[(i+1)*n+(j)] * 0.125
                          +in[(i+2)*n+(j)] * 0.0208333333333
                          +in[(i-2)*n+(j+1)] * -0.0208333333333
                          +in[(i)*n+(j+1)] * 0.125
                          +in[(i+1)*n+(j+1)] * 0.125
                          +in[(i+2)*n+(j+1)] * 0.0208333333333
                          +in[(i-1)*n+(j+2)] * 0.0208333333333
                          +in[(i)*n+(j+2)] * 0.0208333333333
                          +in[(i+1)*n+(j+2)] * 0.0208333333333
                          +in[(i+2)*n+(j+2)] * 0.0625
                          ;
      });
    });
}

void grid3(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(3,n-3);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i-3)*n+(j-3)] * -0.0277777777778
                          +in[(i-2)*n+(j-3)] * -0.00555555555556
                          +in[(i-1)*n+(j-3)] * -0.00555555555556
                          +in[(i)*n+(j-3)] * -0.00555555555556
                          +in[(i+1)*n+(j-3)] * -0.00555555555556
                          +in[(i+2)*n+(j-3)] * -0.00555555555556
                          +in[(i-3)*n+(j-2)] * -0.00555555555556
                          +in[(i-2)*n+(j-2)] * -0.0416666666667
                          +in[(i-1)*n+(j-2)] * -0.0138888888889
                          +in[(i)*n+(j-2)] * -0.0138888888889
                          +in[(i+1)*n+(j-2)] * -0.0138888888889
                          +in[(i+3)*n+(j-2)] * 0.00555555555556
                          +in[(i-3)*n+(j-1)] * -0.00555555555556
                          +in[(i-2)*n+(j-1)] * -0.0138888888889
                          +in[(i-1)*n+(j-1)] * -0.0833333333333
                          +in[(i)*n+(j-1)] * -0.0833333333333
                          +in[(i+2)*n+(j-1)] * 0.0138888888889
                          +in[(i+3)*n+(j-1)] * 0.00555555555556
                          +in[(i-3)*n+(j)] * -0.00555555555556
                          +in[(i-2)*n+(j)] * -0.0138888888889
                          +in[(i-1)*n+(j)] * -0.0833333333333
                          +in[(i+1)*n+(j)] * 0.0833333333333
                          +in[(i+2)*n+(j)] * 0.0138888888889
                          +in[(i+3)*n+(j)] * 0.00555555555556
                          +in[(i-3)*n+(j+1)] * -0.00555555555556
                          +in[(i-2)*n+(j+1)] * -0.0138888888889
                          +in[(i)*n+(j+1)] * 0.0833333333333
                          +in[(i+1)*n+(j+1)] * 0.0833333333333
                          +in[(i+2)*n+(j+1)] * 0.0138888888889
                          +in[(i+3)*n+(j+1)] * 0.00555555555556
                          +in[(i-3)*n+(j+2)] * -0.00555555555556
                          +in[(i-1)*n+(j+2)] * 0.0138888888889
                          +in[(i)*n+(j+2)] * 0.0138888888889
                          +in[(i+1)*n+(j+2)] * 0.0138888888889
                          +in[(i+2)*n+(j+2)] * 0.0416666666667
                          +in[(i+3)*n+(j+2)] * 0.00555555555556
                          +in[(i-2)*n+(j+3)] * 0.00555555555556
                          +in[(i-1)*n+(j+3)] * 0.00555555555556
                          +in[(i)*n+(j+3)] * 0.00555555555556
                          +in[(i+1)*n+(j+3)] * 0.00555555555556
                          +in[(i+2)*n+(j+3)] * 0.00555555555556
                          +in[(i+3)*n+(j+3)] * 0.0277777777778
                          ;
      });
    });
}

void grid4(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(4,n-4);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i-4)*n+(j-4)] * -0.015625
                          +in[(i-3)*n+(j-4)] * -0.00223214285714
                          +in[(i-2)*n+(j-4)] * -0.00223214285714
                          +in[(i-1)*n+(j-4)] * -0.00223214285714
                          +in[(i)*n+(j-4)] * -0.00223214285714
                          +in[(i+1)*n+(j-4)] * -0.00223214285714
                          +in[(i+2)*n+(j-4)] * -0.00223214285714
                          +in[(i+3)*n+(j-4)] * -0.00223214285714
                          +in[(i-4)*n+(j-3)] * -0.00223214285714
                          +in[(i-3)*n+(j-3)] * -0.0208333333333
                          +in[(i-2)*n+(j-3)] * -0.00416666666667
                          +in[(i-1)*n+(j-3)] * -0.00416666666667
                          +in[(i)*n+(j-3)] * -0.00416666666667
                          +in[(i+1)*n+(j-3)] * -0.00416666666667
                          +in[(i+2)*n+(j-3)] * -0.00416666666667
                          +in[(i+4)*n+(j-3)] * 0.00223214285714
                          +in[(i-4)*n+(j-2)] * -0.00223214285714
                          +in[(i-3)*n+(j-2)] * -0.00416666666667
                          +in[(i-2)*n+(j-2)] * -0.03125
                          +in[(i-1)*n+(j-2)] * -0.0104166666667
                          +in[(i)*n+(j-2)] * -0.0104166666667
                          +in[(i+1)*n+(j-2)] * -0.0104166666667
                          +in[(i+3)*n+(j-2)] * 0.00416666666667
                          +in[(i+4)*n+(j-2)] * 0.00223214285714
                          +in[(i-4)*n+(j-1)] * -0.00223214285714
                          +in[(i-3)*n+(j-1)] * -0.00416666666667
                          +in[(i-2)*n+(j-1)] * -0.0104166666667
                          +in[(i-1)*n+(j-1)] * -0.0625
                          +in[(i)*n+(j-1)] * -0.0625
                          +in[(i+2)*n+(j-1)] * 0.0104166666667
                          +in[(i+3)*n+(j-1)] * 0.00416666666667
                          +in[(i+4)*n+(j-1)] * 0.00223214285714
                          +in[(i-4)*n+(j)] * -0.00223214285714
                          +in[(i-3)*n+(j)] * -0.00416666666667
                          +in[(i-2)*n+(j)] * -0.0104166666667
                          +in[(i-1)*n+(j)] * -0.0625
                          +in[(i+1)*n+(j)] * 0.0625
                          +in[(i+2)*n+(j)] * 0.0104166666667
                          +in[(i+3)*n+(j)] * 0.00416666666667
                          +in[(i+4)*n+(j)] * 0.00223214285714
                          +in[(i-4)*n+(j+1)] * -0.00223214285714
                          +in[(i-3)*n+(j+1)] * -0.00416666666667
                          +in[(i-2)*n+(j+1)] * -0.0104166666667
                          +in[(i)*n+(j+1)] * 0.0625
                          +in[(i+1)*n+(j+1)] * 0.0625
                          +in[(i+2)*n+(j+1)] * 0.0104166666667
                          +in[(i+3)*n+(j+1)] * 0.00416666666667
                          +in[(i+4)*n+(j+1)] * 0.00223214285714
                          +in[(i-4)*n+(j+2)] * -0.00223214285714
                          +in[(i-3)*n+(j+2)] * -0.00416666666667
                          +in[(i-1)*n+(j+2)] * 0.0104166666667
                          +in[(i)*n+(j+2)] * 0.0104166666667
                          +in[(i+1)*n+(j+2)] * 0.0104166666667
                          +in[(i+2)*n+(j+2)] * 0.03125
                          +in[(i+3)*n+(j+2)] * 0.00416666666667
                          +in[(i+4)*n+(j+2)] * 0.00223214285714
                          +in[(i-4)*n+(j+3)] * -0.00223214285714
                          +in[(i-2)*n+(j+3)] * 0.00416666666667
                          +in[(i-1)*n+(j+3)] * 0.00416666666667
                          +in[(i)*n+(j+3)] * 0.00416666666667
                          +in[(i+1)*n+(j+3)] * 0.00416666666667
                          +in[(i+2)*n+(j+3)] * 0.00416666666667
                          +in[(i+3)*n+(j+3)] * 0.0208333333333
                          +in[(i+4)*n+(j+3)] * 0.00223214285714
                          +in[(i-3)*n+(j+4)] * 0.00223214285714
                          +in[(i-2)*n+(j+4)] * 0.00223214285714
                          +in[(i-1)*n+(j+4)] * 0.00223214285714
                          +in[(i)*n+(j+4)] * 0.00223214285714
                          +in[(i+1)*n+(j+4)] * 0.00223214285714
                          +in[(i+2)*n+(j+4)] * 0.00223214285714
                          +in[(i+3)*n+(j+4)] * 0.00223214285714
                          +in[(i+4)*n+(j+4)] * 0.015625
                          ;
      });
    });
}

void grid5(const int n, const int t, std::vector<double> & in, std::vector<double> & out) {
    auto inside = prk::range(5,n-5);
    std::for_each( exec::par, std::begin(inside), std::end(inside), [&] (int i) {
      std::for_each( exec::unseq, std::begin(inside), std::end(inside), [&] (int j) {
            out[i*n+j] += +in[(i-5)*n+(j-5)] * -0.01
                          +in[(i-4)*n+(j-5)] * -0.00111111111111
                          +in[(i-3)*n+(j-5)] * -0.00111111111111
                          +in[(i-2)*n+(j-5)] * -0.00111111111111
                          +in[(i-1)*n+(j-5)] * -0.00111111111111
                          +in[(i)*n+(j-5)] * -0.00111111111111
                          +in[(i+1)*n+(j-5)] * -0.00111111111111
                          +in[(i+2)*n+(j-5)] * -0.00111111111111
                          +in[(i+3)*n+(j-5)] * -0.00111111111111
                          +in[(i+4)*n+(j-5)] * -0.00111111111111
                          +in[(i-5)*n+(j-4)] * -0.00111111111111
                          +in[(i-4)*n+(j-4)] * -0.0125
                          +in[(i-3)*n+(j-4)] * -0.00178571428571
                          +in[(i-2)*n+(j-4)] * -0.00178571428571
                          +in[(i-1)*n+(j-4)] * -0.00178571428571
                          +in[(i)*n+(j-4)] * -0.00178571428571
                          +in[(i+1)*n+(j-4)] * -0.00178571428571
                          +in[(i+2)*n+(j-4)] * -0.00178571428571
                          +in[(i+3)*n+(j-4)] * -0.00178571428571
                          +in[(i+5)*n+(j-4)] * 0.00111111111111
                          +in[(i-5)*n+(j-3)] * -0.00111111111111
                          +in[(i-4)*n+(j-3)] * -0.00178571428571
                          +in[(i-3)*n+(j-3)] * -0.0166666666667
                          +in[(i-2)*n+(j-3)] * -0.00333333333333
                          +in[(i-1)*n+(j-3)] * -0.00333333333333
                          +in[(i)*n+(j-3)] * -0.00333333333333
                          +in[(i+1)*n+(j-3)] * -0.00333333333333
                          +in[(i+2)*n+(j-3)] * -0.00333333333333
                          +in[(i+4)*n+(j-3)] * 0.00178571428571
                          +in[(i+5)*n+(j-3)] * 0.00111111111111
                          +in[(i-5)*n+(j-2)] * -0.00111111111111
                          +in[(i-4)*n+(j-2)] * -0.00178571428571
                          +in[(i-3)*n+(j-2)] * -0.00333333333333
                          +in[(i-2)*n+(j-2)] * -0.025
                          +in[(i-1)*n+(j-2)] * -0.00833333333333
                          +in[(i)*n+(j-2)] * -0.00833333333333
                          +in[(i+1)*n+(j-2)] * -0.00833333333333
                          +in[(i+3)*n+(j-2)] * 0.00333333333333
                          +in[(i+4)*n+(j-2)] * 0.00178571428571
                          +in[(i+5)*n+(j-2)] * 0.00111111111111
                          +in[(i-5)*n+(j-1)] * -0.00111111111111
                          +in[(i-4)*n+(j-1)] * -0.00178571428571
                          +in[(i-3)*n+(j-1)] * -0.00333333333333
                          +in[(i-2)*n+(j-1)] * -0.00833333333333
                          +in[(i-1)*n+(j-1)] * -0.05
                          +in[(i)*n+(j-1)] * -0.05
                          +in[(i+2)*n+(j-1)] * 0.00833333333333
                          +in[(i+3)*n+(j-1)] * 0.00333333333333
                          +in[(i+4)*n+(j-1)] * 0.00178571428571
                          +in[(i+5)*n+(j-1)] * 0.00111111111111
                          +in[(i-5)*n+(j)] * -0.00111111111111
                          +in[(i-4)*n+(j)] * -0.00178571428571
                          +in[(i-3)*n+(j)] * -0.00333333333333
                          +in[(i-2)*n+(j)] * -0.00833333333333
                          +in[(i-1)*n+(j)] * -0.05
                          +in[(i+1)*n+(j)] * 0.05
                          +in[(i+2)*n+(j)] * 0.00833333333333
                          +in[(i+3)*n+(j)] * 0.00333333333333
                          +in[(i+4)*n+(j)] * 0.00178571428571
                          +in[(i+5)*n+(j)] * 0.00111111111111
                          +in[(i-5)*n+(j+1)] * -0.00111111111111
                          +in[(i-4)*n+(j+1)] * -0.00178571428571
                          +in[(i-3)*n+(j+1)] * -0.00333333333333
                          +in[(i-2)*n+(j+1)] * -0.00833333333333
                          +in[(i)*n+(j+1)] * 0.05
                          +in[(i+1)*n+(j+1)] * 0.05
                          +in[(i+2)*n+(j+1)] * 0.00833333333333
                          +in[(i+3)*n+(j+1)] * 0.00333333333333
                          +in[(i+4)*n+(j+1)] * 0.00178571428571
                          +in[(i+5)*n+(j+1)] * 0.00111111111111
                          +in[(i-5)*n+(j+2)] * -0.00111111111111
                          +in[(i-4)*n+(j+2)] * -0.00178571428571
                          +in[(i-3)*n+(j+2)] * -0.00333333333333
                          +in[(i-1)*n+(j+2)] * 0.00833333333333
                          +in[(i)*n+(j+2)] * 0.00833333333333
                          +in[(i+1)*n+(j+2)] * 0.00833333333333
                          +in[(i+2)*n+(j+2)] * 0.025
                          +in[(i+3)*n+(j+2)] * 0.00333333333333
                          +in[(i+4)*n+(j+2)] * 0.00178571428571
                          +in[(i+5)*n+(j+2)] * 0.00111111111111
                          +in[(i-5)*n+(j+3)] * -0.00111111111111
                          +in[(i-4)*n+(j+3)] * -0.00178571428571
                          +in[(i-2)*n+(j+3)] * 0.00333333333333
                          +in[(i-1)*n+(j+3)] * 0.00333333333333
                          +in[(i)*n+(j+3)] * 0.00333333333333
                          +in[(i+1)*n+(j+3)] * 0.00333333333333
                          +in[(i+2)*n+(j+3)] * 0.00333333333333
                          +in[(i+3)*n+(j+3)] * 0.0166666666667
                          +in[(i+4)*n+(j+3)] * 0.00178571428571
                          +in[(i+5)*n+(j+3)] * 0.00111111111111
                          +in[(i-5)*n+(j+4)] * -0.00111111111111
                          +in[(i-3)*n+(j+4)] * 0.00178571428571
                          +in[(i-2)*n+(j+4)] * 0.00178571428571
                          +in[(i-1)*n+(j+4)] * 0.00178571428571
                          +in[(i)*n+(j+4)] * 0.00178571428571
                          +in[(i+1)*n+(j+4)] * 0.00178571428571
                          +in[(i+2)*n+(j+4)] * 0.00178571428571
                          +in[(i+3)*n+(j+4)] * 0.00178571428571
                          +in[(i+4)*n+(j+4)] * 0.0125
                          +in[(i+5)*n+(j+4)] * 0.00111111111111
                          +in[(i-4)*n+(j+5)] * 0.00111111111111
                          +in[(i-3)*n+(j+5)] * 0.00111111111111
                          +in[(i-2)*n+(j+5)] * 0.00111111111111
                          +in[(i-1)*n+(j+5)] * 0.00111111111111
                          +in[(i)*n+(j+5)] * 0.00111111111111
                          +in[(i+1)*n+(j+5)] * 0.00111111111111
                          +in[(i+2)*n+(j+5)] * 0.00111111111111
                          +in[(i+3)*n+(j+5)] * 0.00111111111111
                          +in[(i+4)*n+(j+5)] * 0.00111111111111
                          +in[(i+5)*n+(j+5)] * 0.01
                          ;
      });
    });
}

