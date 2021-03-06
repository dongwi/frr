/*
 * Copyright (C) 2019  Cumulus Networks, Inc.
 * Chirag Shah
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; see the file COPYING; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <zebra.h>

#include "lib/log.h"
#include "lib/northbound.h"
#include "libfrr.h"
#include "lib/command.h"
#include "lib/routemap.h"
#include "zebra/zebra_nb.h"
#include "zebra/rib.h"
#include "zebra_nb.h"
#include "zebra/interface.h"
#include "zebra/connected.h"

/*
 * XPath: /frr-zebra:zebra/mcast-rpf-lookup
 */
int zebra_mcast_rpf_lookup_modify(enum nb_event event,
				  const struct lyd_node *dnode,
				  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/ip-forwarding
 */
int zebra_ip_forwarding_modify(enum nb_event event,
			       const struct lyd_node *dnode,
			       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_ip_forwarding_destroy(enum nb_event event,
				const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/ipv6-forwarding
 */
int zebra_ipv6_forwarding_modify(enum nb_event event,
				 const struct lyd_node *dnode,
				 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_ipv6_forwarding_destroy(enum nb_event event,
				  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/workqueue-hold-timer
 */
int zebra_workqueue_hold_timer_modify(enum nb_event event,
				      const struct lyd_node *dnode,
				      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/zapi-packets
 */
int zebra_zapi_packets_modify(enum nb_event event, const struct lyd_node *dnode,
			      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/import-kernel-table/table-id
 */
int zebra_import_kernel_table_table_id_modify(enum nb_event event,
					      const struct lyd_node *dnode,
					      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_import_kernel_table_table_id_destroy(enum nb_event event,
					       const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/import-kernel-table/distance
 */
int zebra_import_kernel_table_distance_modify(enum nb_event event,
					      const struct lyd_node *dnode,
					      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/import-kernel-table/route-map
 */
int zebra_import_kernel_table_route_map_modify(enum nb_event event,
					       const struct lyd_node *dnode,
					       union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_import_kernel_table_route_map_destroy(enum nb_event event,
						const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/allow-external-route-update
 */
int zebra_allow_external_route_update_create(enum nb_event event,
					     const struct lyd_node *dnode,
					     union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_allow_external_route_update_destroy(enum nb_event event,
					      const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/dplane-queue-limit
 */
int zebra_dplane_queue_limit_modify(enum nb_event event,
				    const struct lyd_node *dnode,
				    union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping
 */
int zebra_vrf_vni_mapping_create(enum nb_event event,
				 const struct lyd_node *dnode,
				 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_vrf_vni_mapping_destroy(enum nb_event event,
				  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping/vni-id
 */
int zebra_vrf_vni_mapping_vni_id_modify(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_vrf_vni_mapping_vni_id_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/vrf-vni-mapping/prefix-only
 */
int zebra_vrf_vni_mapping_prefix_only_create(enum nb_event event,
					     const struct lyd_node *dnode,
					     union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_vrf_vni_mapping_prefix_only_destroy(enum nb_event event,
					      const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-events
 */
int zebra_debugs_debug_events_modify(enum nb_event event,
				     const struct lyd_node *dnode,
				     union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_events_destroy(enum nb_event event,
				      const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-zapi-send
 */
int zebra_debugs_debug_zapi_send_modify(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_zapi_send_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-zapi-recv
 */
int zebra_debugs_debug_zapi_recv_modify(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_zapi_recv_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-zapi-detail
 */
int zebra_debugs_debug_zapi_detail_modify(enum nb_event event,
					  const struct lyd_node *dnode,
					  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_zapi_detail_destroy(enum nb_event event,
					   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-kernel
 */
int zebra_debugs_debug_kernel_modify(enum nb_event event,
				     const struct lyd_node *dnode,
				     union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_kernel_destroy(enum nb_event event,
				      const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-kernel-msg-send
 */
int zebra_debugs_debug_kernel_msg_send_modify(enum nb_event event,
					      const struct lyd_node *dnode,
					      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_kernel_msg_send_destroy(enum nb_event event,
					       const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-kernel-msg-recv
 */
int zebra_debugs_debug_kernel_msg_recv_modify(enum nb_event event,
					      const struct lyd_node *dnode,
					      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_kernel_msg_recv_destroy(enum nb_event event,
					       const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-rib
 */
int zebra_debugs_debug_rib_modify(enum nb_event event,
				  const struct lyd_node *dnode,
				  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_rib_destroy(enum nb_event event,
				   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-rib-detail
 */
int zebra_debugs_debug_rib_detail_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_rib_detail_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-fpm
 */
int zebra_debugs_debug_fpm_modify(enum nb_event event,
				  const struct lyd_node *dnode,
				  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_fpm_destroy(enum nb_event event,
				   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-nht
 */
int zebra_debugs_debug_nht_modify(enum nb_event event,
				  const struct lyd_node *dnode,
				  union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_nht_destroy(enum nb_event event,
				   const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-nht-detail
 */
int zebra_debugs_debug_nht_detail_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_nht_detail_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-mpls
 */
int zebra_debugs_debug_mpls_modify(enum nb_event event,
				   const struct lyd_node *dnode,
				   union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_mpls_destroy(enum nb_event event,
				    const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-vxlan
 */
int zebra_debugs_debug_vxlan_modify(enum nb_event event,
				    const struct lyd_node *dnode,
				    union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_vxlan_destroy(enum nb_event event,
				     const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-pw
 */
int zebra_debugs_debug_pw_modify(enum nb_event event,
				 const struct lyd_node *dnode,
				 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_pw_destroy(enum nb_event event,
				  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-dplane
 */
int zebra_debugs_debug_dplane_modify(enum nb_event event,
				     const struct lyd_node *dnode,
				     union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_dplane_destroy(enum nb_event event,
				      const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-dplane-detail
 */
int zebra_debugs_debug_dplane_detail_modify(enum nb_event event,
					    const struct lyd_node *dnode,
					    union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_dplane_detail_destroy(enum nb_event event,
					     const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-zebra:zebra/debugs/debug-mlag
 */
int zebra_debugs_debug_mlag_modify(enum nb_event event,
				   const struct lyd_node *dnode,
				   union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int zebra_debugs_debug_mlag_destroy(enum nb_event event,
				    const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip-addrs
 */
int lib_interface_zebra_ip_addrs_create(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	struct interface *ifp;
	struct prefix prefix;
	char buf[PREFIX_STRLEN] = {0};

	ifp = nb_running_get_entry(dnode, NULL, true);
	// addr_family = yang_dnode_get_enum(dnode, "./address-family");
	yang_dnode_get_prefix(&prefix, dnode, "./ip-prefix");
	apply_mask(&prefix);

	switch (event) {
	case NB_EV_VALIDATE:
		if (prefix.family == AF_INET
		    && ipv4_martian(&prefix.u.prefix4)) {
			zlog_debug("invalid address %s",
				   prefix2str(&prefix, buf, sizeof(buf)));
			return NB_ERR_VALIDATION;
		} else if (prefix.family == AF_INET6
			   && ipv6_martian(&prefix.u.prefix6)) {
			zlog_debug("invalid address %s",
				   prefix2str(&prefix, buf, sizeof(buf)));
			return NB_ERR_VALIDATION;
		}
		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
		break;
	case NB_EV_APPLY:
		if (prefix.family == AF_INET)
			if_ip_address_install(ifp, &prefix, NULL, NULL);
		else if (prefix.family == AF_INET6)
			if_ipv6_address_install(ifp, &prefix, NULL);

		break;
	}

	return NB_OK;
}

int lib_interface_zebra_ip_addrs_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	struct interface *ifp;
	struct prefix prefix;
	struct connected *ifc;

	ifp = nb_running_get_entry(dnode, NULL, true);
	yang_dnode_get_prefix(&prefix, dnode, "./ip-prefix");
	apply_mask(&prefix);

	switch (event) {
	case NB_EV_VALIDATE:
		if (prefix.family == AF_INET) {
			/* Check current interface address. */
			ifc = connected_check_ptp(ifp, &prefix, NULL);
			if (!ifc) {
				zlog_debug("interface %s Can't find address\n",
					   ifp->name);
				return NB_ERR_VALIDATION;
			}
		} else if (prefix.family == AF_INET6) {
			/* Check current interface address. */
			ifc = connected_check(ifp, &prefix);
			if (!ifc) {
				zlog_debug("interface can't find address %s",
					   ifp->name);
				return NB_ERR_VALIDATION;
			}
		} else
			return NB_ERR_VALIDATION;

		/* This is not configured address. */
		if (!CHECK_FLAG(ifc->conf, ZEBRA_IFC_CONFIGURED)) {
			zlog_debug("interface %s not configured", ifp->name);
			return NB_ERR_VALIDATION;
		}

		/* This is not real address or interface is not active. */
		if (!CHECK_FLAG(ifc->conf, ZEBRA_IFC_QUEUED)
		    || !CHECK_FLAG(ifp->status, ZEBRA_INTERFACE_ACTIVE)) {
			listnode_delete(ifp->connected, ifc);
			connected_free(&ifc);
			return NB_ERR_VALIDATION;
		}
		break;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
		break;
	case NB_EV_APPLY:
		if_ip_address_uinstall(ifp, &prefix);
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip-addrs/label
 */
int lib_interface_zebra_ip_addrs_label_modify(enum nb_event event,
					      const struct lyd_node *dnode,
					      union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int lib_interface_zebra_ip_addrs_label_destroy(enum nb_event event,
					       const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/ip-addrs/ip4-peer
 */
int lib_interface_zebra_ip_addrs_ip4_peer_modify(enum nb_event event,
						 const struct lyd_node *dnode,
						 union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int lib_interface_zebra_ip_addrs_ip4_peer_destroy(enum nb_event event,
						  const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/multicast
 */
int lib_interface_zebra_multicast_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	if (event != NB_EV_APPLY)
		return NB_OK;

	struct interface *ifp;

	ifp = nb_running_get_entry(dnode, NULL, true);

	if_multicast_set(ifp);

	return NB_OK;
}

int lib_interface_zebra_multicast_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	if (event != NB_EV_APPLY)
		return NB_OK;

	struct interface *ifp;

	ifp = nb_running_get_entry(dnode, NULL, true);

	if_multicast_unset(ifp);

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/link-detect
 */
int lib_interface_zebra_link_detect_modify(enum nb_event event,
					   const struct lyd_node *dnode,
					   union nb_resource *resource)
{
	if (event != NB_EV_APPLY)
		return NB_OK;

	struct interface *ifp;
	bool link_detect;

	ifp = nb_running_get_entry(dnode, NULL, true);
	link_detect = yang_dnode_get_bool(dnode, "./link-detect");

	if_linkdetect(ifp, link_detect);

	return NB_OK;
}

int lib_interface_zebra_link_detect_destroy(enum nb_event event,
					    const struct lyd_node *dnode)
{
	if (event != NB_EV_APPLY)
		return NB_OK;

	struct interface *ifp;
	bool link_detect;

	ifp = nb_running_get_entry(dnode, NULL, true);
	link_detect = yang_dnode_get_bool(dnode, "./link-detect");

	if_linkdetect(ifp, link_detect);

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/shutdown
 */
int lib_interface_zebra_shutdown_modify(enum nb_event event,
					const struct lyd_node *dnode,
					union nb_resource *resource)
{
	struct interface *ifp;

	ifp = nb_running_get_entry(dnode, NULL, true);

	if_shutdown(ifp);

	return NB_OK;
}

int lib_interface_zebra_shutdown_destroy(enum nb_event event,
					 const struct lyd_node *dnode)
{
	struct interface *ifp;

	ifp = nb_running_get_entry(dnode, NULL, true);

	if_no_shutdown(ifp);

	return NB_OK;
}

/*
 * XPath: /frr-interface:lib/interface/frr-zebra:zebra/bandwidth
 */
int lib_interface_zebra_bandwidth_modify(enum nb_event event,
					 const struct lyd_node *dnode,
					 union nb_resource *resource)
{
	if (event != NB_EV_APPLY)
		return NB_OK;

	struct interface *ifp;
	uint32_t bandwidth;

	ifp = nb_running_get_entry(dnode, NULL, true);
	bandwidth = yang_dnode_get_uint32(dnode, "./bandwidth");

	ifp->bandwidth = bandwidth;

	/* force protocols to recalculate routes due to cost change */
	if (if_is_operative(ifp))
		zebra_interface_up_update(ifp);

	return NB_OK;
}

int lib_interface_zebra_bandwidth_destroy(enum nb_event event,
					  const struct lyd_node *dnode)
{
	if (event != NB_EV_APPLY)
		return NB_OK;

	struct interface *ifp;

	ifp = nb_running_get_entry(dnode, NULL, true);

	ifp->bandwidth = 0;

	/* force protocols to recalculate routes due to cost change */
	if (if_is_operative(ifp))
		zebra_interface_up_update(ifp);

	return NB_OK;
}

/*
 * XPath: /frr-vrf:lib/vrf/frr-zebra:ribs/rib
 */
int lib_vrf_ribs_rib_create(enum nb_event event, const struct lyd_node *dnode,
			    union nb_resource *resource)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}

int lib_vrf_ribs_rib_destroy(enum nb_event event, const struct lyd_node *dnode)
{
	switch (event) {
	case NB_EV_VALIDATE:
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
	case NB_EV_APPLY:
		/* TODO: implement me. */
		break;
	}

	return NB_OK;
}


/*
 * XPath:
 * /frr-route-map:lib/route-map/entry/match-condition/frr-zebra:ipv4-prefix-length
 */
int lib_route_map_entry_match_condition_ipv4_prefix_length_modify(
	enum nb_event event, const struct lyd_node *dnode,
	union nb_resource *resource)
{
	struct routemap_hook_context *rhc;
	const char *length;
	int condition, rv;

	if (event != NB_EV_APPLY)
		return NB_OK;

	/* Add configuration. */
	rhc = nb_running_get_entry(dnode, NULL, true);
	length = yang_dnode_get_string(dnode, NULL);
	condition = yang_dnode_get_enum(dnode, "../frr-route-map:condition");

	/* Set destroy information. */
	switch (condition) {
	case 100: /* ipv4-prefix-length */
		rhc->rhc_rule = "ip address prefix-len";
		break;

	case 102: /* ipv4-next-hop-prefix-length */
		rhc->rhc_rule = "ip next-hop prefix-len";
		break;
	}
	rhc->rhc_mhook = generic_match_delete;
	rhc->rhc_event = RMAP_EVENT_MATCH_DELETED;

	rv = generic_match_add(NULL, rhc->rhc_rmi, rhc->rhc_rule, length,
			       RMAP_EVENT_MATCH_ADDED);
	if (rv != CMD_SUCCESS) {
		rhc->rhc_mhook = NULL;
		return NB_ERR_INCONSISTENCY;
	}

	return NB_OK;
}

int lib_route_map_entry_match_condition_ipv4_prefix_length_destroy(
	enum nb_event event, const struct lyd_node *dnode)
{
	return lib_route_map_entry_match_destroy(event, dnode);
}

/*
 * XPath:
 * /frr-route-map:lib/route-map/entry/match-condition/frr-zebra:ipv6-prefix-length
 */
int lib_route_map_entry_match_condition_ipv6_prefix_length_modify(
	enum nb_event event, const struct lyd_node *dnode,
	union nb_resource *resource)
{
	struct routemap_hook_context *rhc;
	const char *length;
	int rv;

	if (event != NB_EV_APPLY)
		return NB_OK;

	/* Add configuration. */
	rhc = nb_running_get_entry(dnode, NULL, true);
	length = yang_dnode_get_string(dnode, NULL);

	/* Set destroy information. */
	rhc->rhc_mhook = generic_match_delete;
	rhc->rhc_rule = "ipv6 address prefix-len";
	rhc->rhc_event = RMAP_EVENT_MATCH_DELETED;

	rv = generic_match_add(NULL, rhc->rhc_rmi, "ipv6 address prefix-len",
			       length, RMAP_EVENT_MATCH_ADDED);
	if (rv != CMD_SUCCESS) {
		rhc->rhc_mhook = NULL;
		return NB_ERR_INCONSISTENCY;
	}

	return NB_OK;
}

int lib_route_map_entry_match_condition_ipv6_prefix_length_destroy(
	enum nb_event event, const struct lyd_node *dnode)
{
	return lib_route_map_entry_match_destroy(event, dnode);
}

/*
 * XPath:
 * /frr-route-map:lib/route-map/entry/match-condition/frr-zebra:source-protocol
 */
int lib_route_map_entry_match_condition_source_protocol_modify(
	enum nb_event event, const struct lyd_node *dnode,
	union nb_resource *resource)
{
	struct routemap_hook_context *rhc;
	const char *type;
	int rv;

	switch (event) {
	case NB_EV_VALIDATE:
		type = yang_dnode_get_string(dnode, NULL);
		if (proto_name2num(type) == -1) {
			zlog_warn("%s: invalid protocol: %s", __func__, type);
			return NB_ERR_VALIDATION;
		}
		return NB_OK;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
		return NB_OK;
	case NB_EV_APPLY:
		/* NOTHING */
		break;
	}

	/* Add configuration. */
	rhc = nb_running_get_entry(dnode, NULL, true);
	type = yang_dnode_get_string(dnode, NULL);

	/* Set destroy information. */
	rhc->rhc_mhook = generic_match_delete;
	rhc->rhc_rule = "source-protocol";
	rhc->rhc_event = RMAP_EVENT_MATCH_DELETED;

	rv = generic_match_add(NULL, rhc->rhc_rmi, "source-protocol", type,
			       RMAP_EVENT_MATCH_ADDED);
	if (rv != CMD_SUCCESS) {
		rhc->rhc_mhook = NULL;
		return NB_ERR_INCONSISTENCY;
	}

	return NB_OK;
}

int lib_route_map_entry_match_condition_source_protocol_destroy(
	enum nb_event event, const struct lyd_node *dnode)
{
	return lib_route_map_entry_match_destroy(event, dnode);
}

/*
 * XPath:
 * /frr-route-map:lib/route-map/entry/match-condition/frr-zebra:source-instance
 */
int lib_route_map_entry_match_condition_source_instance_modify(
	enum nb_event event, const struct lyd_node *dnode,
	union nb_resource *resource)
{
	struct routemap_hook_context *rhc;
	const char *type;
	int rv;

	if (event != NB_EV_APPLY)
		return NB_OK;

	/* Add configuration. */
	rhc = nb_running_get_entry(dnode, NULL, true);
	type = yang_dnode_get_string(dnode, NULL);

	/* Set destroy information. */
	rhc->rhc_mhook = generic_match_delete;
	rhc->rhc_rule = "source-instance";
	rhc->rhc_event = RMAP_EVENT_MATCH_DELETED;

	rv = generic_match_add(NULL, rhc->rhc_rmi, "source-instance", type,
			       RMAP_EVENT_MATCH_ADDED);
	if (rv != CMD_SUCCESS) {
		rhc->rhc_mhook = NULL;
		return NB_ERR_INCONSISTENCY;
	}

	return NB_OK;
}

int lib_route_map_entry_match_condition_source_instance_destroy(
	enum nb_event event, const struct lyd_node *dnode)
{
	return lib_route_map_entry_match_destroy(event, dnode);
}

/*
 * XPath: /frr-route-map:lib/route-map/entry/set-action/frr-zebra:source-v4
 */
int lib_route_map_entry_set_action_source_v4_modify(
	enum nb_event event, const struct lyd_node *dnode,
	union nb_resource *resource)
{
	struct routemap_hook_context *rhc;
	struct interface *pif = NULL;
	const char *source;
	struct vrf *vrf;
	struct prefix p;
	int rv;

	switch (event) {
	case NB_EV_VALIDATE:
		memset(&p, 0, sizeof(p));
		yang_dnode_get_ipv4p(&p, dnode, NULL);
		if (zebra_check_addr(&p) == 0) {
			zlog_warn("%s: invalid IPv4 address: %s", __func__,
				  yang_dnode_get_string(dnode, NULL));
			return NB_ERR_VALIDATION;
		}

		RB_FOREACH (vrf, vrf_id_head, &vrfs_by_id) {
			pif = if_lookup_exact_address(&p.u.prefix4, AF_INET,
						      vrf->vrf_id);
			if (pif != NULL)
				break;
		}
		if (pif == NULL) {
			zlog_warn("%s: is not a local adddress: %s", __func__,
				  yang_dnode_get_string(dnode, NULL));
			return NB_ERR_VALIDATION;
		}
		return NB_OK;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
		return NB_OK;
	case NB_EV_APPLY:
		/* NOTHING */
		break;
	}

	/* Add configuration. */
	rhc = nb_running_get_entry(dnode, NULL, true);
	source = yang_dnode_get_string(dnode, NULL);

	/* Set destroy information. */
	rhc->rhc_shook = generic_set_delete;
	rhc->rhc_rule = "src";

	rv = generic_set_add(NULL, rhc->rhc_rmi, "src", source);
	if (rv != CMD_SUCCESS) {
		rhc->rhc_shook = NULL;
		return NB_ERR_INCONSISTENCY;
	}

	return NB_OK;
}

int lib_route_map_entry_set_action_source_v4_destroy(
	enum nb_event event, const struct lyd_node *dnode)
{
	return lib_route_map_entry_set_destroy(event, dnode);
}

/*
 * XPath: /frr-route-map:lib/route-map/entry/set-action/frr-zebra:source-v6
 */
int lib_route_map_entry_set_action_source_v6_modify(
	enum nb_event event, const struct lyd_node *dnode,
	union nb_resource *resource)
{
	struct routemap_hook_context *rhc;
	struct interface *pif = NULL;
	const char *source;
	struct vrf *vrf;
	struct prefix p;
	int rv;

	switch (event) {
	case NB_EV_VALIDATE:
		memset(&p, 0, sizeof(p));
		yang_dnode_get_ipv6p(&p, dnode, NULL);
		if (zebra_check_addr(&p) == 0) {
			zlog_warn("%s: invalid IPv6 address: %s", __func__,
				  yang_dnode_get_string(dnode, NULL));
			return NB_ERR_VALIDATION;
		}

		RB_FOREACH (vrf, vrf_id_head, &vrfs_by_id) {
			pif = if_lookup_exact_address(&p.u.prefix6, AF_INET6,
						      vrf->vrf_id);
			if (pif != NULL)
				break;
		}
		if (pif == NULL) {
			zlog_warn("%s: is not a local adddress: %s", __func__,
				  yang_dnode_get_string(dnode, NULL));
			return NB_ERR_VALIDATION;
		}
		return NB_OK;
	case NB_EV_PREPARE:
	case NB_EV_ABORT:
		return NB_OK;
	case NB_EV_APPLY:
		/* NOTHING */
		break;
	}

	/* Add configuration. */
	rhc = nb_running_get_entry(dnode, NULL, true);
	source = yang_dnode_get_string(dnode, NULL);

	/* Set destroy information. */
	rhc->rhc_shook = generic_set_delete;
	rhc->rhc_rule = "src";

	rv = generic_set_add(NULL, rhc->rhc_rmi, "src", source);
	if (rv != CMD_SUCCESS) {
		rhc->rhc_shook = NULL;
		return NB_ERR_INCONSISTENCY;
	}

	return NB_OK;
}

int lib_route_map_entry_set_action_source_v6_destroy(
	enum nb_event event, const struct lyd_node *dnode)
{
	return lib_route_map_entry_set_destroy(event, dnode);
}
