/*
 * Copyright (c) 2011-2015 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin-server.
 *
 * libbitcoin-server is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_SERVER_PROTOCOL_HPP
#define LIBBITCOIN_SERVER_PROTOCOL_HPP

#include "util.hpp"

namespace libbitcoin {
namespace server {

class node_impl;

void protocol_broadcast_transaction(node_impl& node,
    const incoming_message& request, queue_send_callback queue_send);

void protocol_total_connections(node_impl& node,
    const incoming_message& request, queue_send_callback queue_send);

} // namespace server
} // namespace libbitcoin

#endif

