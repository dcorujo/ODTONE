//
// Copyright (c) 2007-2009 2009 Universidade Aveiro - Instituto de
// Telecomunicacoes Polo Aveiro
// This file is part of ODTONE - Open Dot Twenty One.
//
// This software is distributed under a license. The full license
// agreement can be found in the file LICENSE in this distribution.
// This software may not be copied, modified, sold or distributed
// other than expressed in the named license agreement.
//
// This software is distributed without any warranty.
//
// Author:     Simao Reis <sreis@av.it.pt>
//

#ifndef ODTONE_MIHF_NET_SAP__HPP
#define ODTONE_MIHF_NET_SAP__HPP

///////////////////////////////////////////////////////////////////////////////
#include "address_book.hpp"
#include "meta_message.hpp"

#include <odtone/base.hpp>
#include <odtone/debug.hpp>
#include <odtone/mih/types/capabilities.hpp>

#include <boost/asio.hpp>

using namespace boost::asio;
///////////////////////////////////////////////////////////////////////////////

namespace odtone { namespace mihf {

class net_sap
{
public:
	net_sap(io_service &io, address_book &abook);

	void send(meta_message_ptr &msg);
private:
	io_service &_io;
	address_book &_abook;
};

} /* namespace mihf */ } /* namespace odtone */

#endif
