/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_FeatureSet_H_
#define	_ASN_RRC_FeatureSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_RRC_FeatureSetEUTRA-DownlinkId.h"
#include "ASN_RRC_FeatureSetEUTRA-UplinkId.h"
#include <constr_SEQUENCE.h>
#include "ASN_RRC_FeatureSetDownlinkId.h"
#include "ASN_RRC_FeatureSetUplinkId.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_RRC_FeatureSet_PR {
	ASN_RRC_FeatureSet_PR_NOTHING,	/* No components present */
	ASN_RRC_FeatureSet_PR_eutra,
	ASN_RRC_FeatureSet_PR_nr
} ASN_RRC_FeatureSet_PR;

/* ASN_RRC_FeatureSet */
typedef struct ASN_RRC_FeatureSet {
	ASN_RRC_FeatureSet_PR present;
	union ASN_RRC_FeatureSet_u {
		struct ASN_RRC_FeatureSet__eutra {
			ASN_RRC_FeatureSetEUTRA_DownlinkId_t	 downlinkSetEUTRA;
			ASN_RRC_FeatureSetEUTRA_UplinkId_t	 uplinkSetEUTRA;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *eutra;
		struct ASN_RRC_FeatureSet__nr {
			ASN_RRC_FeatureSetDownlinkId_t	 downlinkSetNR;
			ASN_RRC_FeatureSetUplinkId_t	 uplinkSetNR;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *nr;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_FeatureSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_FeatureSet;
extern asn_CHOICE_specifics_t asn_SPC_ASN_RRC_FeatureSet_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_FeatureSet_1[2];
extern asn_per_constraints_t asn_PER_type_ASN_RRC_FeatureSet_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_FeatureSet_H_ */
#include <asn_internal.h>
