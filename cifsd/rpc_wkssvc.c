/*
 *   Copyright (C) 2018 Samsung Electronics Co., Ltd.
 *
 *   linux-cifsd-devel@lists.sourceforge.net
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#include <memory.h>
#include <endian.h>
#include <glib.h>
#include <errno.h>
#include <linux/cifsd_server.h>

#include <management/share.h>

#include <rpc.h>
#include <rpc_wkssvc.h>
#include <cifsdtools.h>

int rpc_wkssvc_read_request(struct cifsd_rpc_pipe *pipe,
			    struct cifsd_rpc_command *resp,
			    int max_resp_sz)
{
	return CIFSD_RPC_ENOTIMPLEMENTED;
}

int rpc_wkssvc_write_request(struct cifsd_rpc_pipe *pipe)
{
	return CIFSD_RPC_ENOTIMPLEMENTED;
}
