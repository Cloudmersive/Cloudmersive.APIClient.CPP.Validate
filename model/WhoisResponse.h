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
 * WhoisResponse.h
 *
 * Result of a WHOIS operation
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_WhoisResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_WhoisResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of a WHOIS operation
/// </summary>
class  WhoisResponse
    : public ModelBase
{
public:
    WhoisResponse();
    virtual ~WhoisResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// WhoisResponse members

    /// <summary>
    /// True if the domain is valid, false if it is not
    /// </summary>
    bool isValidDomain() const;
    bool validDomainIsSet() const;
    void unsetValidDomain();
    void setValidDomain(bool value);
    /// <summary>
    /// Name of the domain registrant
    /// </summary>
    utility::string_t getRegistrantName() const;
    bool registrantNameIsSet() const;
    void unsetRegistrantName();
    void setRegistrantName(utility::string_t value);
    /// <summary>
    /// Organization name of the domain registrant
    /// </summary>
    utility::string_t getRegistrantOrganization() const;
    bool registrantOrganizationIsSet() const;
    void unsetRegistrantOrganization();
    void setRegistrantOrganization(utility::string_t value);
    /// <summary>
    /// Email address of the domain registrant
    /// </summary>
    utility::string_t getRegistrantEmail() const;
    bool registrantEmailIsSet() const;
    void unsetRegistrantEmail();
    void setRegistrantEmail(utility::string_t value);
    /// <summary>
    /// Street number of the address of the domain registrant, if available
    /// </summary>
    utility::string_t getRegistrantStreetNumber() const;
    bool registrantStreetNumberIsSet() const;
    void unsetRegistrantStreetNumber();
    void setRegistrantStreetNumber(utility::string_t value);
    /// <summary>
    /// Street name of the address of the domain registrant, if available
    /// </summary>
    utility::string_t getRegistrantStreet() const;
    bool registrantStreetIsSet() const;
    void unsetRegistrantStreet();
    void setRegistrantStreet(utility::string_t value);
    /// <summary>
    /// City of the domain registrant, if available
    /// </summary>
    utility::string_t getRegistrantCity() const;
    bool registrantCityIsSet() const;
    void unsetRegistrantCity();
    void setRegistrantCity(utility::string_t value);
    /// <summary>
    /// State or Province of the address of the domain registrant, if available
    /// </summary>
    utility::string_t getRegistrantStateOrProvince() const;
    bool registrantStateOrProvinceIsSet() const;
    void unsetRegistrantStateOrProvince();
    void setRegistrantStateOrProvince(utility::string_t value);
    /// <summary>
    /// Postal code of the address of the domain registrant, if available
    /// </summary>
    utility::string_t getRegistrantPostalCode() const;
    bool registrantPostalCodeIsSet() const;
    void unsetRegistrantPostalCode();
    void setRegistrantPostalCode(utility::string_t value);
    /// <summary>
    /// Country of the address of the domain registrant, if available
    /// </summary>
    utility::string_t getRegistrantCountry() const;
    bool registrantCountryIsSet() const;
    void unsetRegistrantCountry();
    void setRegistrantCountry(utility::string_t value);
    /// <summary>
    /// Raw address string of the domain registrant, if available
    /// </summary>
    utility::string_t getRegistrantRawAddress() const;
    bool registrantRawAddressIsSet() const;
    void unsetRegistrantRawAddress();
    void setRegistrantRawAddress(utility::string_t value);
    /// <summary>
    /// Telephone number of the address of the domain registrant
    /// </summary>
    utility::string_t getRegistrantTelephone() const;
    bool registrantTelephoneIsSet() const;
    void unsetRegistrantTelephone();
    void setRegistrantTelephone(utility::string_t value);
    /// <summary>
    /// Server used to lookup WHOIS information (may change based on lookup).
    /// </summary>
    utility::string_t getWhoisServer() const;
    bool whoisServerIsSet() const;
    void unsetWhoisServer();
    void setWhoisServer(utility::string_t value);
    /// <summary>
    /// WHOIS raw text record
    /// </summary>
    utility::string_t getRawTextRecord() const;
    bool rawTextRecordIsSet() const;
    void unsetRawTextRecord();
    void setRawTextRecord(utility::string_t value);
    /// <summary>
    /// Creation date for the record
    /// </summary>
    utility::datetime getCreatedDt() const;
    bool createdDtIsSet() const;
    void unsetCreatedDt();
    void setCreatedDt(utility::datetime value);

protected:
    bool m_ValidDomain;
    bool m_ValidDomainIsSet;
    utility::string_t m_RegistrantName;
    bool m_RegistrantNameIsSet;
    utility::string_t m_RegistrantOrganization;
    bool m_RegistrantOrganizationIsSet;
    utility::string_t m_RegistrantEmail;
    bool m_RegistrantEmailIsSet;
    utility::string_t m_RegistrantStreetNumber;
    bool m_RegistrantStreetNumberIsSet;
    utility::string_t m_RegistrantStreet;
    bool m_RegistrantStreetIsSet;
    utility::string_t m_RegistrantCity;
    bool m_RegistrantCityIsSet;
    utility::string_t m_RegistrantStateOrProvince;
    bool m_RegistrantStateOrProvinceIsSet;
    utility::string_t m_RegistrantPostalCode;
    bool m_RegistrantPostalCodeIsSet;
    utility::string_t m_RegistrantCountry;
    bool m_RegistrantCountryIsSet;
    utility::string_t m_RegistrantRawAddress;
    bool m_RegistrantRawAddressIsSet;
    utility::string_t m_RegistrantTelephone;
    bool m_RegistrantTelephoneIsSet;
    utility::string_t m_WhoisServer;
    bool m_WhoisServerIsSet;
    utility::string_t m_RawTextRecord;
    bool m_RawTextRecordIsSet;
    utility::datetime m_CreatedDt;
    bool m_CreatedDtIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_WhoisResponse_H_ */
