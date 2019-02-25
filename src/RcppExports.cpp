// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// logFC
double logFC(std::vector<double> A, std::vector<double> B);
RcppExport SEXP _RcppTestArea_logFC(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type A(ASEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(logFC(A, B));
    return rcpp_result_gen;
END_RCPP
}
// StatTest
std::vector<double> StatTest(Eigen::MappedSparseMatrix<double> X, std::vector<int> test, std::vector<int> backgound, double logFCcut, bool display_progress);
RcppExport SEXP _RcppTestArea_StatTest(SEXP XSEXP, SEXP testSEXP, SEXP backgoundSEXP, SEXP logFCcutSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MappedSparseMatrix<double> >::type X(XSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type test(testSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type backgound(backgoundSEXP);
    Rcpp::traits::input_parameter< double >::type logFCcut(logFCcutSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(StatTest(X, test, backgound, logFCcut, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// ZScore
Eigen::SparseMatrix<double> ZScore(Eigen::SparseMatrix<double> data, bool display_progress);
RcppExport SEXP _RcppTestArea_ZScore(SEXP dataSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(ZScore(data, display_progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppTestArea_logFC", (DL_FUNC) &_RcppTestArea_logFC, 2},
    {"_RcppTestArea_StatTest", (DL_FUNC) &_RcppTestArea_StatTest, 5},
    {"_RcppTestArea_ZScore", (DL_FUNC) &_RcppTestArea_ZScore, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppTestArea(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
