/* Auto generated */
#include <sys/types.h>

#include <kore/kore.h>
#include <kore/http.h>

#include "assets.h"

const u_int8_t asset__fixed_width_scss[] = {
0x2f,0x2f,0x20,0x46,0x69,0x78,0x65,0x64,0x20,0x57,0x69,0x64,0x74,0x68,0x20,0x49,0x63,0x6f,0x6e,0x73,0x0a,0x2f,0x2f,0x20,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x2d,0x0a,0x2e,0x23,0x7b,0x24,0x66,0x61,0x2d,0x63,0x73,0x73,0x2d,0x70,0x72,0x65,0x66,0x69,0x78,0x7d,0x2d,0x66,0x77,0x20,0x7b,0x0a,0x20,0x20,0x77,0x69,0x64,0x74,0x68,0x3a,0x20,0x28,0x31,0x38,0x65,0x6d,0x20,0x2f,0x20,0x31,0x34,0x29,0x3b,0x0a,0x20,0x20,0x74,0x65,0x78,0x74,0x2d,0x61,0x6c,0x69,0x67,0x6e,0x3a,0x20,0x63,0x65,0x6e,0x74,0x65,0x72,0x3b,0x0a,0x7d,0x0a,0x00};

const u_int32_t asset_len__fixed_width_scss = 120;
const time_t asset_mtime__fixed_width_scss = 1500293252;
const char *asset_sha256__fixed_width_scss = "\"b8b0b3478e04e868ef0cd5fa3fb291524f1932144d1bd3427d156afe369194e9\"";
int
asset_serve__fixed_width_scss(struct http_request *req)
{
	http_serveable(req, asset__fixed_width_scss, asset_len__fixed_width_scss,
	    asset_sha256__fixed_width_scss, "text/plain");
	return (KORE_RESULT_OK);
}
