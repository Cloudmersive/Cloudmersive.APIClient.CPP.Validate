/**
 * validateapi
 * The validation APIs help you validate data. Check if an E-mail address is real. Check if a domain is real. Check up on an IP address, and even where it is located. All this and much more is available in the validation API.
 *
 * OpenAPI spec version: v1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.11.
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

#include "BotCheckResponse.h"
#include "GeolocateResponse.h"
#include "GeolocateStreetAddressResponse.h"
#include "IPIntelligenceResponse.h"
#include "IPReverseDNSLookupResponse.h"
#include "IPThreatResponse.h"
#include "TorNodeResponse.h"
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
    /// Geolocate an IP address to a street address
    /// </summary>
    /// <remarks>
    /// Identify an IP address&#39;s street address.  Useful for security and UX applications.
    /// </remarks>
    /// <param name="value">IP address to geolocate, e.g. \&quot;55.55.55.55\&quot;.  The input is a string so be sure to enclose it in double-quotes.</param>
    pplx::task<std::shared_ptr<GeolocateStreetAddressResponse>> iPAddressGeolocateStreetAddress(
        utility::string_t value
    );
    /// <summary>
    /// Get intelligence on an IP address
    /// </summary>
    /// <remarks>
    /// Identify key intelligence about an IP address, including if it is a known threat IP, known bot, Tor exit node, as well as the location of the IP address.
    /// </remarks>
    /// <param name="value">IP address to process, e.g. \&quot;55.55.55.55\&quot;.  The input is a string so be sure to enclose it in double-quotes.</param>
    pplx::task<std::shared_ptr<IPIntelligenceResponse>> iPAddressIpIntelligence(
        utility::string_t value
    );
    /// <summary>
    /// Check if IP address is a Bot client
    /// </summary>
    /// <remarks>
    /// Check if the input IP address is a Bot, robot, or otherwise a non-user entity.  Leverages real-time signals to check against known high-probability bots..
    /// </remarks>
    /// <param name="value">IP address to check, e.g. \&quot;55.55.55.55\&quot;.  The input is a string so be sure to enclose it in double-quotes.</param>
    pplx::task<std::shared_ptr<BotCheckResponse>> iPAddressIsBot(
        utility::string_t value
    );
    /// <summary>
    /// Check if IP address is a known threat
    /// </summary>
    /// <remarks>
    /// Check if the input IP address is a known threat IP address.  Checks against known bad IPs, botnets, compromised servers, and other lists of threats.
    /// </remarks>
    /// <param name="value">IP address to check, e.g. \&quot;55.55.55.55\&quot;.  The input is a string so be sure to enclose it in double-quotes.</param>
    pplx::task<std::shared_ptr<IPThreatResponse>> iPAddressIsThreat(
        utility::string_t value
    );
    /// <summary>
    /// Check if IP address is a Tor node server
    /// </summary>
    /// <remarks>
    /// Check if the input IP address is a Tor exit node server.  Tor servers are a type of privacy-preserving technology that can hide the original IP address who makes a request.
    /// </remarks>
    /// <param name="value">IP address to check, e.g. \&quot;55.55.55.55\&quot;.  The input is a string so be sure to enclose it in double-quotes.</param>
    pplx::task<std::shared_ptr<TorNodeResponse>> iPAddressIsTorNode(
        utility::string_t value
    );
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
    /// <summary>
    /// Perform a reverse domain name (DNS) lookup on an IP address
    /// </summary>
    /// <remarks>
    /// Gets the domain name, if any, associated with the IP address.
    /// </remarks>
    /// <param name="value">IP address to check, e.g. \&quot;55.55.55.55\&quot;.  The input is a string so be sure to enclose it in double-quotes.</param>
    pplx::task<std::shared_ptr<IPReverseDNSLookupResponse>> iPAddressReverseDomainLookup(
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

