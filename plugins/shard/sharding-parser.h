#ifndef __SHARDING_PARSER_H__
#define __SHARDING_PARSER_H__

#include "network-mysqld.h"
#include "sharding-query-plan.h"
#include "sql-context.h"

#define USE_NON_SHARDING_TABLE 0 /* default */
#define USE_SHARDING 1 /* default */
#define USE_DIS_TRAN 2
#define USE_ANY_SHARDINGS 3 /* default */
#define USE_ALL_SHARDINGS 4 /* default */
#define USE_ALL 5 /* default */
#define USE_SAME 6
#define USE_PREVIOUS_WARNING_CONN 7
#define USE_NONE 8
#define USE_PREVIOUS_TRAN_CONNS 9
#define ERROR_UNPARSABLE -1


NETWORK_API int sharding_parse_groups(GString *, sql_context_t *, query_stats_t *,
                                      unsigned int, sharding_plan_t *);

NETWORK_API GString *sharding_modify_sql(sql_context_t *, having_condition_t *);

NETWORK_API void sharding_filter_sql(sql_context_t *);

#endif //__SHARDING_PARSER_H__
