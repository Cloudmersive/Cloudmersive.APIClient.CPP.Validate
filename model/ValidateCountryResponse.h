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
 * ValidateCountryResponse.h
 *
 * Result of performing a country validation operation
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ValidateCountryResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_ValidateCountryResponse_H_


#include "../ModelBase.h"

#include "Timezone.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of performing a country validation operation
/// </summary>
class  ValidateCountryResponse
    : public ModelBase
{
public:
    ValidateCountryResponse();
    virtual ~ValidateCountryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidateCountryResponse members

    /// <summary>
    /// True if successful, false otherwise
    /// </summary>
    bool isSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();
    void setSuccessful(bool value);
    /// <summary>
    /// Full name of the country
    /// </summary>
    utility::string_t getCountryFullName() const;
    bool countryFullNameIsSet() const;
    void unsetCountryFullName();
    void setCountryFullName(utility::string_t value);
    /// <summary>
    /// Two-letter ISO 3166-1 country code
    /// </summary>
    utility::string_t getISOTwoLetterCode() const;
    bool iSOTwoLetterCodeIsSet() const;
    void unsetISOTwoLetterCode();
    void setISOTwoLetterCode(utility::string_t value);
    /// <summary>
    /// Two-letter FIPS 10-4 country code
    /// </summary>
    utility::string_t getFIPSTwoLetterCode() const;
    bool fIPSTwoLetterCodeIsSet() const;
    void unsetFIPSTwoLetterCode();
    void setFIPSTwoLetterCode(utility::string_t value);
    /// <summary>
    /// Three-letter ISO 3166-1 country code
    /// </summary>
    utility::string_t getThreeLetterCode() const;
    bool threeLetterCodeIsSet() const;
    void unsetThreeLetterCode();
    void setThreeLetterCode(utility::string_t value);
    /// <summary>
    /// Time zones (IANA/Olsen) in the country
    /// </summary>
    std::vector<std::shared_ptr<Timezone>>& getTimezones();
    bool timezonesIsSet() const;
    void unsetTimezones();
    void setTimezones(std::vector<std::shared_ptr<Timezone>> value);

protected:
    bool m_Successful;
    bool m_SuccessfulIsSet;
    utility::string_t m_CountryFullName;
    bool m_CountryFullNameIsSet;
    utility::string_t m_ISOTwoLetterCode;
    bool m_ISOTwoLetterCodeIsSet;
    utility::string_t m_FIPSTwoLetterCode;
    bool m_FIPSTwoLetterCodeIsSet;
    utility::string_t m_ThreeLetterCode;
    bool m_ThreeLetterCodeIsSet;
    std::vector<std::shared_ptr<Timezone>> m_Timezones;
    bool m_TimezonesIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ValidateCountryResponse_H_ */
