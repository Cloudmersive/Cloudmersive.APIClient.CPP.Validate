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
 * DomainQualityResponse.h
 *
 * Result of performing a domain quality score operation
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_DomainQualityResponse_H_
#define IO_SWAGGER_CLIENT_MODEL_DomainQualityResponse_H_


#include "../ModelBase.h"


namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Result of performing a domain quality score operation
/// </summary>
class  DomainQualityResponse
    : public ModelBase
{
public:
    DomainQualityResponse();
    virtual ~DomainQualityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DomainQualityResponse members

    /// <summary>
    /// The quality score of the domain name; possible values are 0.0 to 10.0 with 10.0 being the highest and 0.0 being the lowest quality.
    /// </summary>
    double getDomainQualityScore() const;
    bool domainQualityScoreIsSet() const;
    void unsetDomainQualityScore();
    void setDomainQualityScore(double value);

protected:
    double m_DomainQualityScore;
    bool m_DomainQualityScoreIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_DomainQualityResponse_H_ */
