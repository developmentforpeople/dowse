/* Auto generated */
#include <sys/types.h>

#include <kore/kore.h>
#include <kore/http.h>

#include "assets.h"

const u_int8_t asset_browserconfig_xml[] = {
0x3c,0x3f,0x78,0x6d,0x6c,0x20,0x76,0x65,0x72,0x73,0x69,0x6f,0x6e,0x3d,0x22,0x31,0x2e,0x30,0x22,0x20,0x65,0x6e,0x63,0x6f,0x64,0x69,0x6e,0x67,0x3d,0x22,0x75,0x74,0x66,0x2d,0x38,0x22,0x3f,0x3e,0x0a,0x3c,0x62,0x72,0x6f,0x77,0x73,0x65,0x72,0x63,0x6f,0x6e,0x66,0x69,0x67,0x3e,0x3c,0x6d,0x73,0x61,0x70,0x70,0x6c,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x3e,0x3c,0x74,0x69,0x6c,0x65,0x3e,0x3c,0x73,0x71,0x75,0x61,0x72,0x65,0x37,0x30,0x78,0x37,0x30,0x6c,0x6f,0x67,0x6f,0x20,0x73,0x72,0x63,0x3d,0x22,0x2f,0x6d,0x73,0x2d,0x69,0x63,0x6f,0x6e,0x2d,0x37,0x30,0x78,0x37,0x30,0x2e,0x70,0x6e,0x67,0x22,0x2f,0x3e,0x3c,0x73,0x71,0x75,0x61,0x72,0x65,0x31,0x35,0x30,0x78,0x31,0x35,0x30,0x6c,0x6f,0x67,0x6f,0x20,0x73,0x72,0x63,0x3d,0x22,0x2f,0x6d,0x73,0x2d,0x69,0x63,0x6f,0x6e,0x2d,0x31,0x35,0x30,0x78,0x31,0x35,0x30,0x2e,0x70,0x6e,0x67,0x22,0x2f,0x3e,0x3c,0x73,0x71,0x75,0x61,0x72,0x65,0x33,0x31,0x30,0x78,0x33,0x31,0x30,0x6c,0x6f,0x67,0x6f,0x20,0x73,0x72,0x63,0x3d,0x22,0x2f,0x6d,0x73,0x2d,0x69,0x63,0x6f,0x6e,0x2d,0x33,0x31,0x30,0x78,0x33,0x31,0x30,0x2e,0x70,0x6e,0x67,0x22,0x2f,0x3e,0x3c,0x54,0x69,0x6c,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x3e,0x23,0x66,0x66,0x66,0x66,0x66,0x66,0x3c,0x2f,0x54,0x69,0x6c,0x65,0x43,0x6f,0x6c,0x6f,0x72,0x3e,0x3c,0x2f,0x74,0x69,0x6c,0x65,0x3e,0x3c,0x2f,0x6d,0x73,0x61,0x70,0x70,0x6c,0x69,0x63,0x61,0x74,0x69,0x6f,0x6e,0x3e,0x3c,0x2f,0x62,0x72,0x6f,0x77,0x73,0x65,0x72,0x63,0x6f,0x6e,0x66,0x69,0x67,0x3e,0x00};

const u_int32_t asset_len_browserconfig_xml = 281;
const time_t asset_mtime_browserconfig_xml = 1500293252;
const char *asset_sha256_browserconfig_xml = "\"13bc647273455808acd0f6605124ab3a78bbae67b532f8b993dc0f8ce2a03d0d\"";
int
asset_serve_browserconfig_xml(struct http_request *req)
{
	http_serveable(req, asset_browserconfig_xml, asset_len_browserconfig_xml,
	    asset_sha256_browserconfig_xml, "text/plain");
	return (KORE_RESULT_OK);
}
