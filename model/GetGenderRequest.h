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
 * GetGenderRequest.h
 *
 * Request to get the gender from a first name
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_GetGenderRequest_H_
#define IO_SWAGGER_CLIENT_MODEL_GetGenderRequest_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Request to get the gender from a first name
/// </summary>
class  GetGenderRequest
    : public ModelBase
{
public:
    GetGenderRequest();
    virtual ~GetGenderRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetGenderRequest members

    /// <summary>
    /// Input first name (given name) to get the gender of
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();
    void setFirstName(utility::string_t value);
    /// <summary>
    /// Optional; the country for this name, possible values are \&quot;US\&quot;, \&quot;LY\&quot;, \&quot;NI\&quot;, \&quot;TT\&quot;, \&quot;MK\&quot;, \&quot;KZ\&quot;, \&quot;BO\&quot;, \&quot;UG\&quot;, \&quot;TZ\&quot;, \&quot;CL\&quot;, \&quot;SI\&quot;, \&quot;MA\&quot;, \&quot;RW\&quot;, \&quot;VN\&quot;, \&quot;AW\&quot;, \&quot;CY\&quot;, \&quot;BH\&quot;, \&quot;SG\&quot;, \&quot;ZA\&quot;, \&quot;MU\&quot;, \&quot;BR\&quot;, \&quot;TN\&quot;, \&quot;KH\&quot;, \&quot;US\&quot;, \&quot;TH\&quot;, \&quot;TW\&quot;, \&quot;UY\&quot;, \&quot;DO\&quot;, \&quot;CO\&quot;, \&quot;UA\&quot;, \&quot;QA\&quot;, \&quot;BY\&quot;, \&quot;SN\&quot;, \&quot;SD\&quot;, \&quot;FJ\&quot;, \&quot;LB\&quot;, \&quot;BE\&quot;, \&quot;ML\&quot;, \&quot;LV\&quot;, \&quot;FR\&quot;, \&quot;TM\&quot;, \&quot;NG\&quot;, \&quot;EC\&quot;, \&quot;NO\&quot;, \&quot;SL\&quot;, \&quot;CR\&quot;, \&quot;PA\&quot;, \&quot;GE\&quot;, \&quot;CH\&quot;, \&quot;KR\&quot;, \&quot;RS\&quot;, \&quot;ZM\&quot;, \&quot;FI\&quot;, \&quot;BF\&quot;, \&quot;MC\&quot;, \&quot;AU\&quot;, \&quot;GA\&quot;, \&quot;LS\&quot;, \&quot;RU\&quot;, \&quot;IN\&quot;, \&quot;SE\&quot;, \&quot;LK\&quot;, \&quot;BZ\&quot;, \&quot;MX\&quot;, \&quot;GH\&quot;, \&quot;AF\&quot;, \&quot;TJ\&quot;, \&quot;BN\&quot;, \&quot;DZ\&quot;, \&quot;CM\&quot;, \&quot;GR\&quot;, \&quot;MD\&quot;, \&quot;HN\&quot;, \&quot;AT\&quot;, \&quot;NZ\&quot;, \&quot;SV\&quot;, \&quot;GW\&quot;, \&quot;NA\&quot;, \&quot;AR\&quot;, \&quot;MZ\&quot;, \&quot;PK\&quot;, \&quot;MN\&quot;, \&quot;IQ\&quot;, \&quot;BW\&quot;, \&quot;VE\&quot;, \&quot;PT\&quot;, \&quot;BS\&quot;, \&quot;AL\&quot;, \&quot;TG\&quot;, \&quot;ID\&quot;, \&quot;ET\&quot;, \&quot;CF\&quot;, \&quot;JP\&quot;, \&quot;BB\&quot;, \&quot;PH\&quot;, \&quot;CU\&quot;, \&quot;BD\&quot;, \&quot;AO\&quot;, \&quot;SM\&quot;, \&quot;LC\&quot;, \&quot;ME\&quot;, \&quot;RO\&quot;,  DANIL\&quot;O\&quot;\&quot;, \&quot;ES\&quot;, \&quot;EE\&quot;, \&quot;IL\&quot;, \&quot;ZW\&quot;, \&quot;SY\&quot;, \&quot;MW\&quot;, \&quot;LU\&quot;, \&quot;IR\&quot;, \&quot;SC\&quot;, \&quot;NL\&quot;, \&quot;JO\&quot;, \&quot;AM\&quot;, \&quot;DE\&quot;, \&quot;GL\&quot;, \&quot;OM\&quot;, \&quot;DK\&quot;, \&quot;HR\&quot;, \&quot;LI\&quot;, \&quot;TD\&quot;, \&quot;KM\&quot;, \&quot;BA\&quot;, \&quot;GM\&quot;, \&quot;GD\&quot;, \&quot;CA\&quot;, \&quot;CZ\&quot;, \&quot;MR\&quot;, \&quot;ST\&quot;, \&quot;IS\&quot;, \&quot;LR\&quot;, \&quot;IE\&quot;, \&quot;VC\&quot;, \&quot;AE\&quot;, \&quot;KG\&quot;, \&quot;DJ\&quot;, \&quot;TR\&quot;, \&quot;KE\&quot;, \&quot;NE\&quot;, \&quot;UZ\&quot;, \&quot;CN\&quot;, \&quot;GQ\&quot;, \&quot;SK\&quot;, \&quot;BJ\&quot;, \&quot;MG\&quot;, \&quot;BT\&quot;, \&quot;EG\&quot;, \&quot;PL\&quot;, \&quot;IT\&quot;, \&quot;SA\&quot;, \&quot;MY\&quot;, \&quot;CI\&quot;, \&quot;AG\&quot;, \&quot;AD\&quot;, \&quot;KS\&quot;, \&quot;HU\&quot;, \&quot;CG\&quot;, \&quot;KP\&quot;, \&quot;DM\&quot;, \&quot;GN\&quot;, \&quot;GT\&quot;, \&quot;NP\&quot;, \&quot;JM\&quot;, \&quot;LA\&quot;, \&quot;GB\&quot;, \&quot;BG\&quot;, \&quot;HT\&quot;, \&quot;PE\&quot;, \&quot;AZ\&quot;, \&quot;LT\&quot;, \&quot;SZ\&quot;, \&quot;PY\&quot;, \&quot;MT\&quot;, \&quot;VA\&quot;
    /// </summary>
    utility::string_t getCountryCode() const;
    bool countryCodeIsSet() const;
    void unsetCountryCode();
    void setCountryCode(utility::string_t value);

protected:
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_CountryCode;
    bool m_CountryCodeIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_GetGenderRequest_H_ */
