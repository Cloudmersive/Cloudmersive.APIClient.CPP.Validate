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


#include "AddressApi.h"
#include "IHttpBody.h"
#include "JsonBody.h"
#include "MultipartFormData.h"

#include <unordered_set>

#include <boost/algorithm/string/replace.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

AddressApi::AddressApi( std::shared_ptr<ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

AddressApi::~AddressApi()
{
}

pplx::task<std::shared_ptr<ValidateCountryResponse>> AddressApi::addressCountry(std::shared_ptr<ValidateCountryRequest> input)
{

    // verify the required parameter 'input' is set
    if (input == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'input' when calling AddressApi->addressCountry"));
    }


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = utility::conversions::to_string_t("/validate/address/country");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/xml") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/xml") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( responseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("AddressApi->addressCountry does not produce any supported media type"));
    }

    headerParams[utility::conversions::to_string_t("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );


    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("application/json");
        web::json::value json;

        json = ModelBase::toJson(input);
        

        httpBody = std::shared_ptr<IHttpBody>( new JsonBody( json ) );
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
        std::shared_ptr<MultipartFormData> multipart(new MultipartFormData);

        if(input.get())
        {
            input->toMultipart(multipart, utility::conversions::to_string_t("input"));
        }

        httpBody = multipart;
        requestHttpContentType += utility::conversions::to_string_t("; boundary=") + multipart->getBoundary();
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("AddressApi->addressCountry does not consume any supported media type"));
    }

    // authentication (Apikey) required
    {
        utility::string_t apiKey = apiConfiguration->getApiKey(utility::conversions::to_string_t("Apikey"));
        if ( apiKey.size() > 0 )
        {
            headerParams[utility::conversions::to_string_t("Apikey")] = apiKey;
        }
    }

    return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , utility::conversions::to_string_t("error calling addressCountry: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t contentType = response.headers()[utility::conversions::to_string_t("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling addressCountry: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<ValidateCountryResponse> result(new ValidateCountryResponse());

        if(responseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result->fromJson(json);
        }
        // else if(responseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling addressCountry: unsupported response type"));
        }

        return result;
    });
}
pplx::task<std::shared_ptr<GetTimezonesResponse>> AddressApi::addressGetTimezone(std::shared_ptr<GetTimezonesRequest> input)
{

    // verify the required parameter 'input' is set
    if (input == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'input' when calling AddressApi->addressGetTimezone"));
    }


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = utility::conversions::to_string_t("/validate/address/country/get-timezones");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/xml") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/xml") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( responseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("AddressApi->addressGetTimezone does not produce any supported media type"));
    }

    headerParams[utility::conversions::to_string_t("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );


    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("application/json");
        web::json::value json;

        json = ModelBase::toJson(input);
        

        httpBody = std::shared_ptr<IHttpBody>( new JsonBody( json ) );
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
        std::shared_ptr<MultipartFormData> multipart(new MultipartFormData);

        if(input.get())
        {
            input->toMultipart(multipart, utility::conversions::to_string_t("input"));
        }

        httpBody = multipart;
        requestHttpContentType += utility::conversions::to_string_t("; boundary=") + multipart->getBoundary();
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("AddressApi->addressGetTimezone does not consume any supported media type"));
    }

    // authentication (Apikey) required
    {
        utility::string_t apiKey = apiConfiguration->getApiKey(utility::conversions::to_string_t("Apikey"));
        if ( apiKey.size() > 0 )
        {
            headerParams[utility::conversions::to_string_t("Apikey")] = apiKey;
        }
    }

    return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , utility::conversions::to_string_t("error calling addressGetTimezone: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t contentType = response.headers()[utility::conversions::to_string_t("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling addressGetTimezone: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<GetTimezonesResponse> result(new GetTimezonesResponse());

        if(responseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result->fromJson(json);
        }
        // else if(responseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling addressGetTimezone: unsupported response type"));
        }

        return result;
    });
}
pplx::task<std::shared_ptr<ParseAddressResponse>> AddressApi::addressParseString(std::shared_ptr<ParseAddressRequest> input)
{

    // verify the required parameter 'input' is set
    if (input == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'input' when calling AddressApi->addressParseString"));
    }


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = utility::conversions::to_string_t("/validate/address/parse");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/xml") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/xml") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( responseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("AddressApi->addressParseString does not produce any supported media type"));
    }

    headerParams[utility::conversions::to_string_t("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );


    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("application/json");
        web::json::value json;

        json = ModelBase::toJson(input);
        

        httpBody = std::shared_ptr<IHttpBody>( new JsonBody( json ) );
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
        std::shared_ptr<MultipartFormData> multipart(new MultipartFormData);

        if(input.get())
        {
            input->toMultipart(multipart, utility::conversions::to_string_t("input"));
        }

        httpBody = multipart;
        requestHttpContentType += utility::conversions::to_string_t("; boundary=") + multipart->getBoundary();
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("AddressApi->addressParseString does not consume any supported media type"));
    }

    // authentication (Apikey) required
    {
        utility::string_t apiKey = apiConfiguration->getApiKey(utility::conversions::to_string_t("Apikey"));
        if ( apiKey.size() > 0 )
        {
            headerParams[utility::conversions::to_string_t("Apikey")] = apiKey;
        }
    }

    return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , utility::conversions::to_string_t("error calling addressParseString: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t contentType = response.headers()[utility::conversions::to_string_t("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling addressParseString: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<ParseAddressResponse> result(new ParseAddressResponse());

        if(responseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result->fromJson(json);
        }
        // else if(responseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling addressParseString: unsupported response type"));
        }

        return result;
    });
}
pplx::task<std::shared_ptr<ValidateAddressResponse>> AddressApi::addressValidateAddress(std::shared_ptr<ValidateAddressRequest> input)
{

    // verify the required parameter 'input' is set
    if (input == nullptr)
    {
        throw ApiException(400, utility::conversions::to_string_t("Missing required parameter 'input' when calling AddressApi->addressValidateAddress"));
    }


    std::shared_ptr<ApiConfiguration> apiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t path = utility::conversions::to_string_t("/validate/address/street-address");
    
    std::map<utility::string_t, utility::string_t> queryParams;
    std::map<utility::string_t, utility::string_t> headerParams( apiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> formParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> fileParams;

    std::unordered_set<utility::string_t> responseHttpContentTypes;
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("application/xml") );
    responseHttpContentTypes.insert( utility::conversions::to_string_t("text/xml") );

    utility::string_t responseHttpContentType;

    // use JSON if possible
    if ( responseHttpContentTypes.size() == 0 )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // JSON
    else if ( responseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( responseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != responseHttpContentTypes.end() )
    {
        responseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("AddressApi->addressValidateAddress does not produce any supported media type"));
    }

    headerParams[utility::conversions::to_string_t("Accept")] = responseHttpContentType;

    std::unordered_set<utility::string_t> consumeHttpContentTypes;
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("application/json") );
    consumeHttpContentTypes.insert( utility::conversions::to_string_t("text/json") );


    std::shared_ptr<IHttpBody> httpBody;
    utility::string_t requestHttpContentType;

    // use JSON if possible
    if ( consumeHttpContentTypes.size() == 0 || consumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("application/json");
        web::json::value json;

        json = ModelBase::toJson(input);
        

        httpBody = std::shared_ptr<IHttpBody>( new JsonBody( json ) );
    }
    // multipart formdata
    else if( consumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != consumeHttpContentTypes.end() )
    {
        requestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
        std::shared_ptr<MultipartFormData> multipart(new MultipartFormData);

        if(input.get())
        {
            input->toMultipart(multipart, utility::conversions::to_string_t("input"));
        }

        httpBody = multipart;
        requestHttpContentType += utility::conversions::to_string_t("; boundary=") + multipart->getBoundary();
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("AddressApi->addressValidateAddress does not consume any supported media type"));
    }

    // authentication (Apikey) required
    {
        utility::string_t apiKey = apiConfiguration->getApiKey(utility::conversions::to_string_t("Apikey"));
        if ( apiKey.size() > 0 )
        {
            headerParams[utility::conversions::to_string_t("Apikey")] = apiKey;
        }
    }

    return m_ApiClient->callApi(path, utility::conversions::to_string_t("POST"), queryParams, httpBody, headerParams, formParams, fileParams, requestHttpContentType)
    .then([=](web::http::http_response response)
    {
        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (response.status_code() >= 400)
        {
            throw ApiException(response.status_code()
                , utility::conversions::to_string_t("error calling addressValidateAddress: ") + response.reason_phrase()
                , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
        }

        // check response content type
        if(response.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t contentType = response.headers()[utility::conversions::to_string_t("Content-Type")];
            if( contentType.find(responseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling addressValidateAddress: unexpected response type: ") + contentType
                    , std::make_shared<std::stringstream>(response.extract_utf8string(true).get()));
            }
        }

        return response.extract_string();
    })
    .then([=](utility::string_t response)
    {
        std::shared_ptr<ValidateAddressResponse> result(new ValidateAddressResponse());

        if(responseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value json = web::json::value::parse(response);

            result->fromJson(json);
        }
        // else if(responseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling addressValidateAddress: unsupported response type"));
        }

        return result;
    });
}

}
}
}
}

