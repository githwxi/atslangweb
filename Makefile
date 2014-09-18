#
# Makefile for atslangweb
#

###### beg of [Makefile] ######

SOURCE=${PATSHOME}/doc/PROJECT/LARGE/ats2langweb

######

CPF=cp -f
RMF=rm -f

######

all:: index
all:: thePageLeft
all:: thePageRHeaderTop
all:: thePageRHeaderSep

######

index:: ; $(CPF) $(SOURCE)/index.php index.php
thePageLeft:: ; $(CPF) $(SOURCE)/thePageLeft/main.php ./thePageLeft/.
thePageRHeaderTop:: ; $(CPF) $(SOURCE)/thePageRHeaderTop/main.php ./thePageRHeaderTop/.
thePageRHeaderSep:: ; $(CPF) $(SOURCE)/thePageRHeaderSep/main.php ./thePageRHeaderSep/.

######

###### end of [Makefile] ######