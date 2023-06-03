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
 * ReverseGeocodeAddressResponse.h
 *
 * Result of reverse geocoding a street address
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ReverseGeocodeAddressResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_ReverseGeocodeAddressResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of reverse geocoding a street address
/// </summary>
class  ReverseGeocodeAddressResponse
    : public ModelBase
{
public:
    ReverseGeocodeAddressResponse();
    virtual ~ReverseGeocodeAddressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ReverseGeocodeAddressResponse members

    /// <summary>
    /// True if the address operation was successful, false otherwise
    /// </summary>
    bool isSuccessful() const;
    bool successfulIsSet() const;
    void unsetSuccessful();
    void setSuccessful(bool value);
    /// <summary>
    /// Street address to validate, such as &#39;2950 Buskirk Ave.&#39;
    /// </summary>
    utility::string_t getStreetAddress() const;
    bool streetAddressIsSet() const;
    void unsetStreetAddress();
    void setStreetAddress(utility::string_t value);
    /// <summary>
    /// City part of the addrerss to validate, such as &#39;Walnut Creek&#39;
    /// </summary>
    utility::string_t getCity() const;
    bool cityIsSet() const;
    void unsetCity();
    void setCity(utility::string_t value);
    /// <summary>
    /// State or province of the address to validate, such as &#39;CA&#39; or &#39;California&#39;
    /// </summary>
    utility::string_t getStateOrProvince() const;
    bool stateOrProvinceIsSet() const;
    void unsetStateOrProvince();
    void setStateOrProvince(utility::string_t value);
    /// <summary>
    /// Zip code or postal code of the address to validate, such as &#39;94597&#39;
    /// </summary>
    utility::string_t getPostalCode() const;
    bool postalCodeIsSet() const;
    void unsetPostalCode();
    void setPostalCode(utility::string_t value);
    /// <summary>
    /// Name of the country, such as &#39;United States&#39;.  Global countries are supported.
    /// </summary>
    utility::string_t getCountryFullName() const;
    bool countryFullNameIsSet() const;
    void unsetCountryFullName();
    void setCountryFullName(utility::string_t value);
    /// <summary>
    /// Three-letter ISO 3166-1 country code
    /// </summary>
    utility::string_t getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetCountryCode();
    void setCountryCode(utility::string_t value);

protected:
    bool m_Successful;
    bool m_SuccessfulIsSet;
    utility::string_t m_StreetAddress;
    bool m_StreetAddressIsSet;
    utility::string_t m_City;
    bool m_CityIsSet;
    utility::string_t m_StateOrProvince;
    bool m_StateOrProvinceIsSet;
    utility::string_t m_PostalCode;
    bool m_PostalCodeIsSet;
    utility::string_t m_CountryFullName;
    bool m_CountryFullNameIsSet;
    utility::string_t m_CountryCode;
    bool m_CountryCodeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ReverseGeocodeAddressResponse_H_ */