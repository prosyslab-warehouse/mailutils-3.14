# -*- rpm-spec -*-

%{!?python_sitelib: %global python_sitelib %(%{__python} -c "from distutils.sysconfig import get_python_lib; print get_python_lib()")}

Summary: GNU Mailutils
Name: mailutils
Version: 3.14
Release: 1%{?dist}
License: GPLv3+ and LGPLv3+
Source: ftp://ftp.gnu.org/gnu/%{name}/%{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)
URL: http://www.gnu.org/software/%{name}/
Group: System Environment/Libraries
Requires: libmailutils = %{version}-%{release}
Requires: gnutls >= 1.0.18
Requires: libgsasl >= 0.2.3
Requires: gdbm
Requires: mysql-libs
Requires: readline
BuildRequires: gettext
BuildRequires: gnutls-devel >= 1.0.18
BuildRequires: libgsasl-devel >= 0.2.3
BuildRequires: guile-devel >= 1.8
BuildRequires: gdbm-devel
BuildRequires: mysql-devel
BuildRequires: readline-devel
BuildRequires: emacs
BuildRequires: python

%description
GNU Mailutils is a rich and powerful protocol-independent mail
framework.  It contains a series of useful mail libraries, clients,
and servers.  These are the primary mail utilities for the GNU system.
The central library is capable of handling electronic mail in various
mailbox formats and protocols, both local and remote.  Specifically,
this project contains a POP3 server, an IMAP4 server, and a Sieve mail
filter. It also provides a POSIX 'mailx' client, and a collection of
other handy tools.

%package -n libmailutils
Summary: GNU Mailutils: mailbox access library.
License: LGPLv3+
Group: System Environment/Libraries

%package devel
Summary: GNU Mailutils: mailbox access library development.
License: LGPLv3+
Requires: libmailutils = %{version}-%{release}
Group: Development/Libraries

%package comsatd
Summary: GNU Mailutils: Comsat daemon.
License: GPLv3+
Requires: libmailutils = %{version}-%{release}
Group: Networking/Daemons

%package maidag
Summary: GNU Mailutils: General-purpose Mail Delivery Agent.
License: GPLv3+
Requires: libmailutils = %{version}-%{release}
Group: Networking/Daemons

%package pop3d
Summary: GNU Mailutils: POP3 daemon.
License: GPLv3+
Requires: libmailutils = %{version}-%{release}
Group: Networking/Daemons

%package imap4d
Summary: GNU Mailutils: IMAP4 daemon.
License: GPLv3+
Requires: libmailutils = %{version}-%{release}
Group: Networking/Daemons

%package guile
Summary: GNU Mailutils: Guile bindings.
License: GPLv3+
Requires: libmailutils = %{version}-%{release}
Requires: guile >= 1.8
Group: System Environment/Libraries

%package python
Summary: GNU Mailutils: Python bindings.
License: GPLv3+
Requires: libmailutils = %{version}-%{release}
Requires: python >= 2.5
Group: System Environment/Libraries

%package mh
Summary: GNU Mailutils: The Message Handling System.
License: GPLv3+
Requires: libmailutils = %{version}-%{release}
Group: Console/Mail


%description -n libmailutils
The runtime library libmailutils contains various mailbox access
routines and support for a number of mailbox types, such as mbox,
Maildir, MH, POP3, and IMAP4. It also supports MIME message
handling, and sending mail via SMTP and Sendmail.

%description devel
The static libraries and header files for GNU Mailutils.

%description comsatd
GNU Comsatd is the server which receives reports of incoming mail and
notifies users, wishing to get this service. It can be started either
from `inetd.conf' or as a standalone daemon.

%description maidag
The name `maidag' stands for Mail Delivery Agent. It is a
general-purpose MDA offering a rich set of features. It can operate
both in traditional mode, reading the message from its standard input,
and in LMTP mode. Maidag is able to deliver mail to any mailbox
format, supported by GNU Mailutils.

%description pop3d
The GNU POP3 daemon. Uses libmailutils to support different styles of
mailboxes.

%description imap4d
The GNU IMAP4 daemon. Uses libmailutils to support different styles of
mailboxes.

%description guile
This package contains Guile bindings for GNU Mailutils.

%description python
This package contains Python bindings for GNU Mailutils.

%description mh
The GNU MH (Message Handling System).


%prep
%setup -q

%build
CFLAGS="$RPM_OPT_FLAGS" ./configure --prefix=%{_prefix} \
			--with-guiledir=%{_datadir}/guile/site \
			--with-pythondir=%{python_sitelib} \
			--with-gsasl --with-gdbm --with-mysql
make

%check
make check

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install
rm -f $RPM_BUILD_ROOT%{_libdir}/*.la
%find_lang %{name}

%clean
rm -rf $RPM_BUILD_ROOT

%post -n libmailutils -p /sbin/ldconfig
/sbin/install-info %{_infodir}/mailutils.info.gz %{_infodir}/dir

%postun -n libmailutils -p /sbin/ldconfig

%preun -n libmailutils
/sbin/install-info --delete %{_infodir}/mailutils.info.gz %{_infodir}/dir

%files -f %{name}.lang
%defattr(-,root,root,-)
%doc AUTHORS COPYING* ChangeLog NEWS README* THANKS TODO
%{_bindir}/dotlock
%{_bindir}/frm
%{_bindir}/from
%{_bindir}/guimb
%{_bindir}/mail
%{_bindir}/messages
%{_bindir}/mimeview
%{_bindir}/movemail
%{_bindir}/readmsg
%{_bindir}/sieve
%{_libdir}/mailutils/list*
%{_libdir}/mailutils/moderator*
%{_libdir}/mailutils/numaddr*
%{_libdir}/mailutils/pipe*
%{_libdir}/mailutils/spamd*
%{_libdir}/mailutils/timestamp*
%{_libdir}/mailutils/vacation*
%{_mandir}/man1/mail*

%files -n libmailutils
%defattr(-,root,root,-)
%{_libdir}/libmailutils.so.*
%{_libdir}/libmu_*.so.*
%{_infodir}/*

%files devel
%defattr(-,root,root,-)
%{_bindir}/mailutils-config
%{_libdir}/libmailutils.a
%{_libdir}/libmailutils.so
%{_libdir}/libmu_*.a
%{_libdir}/libmu_*.so
%{_includedir}/mailutils/*.h
%{_includedir}/mailutils/cpp/*.h
%{_includedir}/mailutils/sys/*.h
%{_datadir}/aclocal/mailutils.m4

%files comsatd
%defattr(-,root,root,-)
%{_sbindir}/comsatd

%files maidag
%defattr(-,root,root,-)
%{_sbindir}/maidag

%files pop3d
%defattr(-,root,root,-)
%{_bindir}/popauth
%{_sbindir}/pop3d
%{_mandir}/man1/pop*

%files imap4d
%defattr(-,root,root,-)
%{_sbindir}/imap4d
%{_mandir}/man1/imap4d*

%files guile
%defattr(-,root,root,-)
%{_bindir}/sieve.scm
%{_libdir}/libguile-mailutils*.so
%{_datadir}/guile/site/mailutils/*.scm
%{_datadir}/guile/site/mailutils/*.txt
%{_datadir}/guile/site/sieve-modules/*.scm

%files python
%defattr(-,root,root,-)
%dir %{python_sitelib}/mailutils
%{python_sitelib}/mailutils/c_api.*
%{python_sitelib}/mailutils/*.py*

%files mh
%defattr(-,root,root,-)
%{_bindir}/mu-mh/ali
%{_bindir}/mu-mh/anno
%{_bindir}/mu-mh/burst
%{_bindir}/mu-mh/comp
%{_bindir}/mu-mh/fmtcheck
%{_bindir}/mu-mh/folder
%{_bindir}/mu-mh/folders
%{_bindir}/mu-mh/forw
%{_bindir}/mu-mh/inc
%{_bindir}/mu-mh/install-mh
%{_bindir}/mu-mh/mark
%{_bindir}/mu-mh/mhl
%{_bindir}/mu-mh/mhn
%{_bindir}/mu-mh/mhparam
%{_bindir}/mu-mh/mhpath
%{_bindir}/mu-mh/pick
%{_bindir}/mu-mh/refile
%{_bindir}/mu-mh/repl
%{_bindir}/mu-mh/rmf
%{_bindir}/mu-mh/rmm
%{_bindir}/mu-mh/scan
%{_bindir}/mu-mh/send
%{_bindir}/mu-mh/sortm
%{_bindir}/mu-mh/whatnow
%{_bindir}/mu-mh/whom
%{_datadir}/mailutils/mh/*
%{_datadir}/emacs/site-lisp/*
