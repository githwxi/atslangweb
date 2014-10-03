#
# Makefile for atslangweb
#

###### beg of [Makefile] ######

SOURCE=${PATSHOME}/doc/PROJECT/MEDIUM/ats2langweb

######

CPF=cp -f
RMF=rm -f

######

all:: ; make -C ${SOURCE}

######

all:: Home
all:: Downloads
all:: Documents
all:: Libraries
all:: Community
all:: Papers
all:: Examples
all:: Patsoptaas

######
#
Home:: ; $(CPF) $(SOURCE)/Home.html .
Downloads:: ; $(CPF) $(SOURCE)/Downloads.html .
Documents:: ; $(CPF) $(SOURCE)/Documents.html .
Libraries:: ; $(CPF) $(SOURCE)/Libraries.html .
Community:: ; $(CPF) $(SOURCE)/Community.html .
Papers:: ; $(CPF) $(SOURCE)/Papers.html .
Examples:: ; $(CPF) $(SOURCE)/Examples.html .
Patsoptaas:: ; $(CPF) $(SOURCE)/Patsoptaas.html .
#
######

all:: CLIENT_mycode
all:: SERVER_mycode

######

CLIENT_mycode:: ; $(CPF) $(SOURCE)/CLIENT/mycode/*.js ./CLIENT/mycode/.
SERVER_mycode:: ; $(CPF) $(SOURCE)/SERVER/mycode/*.php ./SERVER/mycode/.

######

###### end of [Makefile] ######
