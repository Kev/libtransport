/**
 * XMPP - libpurple transport
 *
 * Copyright (C) 2009, Jan Kaluza <hanzz@soc.pidgin.im>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02111-1301  USA
 */

#include "discoitemsresponder.h"

#include <iostream>
#include <boost/bind.hpp>
#include "Swiften/Queries/IQRouter.h"
#include "Swiften/Elements/DiscoItems.h"
#include "Swiften/Swiften.h"

using namespace Swift;
using namespace boost;

namespace Transport {

DiscoItemsResponder::DiscoItemsResponder(Swift::IQRouter *router) : Swift::GetResponder<DiscoItems>(router) {
}

DiscoItemsResponder::~DiscoItemsResponder() {
	
}

bool DiscoItemsResponder::handleGetRequest(const Swift::JID& from, const Swift::JID& to, const std::string& id, boost::shared_ptr<Swift::DiscoItems> info) {
	// presence for transport
	if (to.getNode().empty()) {
		sendResponse(from, id, boost::shared_ptr<DiscoItems>(new DiscoItems()));
	}
	// presence for buddy
	else {
		sendResponse(from, id, boost::shared_ptr<DiscoItems>(new DiscoItems()));
	}
	return true;
}

}
