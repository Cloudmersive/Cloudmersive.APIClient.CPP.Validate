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
 * ValidatePostalCodeResponse.h
 *
 * Result of validating a postal code
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_ValidatePostalCodeResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_ValidatePostalCodeResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of validating a postal code
/// </summary>
class  ValidatePostalCodeResponse
    : public ModelBase
{
public:
    ValidatePostalCodeResponse();
    virtual ~ValidatePostalCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ValidatePostalCodeResponse members

    /// <summary>
    /// True if the Postal Code is valid, false otherwise
    /// </summary>
    bool isValidPostalCode() const;
    bool validPostalCodeIsSet() const;
    void unsetValidPostalCode();
    void setValidPostalCode(bool value);
    /// <summary>
    /// If valid, City corresponding to the input postal code, such as &#39;Walnut Creek&#39;
    /// </summary>
    utility::string_t getCity() const;
    bool cityIsSet() const;
    void unsetCity();
    void setCity(utility::string_t value);
    /// <summary>
    /// If valid; State or province corresponding to the input postal code, such as &#39;CA&#39; or &#39;California&#39;
    /// </summary>
    utility::string_t getStateOrProvince() const;
    bool stateOrProvinceIsSet() const;
    void unsetStateOrProvince();
    void setStateOrProvince(utility::string_t value);
    /// <summary>
    /// If the postal code is valid, the degrees latitude of the centroid of the postal code, null otherwise
    /// </summary>
    double getLatitude() const;
    bool latitudeIsSet() const;
    void unsetLatitude();
    void setLatitude(double value);
    /// <summary>
    /// If the postal code is valid, the degrees longitude of the centroid of the postal code, null otherwise
    /// </summary>
    double getLongitude() const;
    bool longitudeIsSet() const;
    void unsetLongitude();
    void setLongitude(double value);

protected:
    bool m_ValidPostalCode;
    bool m_ValidPostalCodeIsSet;
    utility::string_t m_City;
    bool m_CityIsSet;
    utility::string_t m_StateOrProvince;
    bool m_StateOrProvinceIsSet;
    double m_Latitude;
    bool m_LatitudeIsSet;
    double m_Longitude;
    bool m_LongitudeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_ValidatePostalCodeResponse_H_ */
