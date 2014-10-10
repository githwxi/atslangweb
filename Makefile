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

all:: MYDATA

######

MYDATA:: ; \
$(CPF) $(SOURCE)/MYDATA/Patsoptaas.html ./MYDATA/.

######

all:: CLIENT_MYCODE
all:: SERVER_MYCODE

######

CLIENT_MYCODE:: ; \
$(CPF) $(SOURCE)/CLIENT/MYCODE/*.js ./CLIENT/MYCODE/.
SERVER_MYCODE:: ; \
$(CPF) $(SOURCE)/SERVER/MYCODE/*.php ./SERVER/MYCODE/.

######

###### end of [Makefile] ######
