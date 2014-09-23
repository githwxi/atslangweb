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
all:: Documents

######
#
Home:: ; $(CPF) $(SOURCE)/Home.php .
Downloads:: ; $(CPF) $(SOURCE)/Downloads.php .
Documents:: ; $(CPF) $(SOURCE)/Documents.php .
#
######

all:: thePage
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
thePage:: ; \
$(CPF) $(SOURCE)/thePage/share.php ./thePage/.
#
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/Home.php ./thePageLeft/.
#
thePageRHeaderTop:: ; \
$(CPF) $(SOURCE)/thePageRHeaderTop/Home.php ./thePageRHeaderTop/.
#
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/share.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/share2.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Home.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Downloads.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Documents.php ./thePageRHeaderSep/.
#
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/share.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Home.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Downloads.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Documents.php ./thePageRBodyLHeader/.
#
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Home.php ./thePageRBodyLContent/.
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Downloads.php ./thePageRBodyLContent/.
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Documents.php ./thePageRBodyLContent/.
#
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Home.php ./thePageRBodyRight/.
#
######

CLIENT_mycode:: ; $(CPF) $(SOURCE)/CLIENT/mycode/*.js ./CLIENT/mycode/.
SERVER_mycode:: ; $(CPF) $(SOURCE)/SERVER/mycode/*.php ./SERVER/mycode/.

######

###### end of [Makefile] ######
