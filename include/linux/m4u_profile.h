#if !defined(__M4U_PROFILE_H__)
#define __M4U_PROFILE_H__
#include <linux/mmprofile.h>

typedef enum {
	PROFILE_ALLOC_MVA = 0,
	PROFILE_ALLOC_MVA_REGION,
	PROFILE_GET_PAGES,
	PROFILE_FOLLOW_PAGE,
	PROFILE_FORCE_PAGING,
	PROFILE_MLOCK,
	PROFILE_ALLOC_FLUSH_TLB,
	PROFILE_QUERY,
	PROFILE_DEALLOC_MVA,
	PROFILE_RELEASE_PAGES,
	PROFILE_PUT_PAGE,
	PROFILE_MUNLOCK,
	PROFILE_RELEASE_MVA_REGION,
	PROFILE_INSERT_TLB,
	PROFILE_DMA_MAINT_ALL,
	PROFILE_DMA_CLEAN_RANGE,
	PROFILE_DMA_FLUSH_RANGE,
	PROFILE_DMA_INVALID_RANGE,
	PROFILE_DMA_CLEAN_ALL,
	PROFILE_DMA_FLUSH_ALL,
	PROFILE_DMA_INVALID_ALL,
	PROFILE_CACHE_FLUSH_ALL,
	PROFILE_CONFIG_PORT,
	PROFILE_MAIN_TLB_MON,
	PROFILE_PREF_TLB_MON,
	PROFILE_M4U_REG,
	PROFILE_M4U_ERROR,
	PROFILE_MAX,
} PROFILE_TYPE;

extern MMP_Event M4U_MMP_Events[PROFILE_MAX];

#endif				/* __M4U_PROFILE_H__ */
