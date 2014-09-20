#
# Makefile for atslangweb
#

###### beg of [Makefile] ######

SOURCE=${PATSHOME}/doc/PROJECT/MEDIUM/ats2langweb

######

CPF=cp -f
RMF=rm -f

######

all:: index
all:: thePageLeft
all:: thePageRHeaderTop
all:: thePageRHeaderSep
all:: thePageRBodyLHeader
all:: thePageRBodyLContent
all:: thePageRBodyRight
all:: SERVER_mycode

######
#
index:: ; $(CPF) $(SOURCE)/index.php index.php
#
thePageLeft:: ; \
$(CPF) $(SOURCE)/thePageLeft/main.php ./thePageLeft/.
thePageRHeaderTop:: ; \
$(CPF) $(SOURCE)/thePageRHeaderTop/main.php ./thePageRHeaderTop/.
thePageRHeaderSep:: ; \
$(CPF) $(SOURCE)/thePageRHeaderSep/main.php ./thePageRHeaderSep/.
thePageRBodyLHeader:: ; \
$(CPF) $(SOURCE)/thePageRBodyLHeader/Home.php ./thePageRBodyLHeader/.
thePageRBodyLContent:: ; \
$(CPF) $(SOURCE)/thePageRBodyLContent/Home.php ./thePageRBodyLContent/.
thePageRBodyRight:: ; \
$(CPF) $(SOURCE)/thePageRBodyRight/Home.php ./thePageRBodyRight/.
#
######

SERVER_mycode:: ; $(CPF) $(SOURCE)/SERVER/mycode/*.php ./SERVER/mycode/.

######

###### end of [Makefile] ######