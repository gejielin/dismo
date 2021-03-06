// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// percRank
std::vector<double> percRank(std::vector<double> x, std::vector<unsigned> dimx, std::vector<double> y, std::vector<unsigned> dimy, std::vector<double> minc, std::vector<double> maxc, std::vector<int> tail);
RcppExport SEXP _dismo_percRank(SEXP xSEXP, SEXP dimxSEXP, SEXP ySEXP, SEXP dimySEXP, SEXP mincSEXP, SEXP maxcSEXP, SEXP tailSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned> >::type dimx(dimxSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<unsigned> >::type dimy(dimySEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type minc(mincSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type maxc(maxcSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type tail(tailSEXP);
    rcpp_result_gen = Rcpp::wrap(percRank(x, dimx, y, dimy, minc, maxc, tail));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dismo_percRank", (DL_FUNC) &_dismo_percRank, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_dismo(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
