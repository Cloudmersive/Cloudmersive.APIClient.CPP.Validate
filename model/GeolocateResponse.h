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
 * GeolocateResponse.h
 *
 * Geolocation result
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_GeolocateResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_GeolocateResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Geolocation result
/// </summary>
class  GeolocateResponse
    : public ModelBase
{
public:
    GeolocateResponse();
    virtual ~GeolocateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GeolocateResponse members

    /// <summary>
    /// Two-letter country code of IP address
    /// </summary>
    utility::string_t getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetCountryCode();
    void setCountryCode(utility::string_t value);
    /// <summary>
    /// Country name of IP address
    /// </summary>
    utility::string_t getCountryName() const;
    bool countryNameIsSet() const;
    void unsetCountryName();
    void setCountryName(utility::string_t value);
    /// <summary>
    /// City of IP address
    /// </summary>
    utility::string_t getCity() const;
    bool cityIsSet() const;
    void unsetCity();
    void setCity(utility::string_t value);
    /// <summary>
    /// State/region code of IP address
    /// </summary>
    utility::string_t getRegionCode() const;
    bool regionCodeIsSet() const;
    void unsetRegionCode();
    void setRegionCode(utility::string_t value);
    /// <summary>
    /// State/region of IP address
    /// </summary>
    utility::string_t getRegionName() const;
    bool regionNameIsSet() const;
    void unsetRegionName();
    void setRegionName(utility::string_t value);
    /// <summary>
    /// Zip or postal code of IP address
    /// </summary>
    utility::string_t getZipCode() const;
    bool zipCodeIsSet() const;
    void unsetZipCode();
    void setZipCode(utility::string_t value);
    /// <summary>
    /// Timezone of IP address
    /// </summary>
    utility::string_t getTimezoneStandardName() const;
    bool timezoneStandardNameIsSet() const;
    void unsetTimezoneStandardName();
    void setTimezoneStandardName(utility::string_t value);
    /// <summary>
    /// Latitude of IP address
    /// </summary>
    double getLatitude() const;
    bool latitudeIsSet() const;
    void unsetLatitude();
    void setLatitude(double value);
    /// <summary>
    /// Longitude of IP address
    /// </summary>
    double getLongitude() const;
    bool longitudeIsSet() const;
    void unsetLongitude();
    void setLongitude(double value);

protected:
    utility::string_t m_CountryCode;
    bool m_CountryCodeIsSet;
    utility::string_t m_CountryName;
    bool m_CountryNameIsSet;
    utility::string_t m_City;
    bool m_CityIsSet;
    utility::string_t m_RegionCode;
    bool m_RegionCodeIsSet;
    utility::string_t m_RegionName;
    bool m_RegionNameIsSet;
    utility::string_t m_ZipCode;
    bool m_ZipCodeIsSet;
    utility::string_t m_TimezoneStandardName;
    bool m_TimezoneStandardNameIsSet;
    double m_Latitude;
    bool m_LatitudeIsSet;
    double m_Longitude;
    bool m_LongitudeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_GeolocateResponse_H_ */