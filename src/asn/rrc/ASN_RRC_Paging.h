/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_ASN_RRC_Paging_H_
#define	_ASN_RRC_Paging_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_RRC_PagingRecordList;

/* ASN_RRC_Paging */
typedef struct ASN_RRC_Paging {
	struct ASN_RRC_PagingRecordList	*pagingRecordList;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct ASN_RRC_Paging__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_RRC_Paging_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_RRC_Paging;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_Paging_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_RRC_Paging_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_RRC_Paging_H_ */
#include <asn_internal.h>
