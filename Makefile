#
# Makefile for atslangweb
#

###### beg of [Makefile] ######

SOURCE=${PATSHOME}/doc/PROJECT/MEDIUM/ats2langweb

######

CPF=cp -f
RMF=rm -f

######

all:: Home
all:: Downloads

######
#
Home:: ; $(CPF) $(SOURCE)/Home.php .
Downloads:: ; $(CPF) $(SOURCE)/Downloads.php .
Documents:: ; $(CPF) $(SOURCE)/Documents.php .
#
######

all:: thePageLeft
all:: thePageRHeaderTop
all:: thePageRHeaderSep
all:: thePageRBodyLHeader
all:: thePageRBodyLContent
all:: thePageRBodyRight
all:: CLIENT_mycode
all:: SERVER_mycode

######
#
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/main.php ./thePageLeft/.
#
thePageRHeaderTop:: ; \
$(CPF) $(SOURCE)/thePageRHeaderTop/main.php ./thePageRHeaderTop/.
#
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/main.php ./thePageRHeaderSep/.
#
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Home.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Downloads.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Documents.php ./thePageRBodyLHeader/.
#
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Home.php ./thePageRBodyLContent/.
#
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Home.php ./thePageRBodyRight/.
#
######

CLIENT_mycode:: ; $(CPF) $(SOURCE)/CLIENT/mycode/*.js ./CLIENT/mycode/.
SERVER_mycode:: ; $(CPF) $(SOURCE)/SERVER/mycode/*.php ./SERVER/mycode/.

######

###### end of [Makefile] ######