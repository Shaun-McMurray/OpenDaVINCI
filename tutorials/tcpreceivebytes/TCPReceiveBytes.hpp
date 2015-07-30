/**
 * OpenDaVINCI - Tutorial.
 * Copyright (C) 2015 Christian Berger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <core/io/ConnectionListener.h>
#include <core/io/StringListener.h>
#include <core/io/tcp/TCPAcceptorListener.h>
#include <core/io/tcp/TCPConnection.h>

// This class will handle newly accepted TCP connections.
class TCPReceiveBytes : 
    public core::io::ConnectionListener,
    public core::io::StringListener,
    public core::io::tcp::TCPAcceptorListener {

    // Your class needs to implement the method void nextString(const std::string &s).
    virtual void nextString(const std::string &s);

    // Your class needs to implement the method void onNewConnection(core::SharedPointer<core::io::tcp::TCPConnection> connection).
    virtual void onNewConnection(core::SharedPointer<core::io::tcp::TCPConnection> connection);

    // Your class should implement the method void handleConnectionError() to handle connection errors.
    virtual void handleConnectionError();
};

