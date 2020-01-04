/**
 * validateapi
 * The validation APIs help you validate data. Check if an E-mail address is real. Check if a domain is real. Check up on an IP address, and even where it is located. All this and much more is available in the validation API.
 *
 * OpenAPI spec version: v1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.10.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * IPAddressApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_IPAddressApi_H_
#define IO_SWAGGER_CLIENT_API_IPAddressApi_H_


#include "../ApiClient.h"

#include "GeolocateResponse.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  IPAddressApi
{
public:
    IPAddressApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~IPAddressApi();
    /// <summary>
    /// Geolocate an IP address
    /// </summary>
    /// <remarks>
    /// Identify an IP address Country, State/Provence, City, Zip/Postal Code, etc.  Useful for security and UX applications.
    /// </remarks>
    /// <param name="value">IP address to geolocate, e.g. \&quot;55.55.55.55\&quot;.  The input is a string so be sure to enclose it in double-quotes.</param>
    pplx::task<std::shared_ptr<GeolocateResponse>> iPAddressPost(
        utility::string_t value
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_IPAddressApi_H_ */

