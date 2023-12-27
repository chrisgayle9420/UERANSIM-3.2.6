/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/ngap-15.8.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_BroadcastCancelledAreaList_H_
#define	_ASN_NGAP_BroadcastCancelledAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_BroadcastCancelledAreaList_PR {
	ASN_NGAP_BroadcastCancelledAreaList_PR_NOTHING,	/* No components present */
	ASN_NGAP_BroadcastCancelledAreaList_PR_cellIDCancelledEUTRA,
	ASN_NGAP_BroadcastCancelledAreaList_PR_tAICancelledEUTRA,
	ASN_NGAP_BroadcastCancelledAreaList_PR_emergencyAreaIDCancelledEUTRA,
	ASN_NGAP_BroadcastCancelledAreaList_PR_cellIDCancelledNR,
	ASN_NGAP_BroadcastCancelledAreaList_PR_tAICancelledNR,
	ASN_NGAP_BroadcastCancelledAreaList_PR_emergencyAreaIDCancelledNR,
	ASN_NGAP_BroadcastCancelledAreaList_PR_choice_Extensions
} ASN_NGAP_BroadcastCancelledAreaList_PR;

/* Forward declarations */
struct ASN_NGAP_CellIDCancelledEUTRA;
struct ASN_NGAP_TAICancelledEUTRA;
struct ASN_NGAP_EmergencyAreaIDCancelledEUTRA;
struct ASN_NGAP_CellIDCancelledNR;
struct ASN_NGAP_TAICancelledNR;
struct ASN_NGAP_EmergencyAreaIDCancelledNR;
struct ASN_NGAP_ProtocolIE_SingleContainer;

/* ASN_NGAP_BroadcastCancelledAreaList */
typedef struct ASN_NGAP_BroadcastCancelledAreaList {
	ASN_NGAP_BroadcastCancelledAreaList_PR present;
	union ASN_NGAP_BroadcastCancelledAreaList_u {
		struct ASN_NGAP_CellIDCancelledEUTRA	*cellIDCancelledEUTRA;
		struct ASN_NGAP_TAICancelledEUTRA	*tAICancelledEUTRA;
		struct ASN_NGAP_EmergencyAreaIDCancelledEUTRA	*emergencyAreaIDCancelledEUTRA;
		struct ASN_NGAP_CellIDCancelledNR	*cellIDCancelledNR;
		struct ASN_NGAP_TAICancelledNR	*tAICancelledNR;
		struct ASN_NGAP_EmergencyAreaIDCancelledNR	*emergencyAreaIDCancelledNR;
		struct ASN_NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_BroadcastCancelledAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_BroadcastCancelledAreaList;
extern asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_BroadcastCancelledAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_BroadcastCancelledAreaList_1[7];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_BroadcastCancelledAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_BroadcastCancelledAreaList_H_ */
#include <asn_internal.h>
