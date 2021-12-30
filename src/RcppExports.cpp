// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sameSRS
bool sameSRS(std::string x, std::string y);
RcppExport SEXP _terra_sameSRS(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(sameSRS(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getCRSname
std::vector<std::string> getCRSname(std::string s);
RcppExport SEXP _terra_getCRSname(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(getCRSname(s));
    return rcpp_result_gen;
END_RCPP
}
// getLinearUnits
double getLinearUnits(std::string s);
RcppExport SEXP _terra_getLinearUnits(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(getLinearUnits(s));
    return rcpp_result_gen;
END_RCPP
}
// geotransform
std::vector<double> geotransform(std::string fname);
RcppExport SEXP _terra_geotransform(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(geotransform(fname));
    return rcpp_result_gen;
END_RCPP
}
// ginfo
std::string ginfo(std::string filename, std::vector<std::string> options, std::vector<std::string> oo);
RcppExport SEXP _terra_ginfo(SEXP filenameSEXP, SEXP optionsSEXP, SEXP ooSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type oo(ooSEXP);
    rcpp_result_gen = Rcpp::wrap(ginfo(filename, options, oo));
    return rcpp_result_gen;
END_RCPP
}
// sd_info
std::vector<std::vector<std::string>> sd_info(std::string filename);
RcppExport SEXP _terra_sd_info(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(sd_info(filename));
    return rcpp_result_gen;
END_RCPP
}
// gdal_version
std::string gdal_version();
RcppExport SEXP _terra_gdal_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(gdal_version());
    return rcpp_result_gen;
END_RCPP
}
// geos_version
std::string geos_version(bool runtime, bool capi);
RcppExport SEXP _terra_geos_version(SEXP runtimeSEXP, SEXP capiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type runtime(runtimeSEXP);
    Rcpp::traits::input_parameter< bool >::type capi(capiSEXP);
    rcpp_result_gen = Rcpp::wrap(geos_version(runtime, capi));
    return rcpp_result_gen;
END_RCPP
}
// metatdata
std::vector<std::string> metatdata(std::string filename);
RcppExport SEXP _terra_metatdata(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(metatdata(filename));
    return rcpp_result_gen;
END_RCPP
}
// sdsmetatdata
std::vector<std::string> sdsmetatdata(std::string filename);
RcppExport SEXP _terra_sdsmetatdata(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(sdsmetatdata(filename));
    return rcpp_result_gen;
END_RCPP
}
// sdsmetatdataparsed
std::vector<std::vector<std::string>> sdsmetatdataparsed(std::string filename);
RcppExport SEXP _terra_sdsmetatdataparsed(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(sdsmetatdataparsed(filename));
    return rcpp_result_gen;
END_RCPP
}
// gdal_drivers
std::vector<std::vector<std::string>> gdal_drivers();
RcppExport SEXP _terra_gdal_drivers() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(gdal_drivers());
    return rcpp_result_gen;
END_RCPP
}
// set_gdal_warnings
void set_gdal_warnings(int level);
RcppExport SEXP _terra_set_gdal_warnings(SEXP levelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type level(levelSEXP);
    set_gdal_warnings(level);
    return R_NilValue;
END_RCPP
}
// gdal_init
void gdal_init(std::string path);
RcppExport SEXP _terra_gdal_init(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    gdal_init(path);
    return R_NilValue;
END_RCPP
}
// percRank
std::vector<double> percRank(std::vector<double> x, std::vector<double> y, double minc, double maxc, int tail);
RcppExport SEXP _terra_percRank(SEXP xSEXP, SEXP ySEXP, SEXP mincSEXP, SEXP maxcSEXP, SEXP tailSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type minc(mincSEXP);
    Rcpp::traits::input_parameter< double >::type maxc(maxcSEXP);
    Rcpp::traits::input_parameter< int >::type tail(tailSEXP);
    rcpp_result_gen = Rcpp::wrap(percRank(x, y, minc, maxc, tail));
    return rcpp_result_gen;
END_RCPP
}
// setGDALCacheSizeMB
void setGDALCacheSizeMB(double x);
RcppExport SEXP _terra_setGDALCacheSizeMB(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    setGDALCacheSizeMB(x);
    return R_NilValue;
END_RCPP
}
// getGDALCacheSizeMB
double getGDALCacheSizeMB();
RcppExport SEXP _terra_getGDALCacheSizeMB() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(getGDALCacheSizeMB());
    return rcpp_result_gen;
END_RCPP
}
// get_proj_search_paths
std::vector<std::string> get_proj_search_paths();
RcppExport SEXP _terra_get_proj_search_paths() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(get_proj_search_paths());
    return rcpp_result_gen;
END_RCPP
}
// set_proj_search_paths
bool set_proj_search_paths(std::vector<std::string> paths);
RcppExport SEXP _terra_set_proj_search_paths(SEXP pathsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type paths(pathsSEXP);
    rcpp_result_gen = Rcpp::wrap(set_proj_search_paths(paths));
    return rcpp_result_gen;
END_RCPP
}
// PROJ_network
std::string PROJ_network(bool enable, std::string url);
RcppExport SEXP _terra_PROJ_network(SEXP enableSEXP, SEXP urlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type enable(enableSEXP);
    Rcpp::traits::input_parameter< std::string >::type url(urlSEXP);
    rcpp_result_gen = Rcpp::wrap(PROJ_network(enable, url));
    return rcpp_result_gen;
END_RCPP
}
// dist_lonlat
double dist_lonlat(const double& lon1, const double& lat1, const double& lon2, const double& lat2);
RcppExport SEXP _terra_dist_lonlat(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< const double& >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< const double& >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< const double& >::type lat2(lat2SEXP);
    rcpp_result_gen = Rcpp::wrap(dist_lonlat(lon1, lat1, lon2, lat2));
    return rcpp_result_gen;
END_RCPP
}
// dir_lonlat
double dir_lonlat(double lon1, double lat1, double lon2, double lat2);
RcppExport SEXP _terra_dir_lonlat(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    rcpp_result_gen = Rcpp::wrap(dir_lonlat(lon1, lat1, lon2, lat2));
    return rcpp_result_gen;
END_RCPP
}
// dist2track
double dist2track(double lon1, double lat1, double lon2, double lat2, double plon, double plat, bool sign);
RcppExport SEXP _terra_dist2track(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP plonSEXP, SEXP platSEXP, SEXP signSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< double >::type plon(plonSEXP);
    Rcpp::traits::input_parameter< double >::type plat(platSEXP);
    Rcpp::traits::input_parameter< bool >::type sign(signSEXP);
    rcpp_result_gen = Rcpp::wrap(dist2track(lon1, lat1, lon2, lat2, plon, plat, sign));
    return rcpp_result_gen;
END_RCPP
}
// alongTrackDistance
double alongTrackDistance(double lon1, double lat1, double lon2, double lat2, double plon, double plat);
RcppExport SEXP _terra_alongTrackDistance(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP plonSEXP, SEXP platSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< double >::type plon(plonSEXP);
    Rcpp::traits::input_parameter< double >::type plat(platSEXP);
    rcpp_result_gen = Rcpp::wrap(alongTrackDistance(lon1, lat1, lon2, lat2, plon, plat));
    return rcpp_result_gen;
END_RCPP
}
// dist2segment
double dist2segment(double plon, double plat, double lon1, double lat1, double lon2, double lat2);
RcppExport SEXP _terra_dist2segment(SEXP plonSEXP, SEXP platSEXP, SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type plon(plonSEXP);
    Rcpp::traits::input_parameter< double >::type plat(platSEXP);
    Rcpp::traits::input_parameter< double >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    rcpp_result_gen = Rcpp::wrap(dist2segment(plon, plat, lon1, lat1, lon2, lat2));
    return rcpp_result_gen;
END_RCPP
}
// dist2segmentPoint
double dist2segmentPoint(double plon, double plat, double lon1, double lat1, double lon2, double lat2, double& ilon, double& ilat);
RcppExport SEXP _terra_dist2segmentPoint(SEXP plonSEXP, SEXP platSEXP, SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP ilonSEXP, SEXP ilatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type plon(plonSEXP);
    Rcpp::traits::input_parameter< double >::type plat(platSEXP);
    Rcpp::traits::input_parameter< double >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< double& >::type ilon(ilonSEXP);
    Rcpp::traits::input_parameter< double& >::type ilat(ilatSEXP);
    rcpp_result_gen = Rcpp::wrap(dist2segmentPoint(plon, plat, lon1, lat1, lon2, lat2, ilon, ilat));
    return rcpp_result_gen;
END_RCPP
}
// intermediate
std::vector<std::vector<double>> intermediate(double lon1, double lat1, double lon2, double lat2, int n, double distance);
RcppExport SEXP _terra_intermediate(SEXP lon1SEXP, SEXP lat1SEXP, SEXP lon2SEXP, SEXP lat2SEXP, SEXP nSEXP, SEXP distanceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lon1(lon1SEXP);
    Rcpp::traits::input_parameter< double >::type lat1(lat1SEXP);
    Rcpp::traits::input_parameter< double >::type lon2(lon2SEXP);
    Rcpp::traits::input_parameter< double >::type lat2(lat2SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type distance(distanceSEXP);
    rcpp_result_gen = Rcpp::wrap(intermediate(lon1, lat1, lon2, lat2, n, distance));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_spat();

static const R_CallMethodDef CallEntries[] = {
    {"_terra_sameSRS", (DL_FUNC) &_terra_sameSRS, 2},
    {"_terra_getCRSname", (DL_FUNC) &_terra_getCRSname, 1},
    {"_terra_getLinearUnits", (DL_FUNC) &_terra_getLinearUnits, 1},
    {"_terra_geotransform", (DL_FUNC) &_terra_geotransform, 1},
    {"_terra_ginfo", (DL_FUNC) &_terra_ginfo, 3},
    {"_terra_sd_info", (DL_FUNC) &_terra_sd_info, 1},
    {"_terra_gdal_version", (DL_FUNC) &_terra_gdal_version, 0},
    {"_terra_geos_version", (DL_FUNC) &_terra_geos_version, 2},
    {"_terra_metatdata", (DL_FUNC) &_terra_metatdata, 1},
    {"_terra_sdsmetatdata", (DL_FUNC) &_terra_sdsmetatdata, 1},
    {"_terra_sdsmetatdataparsed", (DL_FUNC) &_terra_sdsmetatdataparsed, 1},
    {"_terra_gdal_drivers", (DL_FUNC) &_terra_gdal_drivers, 0},
    {"_terra_set_gdal_warnings", (DL_FUNC) &_terra_set_gdal_warnings, 1},
    {"_terra_gdal_init", (DL_FUNC) &_terra_gdal_init, 1},
    {"_terra_percRank", (DL_FUNC) &_terra_percRank, 5},
    {"_terra_setGDALCacheSizeMB", (DL_FUNC) &_terra_setGDALCacheSizeMB, 1},
    {"_terra_getGDALCacheSizeMB", (DL_FUNC) &_terra_getGDALCacheSizeMB, 0},
    {"_terra_get_proj_search_paths", (DL_FUNC) &_terra_get_proj_search_paths, 0},
    {"_terra_set_proj_search_paths", (DL_FUNC) &_terra_set_proj_search_paths, 1},
    {"_terra_PROJ_network", (DL_FUNC) &_terra_PROJ_network, 2},
    {"_terra_dist_lonlat", (DL_FUNC) &_terra_dist_lonlat, 4},
    {"_terra_dir_lonlat", (DL_FUNC) &_terra_dir_lonlat, 4},
    {"_terra_dist2track", (DL_FUNC) &_terra_dist2track, 7},
    {"_terra_alongTrackDistance", (DL_FUNC) &_terra_alongTrackDistance, 6},
    {"_terra_dist2segment", (DL_FUNC) &_terra_dist2segment, 6},
    {"_terra_dist2segmentPoint", (DL_FUNC) &_terra_dist2segmentPoint, 8},
    {"_terra_intermediate", (DL_FUNC) &_terra_intermediate, 6},
    {"_rcpp_module_boot_spat", (DL_FUNC) &_rcpp_module_boot_spat, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_terra(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
