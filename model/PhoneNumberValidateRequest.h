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
 * PhoneNumberValidateRequest.h
 *
 * Request to validate a phone number
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_PhoneNumberValidateRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_PhoneNumberValidateRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Request to validate a phone number
/// </summary>
class  PhoneNumberValidateRequest
    : public ModelBase
{
public:
    PhoneNumberValidateRequest();
    virtual ~PhoneNumberValidateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PhoneNumberValidateRequest members

    /// <summary>
    /// Raw phone number string to parse as input for validation
    /// </summary>
    utility::string_t getPhoneNumber() const;
    bool phoneNumberIsSet() const;
    void unsetPhoneNumber();
    void setPhoneNumber(utility::string_t value);
    /// <summary>
    /// Optional, default country code.  If left blank, will default to \&quot;US\&quot;.
    /// </summary>
    utility::string_t getDefaultCountryCode() const;
    bool defaultCountryCodeIsSet() const;
    void unsetDefaultCountryCode();
    void setDefaultCountryCode(utility::string_t value);

protected:
    utility::string_t m_PhoneNumber;
    bool m_PhoneNumberIsSet;
    utility::string_t m_DefaultCountryCode;
    bool m_DefaultCountryCodeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_PhoneNumberValidateRequest_H_ */
