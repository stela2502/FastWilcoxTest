% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\docType{methods}
\name{collapse}
\alias{collapse}
\alias{collapse,FastWilcoxTest-method}
\title{collapse the data collumns based on the ids info}
\usage{
collapse(X, ids, type)
}
\arguments{
\item{X}{the sparse matrix}

\item{ids}{group ids (int vector from 1 10 maxgroup for each column)}

\item{type}{( 0: logAdd (defunct); 1 : simple addition; 2: mean )}
}
\description{
sums up the values for each ids type
}
