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

######
#
Home:: ; $(CPF) $(SOURCE)/Home.html .
Downloads:: ; $(CPF) $(SOURCE)/Downloads.html .
Documents:: ; $(CPF) $(SOURCE)/Documents.html .
Libraries:: ; $(CPF) $(SOURCE)/Libraries.html .
Community:: ; $(CPF) $(SOURCE)/Community.html .
Papers:: ; $(CPF) $(SOURCE)/Papers.html .
Examples:: ; $(CPF) $(SOURCE)/Examples.html .
#
######

all:: CLIENT_mycode
all:: SERVER_mycode
all:: SERVER_mycode_mydata

######

CLIENT_mycode:: ; \
$(CPF) $(SOURCE)/CLIENT/mycode/*.js ./CLIENT/mycode/.
SERVER_mycode:: ; \
$(CPF) $(SOURCE)/SERVER/mycode/*.php ./SERVER/mycode/.
SERVER_mycode_mydata:: ; \
$(CPF) $(SOURCE)/SERVER/mycode/mydata/* ./SERVER/mycode/mydata/.

######

###### end of [Makefile] ######
