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
 * IPIntelligenceResponse.h
 *
 * IP address intelligence result
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_IPIntelligenceResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_IPIntelligenceResponse_H_


#include "../ModelBase.h"

#include "GeolocateResponse.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// IP address intelligence result
/// </summary>
class  IPIntelligenceResponse
    : public ModelBase
{
public:
    IPIntelligenceResponse();
    virtual ~IPIntelligenceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IPIntelligenceResponse members

    /// <summary>
    /// True if the IP address is a known bot, otherwise false
    /// </summary>
    bool isIsBot() const;
    bool isBotIsSet() const;
    void unsetIsBot();
    void setIsBot(bool value);
    /// <summary>
    /// True if the IP address is a known Tor exit node, otherwise false
    /// </summary>
    bool isIsTorNode() const;
    bool isTorNodeIsSet() const;
    void unsetIsTorNode();
    void setIsTorNode(bool value);
    /// <summary>
    /// True if the IP address is a known threat IP, otherwise false
    /// </summary>
    bool isIsThreat() const;
    bool isThreatIsSet() const;
    void unsetIsThreat();
    void setIsThreat(bool value);
    /// <summary>
    /// True if the IP address is in the European Union, otherwise false
    /// </summary>
    bool isIsEU() const;
    bool isEUIsSet() const;
    void unsetIsEU();
    void setIsEU(bool value);
    /// <summary>
    /// Returns the location of the IP address
    /// </summary>
    std::shared_ptr<GeolocateResponse> getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();
    void setLocation(std::shared_ptr<GeolocateResponse> value);
    /// <summary>
    /// ISO 4217 currency code for the IP address location
    /// </summary>
    utility::string_t getCurrencyCode() const;
    bool currencyCodeIsSet() const;
    void unsetCurrencyCode();
    void setCurrencyCode(utility::string_t value);
    /// <summary>
    /// Name of the currency in English
    /// </summary>
    utility::string_t getCurrencyName() const;
    bool currencyNameIsSet() const;
    void unsetCurrencyName();
    void setCurrencyName(utility::string_t value);
    /// <summary>
    /// Region (continent) in which the country is located; possible values are None, Europe, Americas, Asia, Africa, Oceania
    /// </summary>
    utility::string_t getRegionArea() const;
    bool regionAreaIsSet() const;
    void unsetRegionArea();
    void setRegionArea(utility::string_t value);
    /// <summary>
    /// Subregion in which the country is located; possible values are None, NorthernEurope, WesternEurope, SouthernEurope, EasternEurope, CentralAmerica, NorthernAmerica, SouthAmerica, EasternAfrica, MiddleAfrica, NorthernAfrica , SouthernAfrica , WesternAfrica , CentralAsia , EasternAsia , SouthernAsia , SouthEasternAsia , WesternAsia , Southern , Middle , AustraliaandNewZealand , Melanesia , Polynesia , Micronesia , Caribbean,
    /// </summary>
    utility::string_t getSubregionArea() const;
    bool subregionAreaIsSet() const;
    void unsetSubregionArea();
    void setSubregionArea(utility::string_t value);

protected:
    bool m_IsBot;
    bool m_IsBotIsSet;
    bool m_IsTorNode;
    bool m_IsTorNodeIsSet;
    bool m_IsThreat;
    bool m_IsThreatIsSet;
    bool m_IsEU;
    bool m_IsEUIsSet;
    std::shared_ptr<GeolocateResponse> m_Location;
    bool m_LocationIsSet;
    utility::string_t m_CurrencyCode;
    bool m_CurrencyCodeIsSet;
    utility::string_t m_CurrencyName;
    bool m_CurrencyNameIsSet;
    utility::string_t m_RegionArea;
    bool m_RegionAreaIsSet;
    utility::string_t m_SubregionArea;
    bool m_SubregionAreaIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_IPIntelligenceResponse_H_ */
