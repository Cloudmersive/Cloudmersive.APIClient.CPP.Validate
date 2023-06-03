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
 * ValidateStateRequest.h
 *
 * Request to Validate a State or Province in a country
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ValidateStateRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_ValidateStateRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Request to Validate a State or Province in a country
/// </summary>
class  ValidateStateRequest
    : public ModelBase
{
public:
    ValidateStateRequest();
    virtual ~ValidateStateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidateStateRequest members

    /// <summary>
    /// Required: State or province of the address to validate, such as &#39;California&#39; or &#39;CA&#39;
    /// </summary>
    utility::string_t getStateOrProvince() const;
    bool stateOrProvinceIsSet() const;
    void unsetStateOrProvince();
    void setStateOrProvince(utility::string_t value);
    /// <summary>
    /// Optional (recommended); Name of the country, such as &#39;United States&#39;.  If left blank, and CountryCode is also left blank, will default to United States.  Global countries are supported.
    /// </summary>
    utility::string_t getCountryFullName() const;
    bool countryFullNameIsSet() const;
    void unsetCountryFullName();
    void setCountryFullName(utility::string_t value);
    /// <summary>
    /// Optional; two-letter country code (Two-letter ISO 3166-1 country code) of the country.  If left blank, and CountryFullName is also left blank, will default to United States.  Global countries are supported.
    /// </summary>
    utility::string_t getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetCountryCode();
    void setCountryCode(utility::string_t value);

protected:
    utility::string_t m_StateOrProvince;
    bool m_StateOrProvinceIsSet;
    utility::string_t m_CountryFullName;
    bool m_CountryFullNameIsSet;
    utility::string_t m_CountryCode;
    bool m_CountryCodeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ValidateStateRequest_H_ */
