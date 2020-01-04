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
 * LeadEnrichmentApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_LeadEnrichmentApi_H_
#define IO_SWAGGER_CLIENT_API_LeadEnrichmentApi_H_


#include "../ApiClient.h"

#include "LeadEnrichmentRequest.h"
#include "LeadEnrichmentResponse.h"

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  LeadEnrichmentApi
{
public:
    LeadEnrichmentApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~LeadEnrichmentApi();
    /// <summary>
    /// Enrich an input lead with additional fields of data
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="request">Input lead with known fields set, and unknown fields left blank (null)</param>
    pplx::task<std::shared_ptr<LeadEnrichmentResponse>> leadEnrichmentEnrichLead(
        std::shared_ptr<LeadEnrichmentRequest> request
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_LeadEnrichmentApi_H_ */
