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
 * SqlInjectionCheckRequestItem.h
 *
 * Individual item to protect for SQL Injection
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_SqlInjectionCheckRequestItem_H_
#define IO_SWAGGER_CLIENT_MODEL_SqlInjectionCheckRequestItem_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Individual item to protect for SQL Injection
/// </summary>
class  SqlInjectionCheckRequestItem
    : public ModelBase
{
public:
    SqlInjectionCheckRequestItem();
    virtual ~SqlInjectionCheckRequestItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SqlInjectionCheckRequestItem members

    /// <summary>
    /// Individual input text item to check for SQL Injection
    /// </summary>
    utility::string_t getInputText() const;
    bool inputTextIsSet() const;
    void unsetInputText();
    void setInputText(utility::string_t value);

protected:
    utility::string_t m_InputText;
    bool m_InputTextIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_SqlInjectionCheckRequestItem_H_ */
