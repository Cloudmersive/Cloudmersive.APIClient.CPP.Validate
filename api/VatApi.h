/**
 * validateapi
 * The validation APIs help you validate data. Check if an E-mail address is real. Check if a domain is real. Check up on an IP address, and even where it is located. All this and much more is available in the validation API.
 *
 * OpenAPI spec version: v1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.5.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * VatApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_VatApi_H_
#define IO_SWAGGER_CLIENT_API_VatApi_H_


#include "../ApiClient.h"

#include "VatLookupRequest.h"
#include "VatLookupResponse.h"

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  VatApi
{
public:
    VatApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~VatApi();
    /// <summary>
    /// Lookup a VAT code
    /// </summary>
    /// <remarks>
    /// Checks if a VAT code is valid, and if it is, returns more information about it
    /// </remarks>
    /// <param name="input">Input VAT code</param>
    pplx::task<std::shared_ptr<VatLookupResponse>> vatVatLookup(
        std::shared_ptr<VatLookupRequest> input
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_VatApi_H_ */
