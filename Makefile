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
all:: Papers
all:: Examples

######
#
Home:: ; $(CPF) $(SOURCE)/Home.php .
Downloads:: ; $(CPF) $(SOURCE)/Downloads.php .
Documents:: ; $(CPF) $(SOURCE)/Documents.php .
Papers:: ; $(CPF) $(SOURCE)/Papers.php .
Examples:: ; $(CPF) $(SOURCE)/Examples.php .
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
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/Downloads.php ./thePageLeft/.
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/Documents.php ./thePageLeft/.
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/Papers.php ./thePageLeft/.
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/Examples.php ./thePageLeft/.
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/share.php ./thePageLeft/.
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/share2.php ./thePageLeft/.
#
thePageRHeaderTop:: ; \
$(CPF) $(SOURCE)/thePageRHeaderTop/Home.php ./thePageRHeaderTop/.
#
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Home.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Downloads.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Documents.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Papers.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/Examples.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/share.php ./thePageRHeaderSep/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/share2.php ./thePageRHeaderSep/.
#
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Home.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Downloads.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Documents.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Papers.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Examples.php ./thePageRBodyLHeader/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/share.php ./thePageRBodyLHeader/.
#
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Home.php ./thePageRBodyLContent/.
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Downloads.php ./thePageRBodyLContent/.
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Documents.php ./thePageRBodyLContent/.
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Papers.php ./thePageRBodyLContent/.
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Examples.php ./thePageRBodyLContent/.
#
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Home.php ./thePageRBodyRight/.
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Downloads.php ./thePageRBodyRight/.
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Documents.php ./thePageRBodyRight/.
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Papers.php ./thePageRBodyRight/.
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Examples.php ./thePageRBodyRight/.
#
######

CLIENT_mycode:: ; $(CPF) $(SOURCE)/CLIENT/mycode/*.js ./CLIENT/mycode/.
SERVER_mycode:: ; $(CPF) $(SOURCE)/SERVER/mycode/*.php ./SERVER/mycode/.

######

###### end of [Makefile] ######
