//
//  BoxSDKConstants.h
//  BoxSDK
//
//  Created on 2/22/13.
//  Copyright (c) 2013 Box. All rights reserved.
//

// API URLs
extern NSString *const BoxAPIBaseURL;
extern NSString *const BoxAPIUploadBaseURL;

// API Versions
extern NSString *const BoxAPIVersion;
extern NSString *const BoxAPIUploadAPIVersion;

// HTTP Method Names
typedef NSString BoxAPIHTTPMethod;
extern BoxAPIHTTPMethod *const BoxAPIHTTPMethodDELETE;
extern BoxAPIHTTPMethod *const BoxAPIHTTPMethodGET;
extern BoxAPIHTTPMethod *const BoxAPIHTTPMethodOPTIONS;
extern BoxAPIHTTPMethod *const BoxAPIHTTPMethodPOST;
extern BoxAPIHTTPMethod *const BoxAPIHTTPMethodPUT;

// HTTP Header Names
typedef NSString BoxAPIHTTPHeader;
extern BoxAPIHTTPHeader *const BoxAPIHTTPHeaderAuthorization;

// OAuth2 constants
// Authorization code response
extern NSString *const BoxOAuth2URLParameterAuthorizationCodeKey;
extern NSString *const BoxOAuth2URLParameterErrorCodeKey;
// token response
extern NSString *const BoxOAuth2TokenJSONAccessTokenKey;
extern NSString *const BoxOAuth2TokenJSONRefreshTokenKey;
extern NSString *const BoxOAuth2TokenJSONExpiresInKey;
// token request
extern NSString *const BoxOAuth2TokenRequestGrantTypeKey;
extern NSString *const BoxOAuth2TokenRequestAuthorizationCodeKey;
extern NSString *const BoxOAuth2TokenRequestRefreshTokenKey;
extern NSString *const BoxOAuth2TokenRequestClientIDKey;
extern NSString *const BoxOAuth2TokenRequestClientSecretKey;
extern NSString *const BoxOAuth2TokenRequestRedirectURIKey;

extern NSString *const BoxOAuth2TokenRequestGrantTypeAuthorizationCode;
extern NSString *const BoxOAuth2TokenRequestGrantTypeRefreshToken;


// Item Types
typedef NSString BoxAPIItemType;
extern BoxAPIItemType *const BoxAPIItemTypeFile;
extern BoxAPIItemType *const BoxAPIItemTypeFolder;
extern BoxAPIItemType *const BoxAPIItemTypeWebLink;

// Collection keys
extern NSString *const BoxAPICollectionKeyEntries;
extern NSString *const BoxAPICollectionKeyTotalCount;

// API object keys
extern NSString *const BoxAPIObjectKeyID;
extern NSString *const BoxAPIObjectKeyName;
extern NSString *const BoxAPIObjectKeyType;
extern NSString *const BoxAPIObjectKeySequenceID;
extern NSString *const BoxAPIObjectKeyETag;
extern NSString *const BoxAPIObjectKeySHA1;
extern NSString *const BoxAPIObjectKeyName;
extern NSString *const BoxAPIObjectKeyCreatedAt;
extern NSString *const BoxAPIObjectKeyModifiedAt;
extern NSString *const BoxAPIObjectKeyContentCreatedAt;
extern NSString *const BoxAPIObjectKeyContentModifiedAt;
extern NSString *const BoxAPIObjectKeyTrashedAt;
extern NSString *const BoxAPIObjectKeyPurgedAt;
extern NSString *const BoxAPIObjectKeyDescription;
extern NSString *const BoxAPIObjectKeySize;
extern NSString *const BoxAPIObjectKeyPathCollection;
extern NSString *const BoxAPIObjectKeyCreatedBy;
extern NSString *const BoxAPIObjectKeyModifiedBy;
extern NSString *const BoxAPIObjectKeyOwnedBy;
extern NSString *const BoxAPIObjectKeySharedLink;
extern NSString *const BoxAPIObjectKeyFolderUploadEmail;
extern NSString *const BoxAPIObjectKeyParent;
extern NSString *const BoxAPIObjectKeyItemStatus;
extern NSString *const BoxAPIObjectKeyItemCollection;
extern NSString *const BoxAPIObjectKeySyncState;
extern NSString *const BoxAPIObjectKeyURL;

