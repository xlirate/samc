// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// cond_t
Rcpp::NumericVector cond_t(Eigen::Map<Eigen::SparseMatrix<double> >& IQ, Eigen::VectorXd& qj);
RcppExport SEXP _samc_cond_t(SEXP IQSEXP, SEXP qjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type IQ(IQSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type qj(qjSEXP);
    rcpp_result_gen = Rcpp::wrap(cond_t(IQ, qj));
    return rcpp_result_gen;
END_RCPP
}
// sum_qn_q
Rcpp::List sum_qn_q(const Eigen::Map<Eigen::SparseMatrix<double> >& M, const Eigen::Map<Eigen::SparseMatrix<double> >& M2, const Eigen::VectorXd& q, Rcpp::NumericVector t);
RcppExport SEXP _samc_sum_qn_q(SEXP MSEXP, SEXP M2SEXP, SEXP qSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::SparseMatrix<double> >& >::type M2(M2SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type q(qSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_qn_q(M, M2, q, t));
    return rcpp_result_gen;
END_RCPP
}
// diagf
Rcpp::NumericVector diagf(Eigen::Map<Eigen::SparseMatrix<double> >& M);
RcppExport SEXP _samc_diagf(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(diagf(M));
    return rcpp_result_gen;
END_RCPP
}
// diagf_par
Rcpp::NumericVector diagf_par(Eigen::Map<Eigen::SparseMatrix<double> >& M, const int threads);
RcppExport SEXP _samc_diagf_par(SEXP MSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(diagf_par(M, threads));
    return rcpp_result_gen;
END_RCPP
}
// psid_long
Rcpp::NumericVector psid_long(Eigen::Map<Eigen::SparseMatrix<double> >& M, const Eigen::VectorXd& psi, const Eigen::VectorXd& dg);
RcppExport SEXP _samc_psid_long(SEXP MSEXP, SEXP psiSEXP, SEXP dgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type dg(dgSEXP);
    rcpp_result_gen = Rcpp::wrap(psid_long(M, psi, dg));
    return rcpp_result_gen;
END_RCPP
}
// qpow_row
Rcpp::List qpow_row(Eigen::Map<Eigen::SparseMatrix<double> >& M, const int row, Rcpp::NumericVector steps);
RcppExport SEXP _samc_qpow_row(SEXP MSEXP, SEXP rowSEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(qpow_row(M, row, steps));
    return rcpp_result_gen;
END_RCPP
}
// qpow_col
Rcpp::List qpow_col(Eigen::Map<Eigen::SparseMatrix< double> >& M, const int col, Rcpp::NumericVector steps);
RcppExport SEXP _samc_qpow_col(SEXP MSEXP, SEXP colSEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix< double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type col(colSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(qpow_col(M, col, steps));
    return rcpp_result_gen;
END_RCPP
}
// psiq
Rcpp::List psiq(Eigen::Map<Eigen::SparseMatrix<double> >& M, const Eigen::Map<Eigen::VectorXd>& psi, Rcpp::NumericVector steps);
RcppExport SEXP _samc_psiq(SEXP MSEXP, SEXP psiSEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(psiq(M, psi, steps));
    return rcpp_result_gen;
END_RCPP
}
// sum_qpow_row
Rcpp::List sum_qpow_row(Eigen::Map<Eigen::SparseMatrix<double> >& M, const int row, Rcpp::NumericVector steps);
RcppExport SEXP _samc_sum_qpow_row(SEXP MSEXP, SEXP rowSEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_qpow_row(M, row, steps));
    return rcpp_result_gen;
END_RCPP
}
// sum_qpowrv
Rcpp::List sum_qpowrv(Eigen::Map<Eigen::SparseMatrix<double> >& M, const Eigen::Map<Eigen::VectorXd>& rv, Rcpp::NumericVector steps);
RcppExport SEXP _samc_sum_qpowrv(SEXP MSEXP, SEXP rvSEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type rv(rvSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_qpowrv(M, rv, steps));
    return rcpp_result_gen;
END_RCPP
}
// sum_psiqpow
Rcpp::List sum_psiqpow(Eigen::Map<Eigen::SparseMatrix<double> >& M, const Eigen::Map<Eigen::VectorXd>& psi, Rcpp::NumericVector steps);
RcppExport SEXP _samc_sum_psiqpow(SEXP MSEXP, SEXP psiSEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_psiqpow(M, psi, steps));
    return rcpp_result_gen;
END_RCPP
}
// psif
Rcpp::NumericVector psif(Eigen::Map<Eigen::SparseMatrix<double> >& M, Eigen::VectorXd& psi);
RcppExport SEXP _samc_psif(SEXP MSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd& >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(psif(M, psi));
    return rcpp_result_gen;
END_RCPP
}
// f1
Rcpp::NumericVector f1(Eigen::Map<Eigen::SparseMatrix<double> >& M);
RcppExport SEXP _samc_f1(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(f1(M));
    return rcpp_result_gen;
END_RCPP
}
// f_row
Rcpp::NumericVector f_row(Eigen::SparseMatrix<double>& M, const int row);
RcppExport SEXP _samc_f_row(SEXP MSEXP, SEXP rowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type row(rowSEXP);
    rcpp_result_gen = Rcpp::wrap(f_row(M, row));
    return rcpp_result_gen;
END_RCPP
}
// f_col
Rcpp::NumericVector f_col(Eigen::Map<Eigen::SparseMatrix<double> >& M, const int col);
RcppExport SEXP _samc_f_col(SEXP MSEXP, SEXP colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::SparseMatrix<double> >& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type col(colSEXP);
    rcpp_result_gen = Rcpp::wrap(f_col(M, col));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_samc_cond_t", (DL_FUNC) &_samc_cond_t, 2},
    {"_samc_sum_qn_q", (DL_FUNC) &_samc_sum_qn_q, 4},
    {"_samc_diagf", (DL_FUNC) &_samc_diagf, 1},
    {"_samc_diagf_par", (DL_FUNC) &_samc_diagf_par, 2},
    {"_samc_psid_long", (DL_FUNC) &_samc_psid_long, 3},
    {"_samc_qpow_row", (DL_FUNC) &_samc_qpow_row, 3},
    {"_samc_qpow_col", (DL_FUNC) &_samc_qpow_col, 3},
    {"_samc_psiq", (DL_FUNC) &_samc_psiq, 3},
    {"_samc_sum_qpow_row", (DL_FUNC) &_samc_sum_qpow_row, 3},
    {"_samc_sum_qpowrv", (DL_FUNC) &_samc_sum_qpowrv, 3},
    {"_samc_sum_psiqpow", (DL_FUNC) &_samc_sum_psiqpow, 3},
    {"_samc_psif", (DL_FUNC) &_samc_psif, 2},
    {"_samc_f1", (DL_FUNC) &_samc_f1, 1},
    {"_samc_f_row", (DL_FUNC) &_samc_f_row, 2},
    {"_samc_f_col", (DL_FUNC) &_samc_f_col, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_samc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
