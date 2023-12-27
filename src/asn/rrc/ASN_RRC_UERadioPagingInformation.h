/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_UERadioPagingInformation_H_
#define	_ASN_RRC_UERadioPagingInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_UERadioPagingInformation__criticalExtensions_PR {
	ASN_RRC_UERadioPagingInformation__criticalExtensions_PR_NOTHING,	/* No components present */
	ASN_RRC_UERadioPagingInformation__criticalExtensions_PR_c1,
	ASN_RRC_UERadioPagingInformation__criticalExtensions_PR_criticalExtensionsFuture
} ASN_RRC_UERadioPagingInformation__criticalExtensions_PR;
typedef enum ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR {
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_ueRadioPagingInformation,
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_spare7,
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_spare6,
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_spare5,
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_spare4,
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_spare3,
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_spare2,
	ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR_spare1
} ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR;

/* Forward declarations */
struct ASN_RRC_UERadioPagingInformation_IEs;

/* ASN_RRC_UERadioPagingInformation */
typedef struct ASN_RRC_UERadioPagingInformation {
	struct ASN_RRC_UERadioPagingInformation__criticalExtensions {
		ASN_RRC_UERadioPagingInformation__criticalExtensions_PR present;
		union ASN_RRC_UERadioPagingInformation__ASN_RRC_criticalExtensions_u {
			struct ASN_RRC_UERadioPagingInformation__criticalExtensions__c1 {
				ASN_RRC_UERadioPagingInformation__criticalExtensions__c1_PR present;
				union ASN_RRC_UERadioPagingInformation__ASN_RRC_criticalExtensions__ASN_RRC_c1_u {
					struct ASN_RRC_UERadioPagingInformation_IEs	*ueRadioPagingInformation;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct ASN_RRC_UERadioPagingInformation__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_UERadioPagingInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_UERadioPagingInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_UERadioPagingInformation_H_ */
#include <asn_internal.h>
