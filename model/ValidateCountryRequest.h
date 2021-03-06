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
 * ValidateCountryRequest.h
 *
 * Input parameter to a country validation request
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ValidateCountryRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_ValidateCountryRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Input parameter to a country validation request
/// </summary>
class  ValidateCountryRequest
    : public ModelBase
{
public:
    ValidateCountryRequest();
    virtual ~ValidateCountryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidateCountryRequest members

    /// <summary>
    /// Raw country input - can be a two-letter code (FIPS 10-4 or ISO 3166-1), three-letter code (ISO 3166-1) or country name
    /// </summary>
    utility::string_t getRawCountryInput() const;
    bool rawCountryInputIsSet() const;
    void unsetRawCountryInput();
    void setRawCountryInput(utility::string_t value);

protected:
    utility::string_t m_RawCountryInput;
    bool m_RawCountryInputIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ValidateCountryRequest_H_ */
