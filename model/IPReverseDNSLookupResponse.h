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
 * IPReverseDNSLookupResponse.h
 *
 * Result of performing a Reverse Domain (DNS) lookup on an IP address
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_IPReverseDNSLookupResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_IPReverseDNSLookupResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of performing a Reverse Domain (DNS) lookup on an IP address
/// </summary>
class  IPReverseDNSLookupResponse
    : public ModelBase
{
public:
    IPReverseDNSLookupResponse();
    virtual ~IPReverseDNSLookupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IPReverseDNSLookupResponse members

    /// <summary>
    /// True if a domain was found, false otherwise
    /// </summary>
    bool isSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();
    void setSuccessful(bool value);
    /// <summary>
    /// Host name (fully-qualified) associated with the IP address, if any
    /// </summary>
    utility::string_t getHostName() const;
    bool hostNameIsSet() const;
    void unsetHostName();
    void setHostName(utility::string_t value);

protected:
    bool m_Successful;
    bool m_SuccessfulIsSet;
    utility::string_t m_HostName;
    bool m_HostNameIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_IPReverseDNSLookupResponse_H_ */
