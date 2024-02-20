/*
 * static_model.c
 *
 * automatically generated from ION8650.scd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_LD0_LLN0_STATUS;
extern DataSet iedModelds_LD0_LLN0_MMXU;
extern DataSet iedModelds_LD0_LLN0_MMTR;
extern DataSet iedModelds_LD0_LLN0_PQ;
extern DataSet iedModelds_LD0_LLN0_CUSTOMIO;
extern DataSet iedModelds_LD0_LLN0_PersonalEvents;


extern DataSetEntry iedModelds_LD0_LLN0_STATUS_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_STATUS_fcda1;

DataSetEntry iedModelds_LD0_LLN0_STATUS_fcda0 = {
  "LD0",
  false,
  "LPHD1$ST$PhyHealth$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_STATUS_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_STATUS_fcda1 = {
  "LD0",
  false,
  "LLN0$ST$Mod$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_STATUS = {
  "LD0",
  "LLN0$STATUS",
  2,
  &iedModelds_LD0_LLN0_STATUS_fcda0,
  &iedModelds_LD0_LLN0_MMXU
};

extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda2;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda3;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda4;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda5;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda6;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda7;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda8;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda9;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda10;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda11;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda12;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda13;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda14;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda15;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda16;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda17;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda18;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda19;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda20;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda21;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda22;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda23;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda24;
extern DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda25;

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda0 = {
  "LD0",
  false,
  "M03_MMXU1$MX$TotW$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda1 = {
  "LD0",
  false,
  "M03_MMXU1$MX$TotVAr$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda2
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda2 = {
  "LD0",
  false,
  "M03_MMXU1$MX$TotVA$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda3
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda3 = {
  "LD0",
  false,
  "M03_MMXU1$MX$TotPF$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda4
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda4 = {
  "LD0",
  false,
  "M03_MMXU1$MX$Hz$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda5
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda5 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PPV$phsAB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda6
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda6 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PPV$phsBC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda7
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda7 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PPV$phsCA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda8
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda8 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PhV$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda9
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda9 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PhV$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda10
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda10 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PhV$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda11
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda11 = {
  "LD0",
  false,
  "M03_MMXU1$MX$A$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda12
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda12 = {
  "LD0",
  false,
  "M03_MMXU1$MX$A$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda13
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda13 = {
  "LD0",
  false,
  "M03_MMXU1$MX$A$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda14
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda14 = {
  "LD0",
  false,
  "M03_MMXU1$MX$W$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda15
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda15 = {
  "LD0",
  false,
  "M03_MMXU1$MX$W$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda16
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda16 = {
  "LD0",
  false,
  "M03_MMXU1$MX$W$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda17
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda17 = {
  "LD0",
  false,
  "M03_MMXU1$MX$VAr$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda18
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda18 = {
  "LD0",
  false,
  "M03_MMXU1$MX$VAr$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda19
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda19 = {
  "LD0",
  false,
  "M03_MMXU1$MX$VAr$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda20
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda20 = {
  "LD0",
  false,
  "M03_MMXU1$MX$VA$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda21
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda21 = {
  "LD0",
  false,
  "M03_MMXU1$MX$VA$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda22
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda22 = {
  "LD0",
  false,
  "M03_MMXU1$MX$VA$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda23
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda23 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PF$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda24
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda24 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PF$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMXU_fcda25
};

DataSetEntry iedModelds_LD0_LLN0_MMXU_fcda25 = {
  "LD0",
  false,
  "M03_MMXU1$MX$PF$phsC$cVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_MMXU = {
  "LD0",
  "LLN0$MMXU",
  26,
  &iedModelds_LD0_LLN0_MMXU_fcda0,
  &iedModelds_LD0_LLN0_MMTR
};

extern DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda2;
extern DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda3;
extern DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda4;
extern DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda5;
extern DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda6;

DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda0 = {
  "LD0",
  false,
  "MMTR1$ST$TotVAh$actVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMTR_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda1 = {
  "LD0",
  false,
  "MMTR1$ST$TotWh$actVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMTR_fcda2
};

DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda2 = {
  "LD0",
  false,
  "MMTR1$ST$TotVArh$actVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMTR_fcda3
};

DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda3 = {
  "LD0",
  false,
  "MMTR1$ST$SupWh$actVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMTR_fcda4
};

DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda4 = {
  "LD0",
  false,
  "MMTR1$ST$SupVArh$actVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMTR_fcda5
};

DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda5 = {
  "LD0",
  false,
  "MMTR1$ST$DmdWh$actVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_MMTR_fcda6
};

DataSetEntry iedModelds_LD0_LLN0_MMTR_fcda6 = {
  "LD0",
  false,
  "MMTR1$ST$DmdVArh$actVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_MMTR = {
  "LD0",
  "LLN0$MMTR",
  7,
  &iedModelds_LD0_LLN0_MMTR_fcda0,
  &iedModelds_LD0_LLN0_PQ
};

extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda2;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda3;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda4;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda5;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda6;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda7;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda8;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda9;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda10;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda11;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda12;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda13;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda14;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda15;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda16;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda17;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda18;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda19;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda20;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda21;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda22;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda23;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda24;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda25;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda26;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda27;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda28;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda29;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda30;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda31;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda32;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda33;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda34;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda35;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda36;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda37;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda38;
extern DataSetEntry iedModelds_LD0_LLN0_PQ_fcda39;

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda0 = {
  "LD0",
  false,
  "MHAI1$MX$Hz$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda1 = {
  "LD0",
  false,
  "MHAI1$MX$HKf$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda2
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda2 = {
  "LD0",
  false,
  "MHAI1$MX$HKf$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda3
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda3 = {
  "LD0",
  false,
  "MHAI1$MX$HKf$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda4
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda4 = {
  "LD0",
  false,
  "MHAI1$MX$ThdA$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda5
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda5 = {
  "LD0",
  false,
  "MHAI1$MX$ThdA$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda6
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda6 = {
  "LD0",
  false,
  "MHAI1$MX$ThdA$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda7
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda7 = {
  "LD0",
  false,
  "MHAI1$MX$ThdOddA$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda8
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda8 = {
  "LD0",
  false,
  "MHAI1$MX$ThdOddA$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda9
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda9 = {
  "LD0",
  false,
  "MHAI1$MX$ThdOddA$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda10
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda10 = {
  "LD0",
  false,
  "MHAI1$MX$ThdEvnA$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda11
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda11 = {
  "LD0",
  false,
  "MHAI1$MX$ThdEvnA$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda12
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda12 = {
  "LD0",
  false,
  "MHAI1$MX$ThdEvnA$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda13
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda13 = {
  "LD0",
  false,
  "MHAI1$MX$HCfA$phsA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda14
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda14 = {
  "LD0",
  false,
  "MHAI1$MX$HCfA$phsB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda15
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda15 = {
  "LD0",
  false,
  "MHAI1$MX$HCfA$phsC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda16
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda16 = {
  "LD0",
  false,
  "MHAI1$MX$ThdPPV$phsAB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda17
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda17 = {
  "LD0",
  false,
  "MHAI1$MX$ThdPPV$phsBC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda18
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda18 = {
  "LD0",
  false,
  "MHAI1$MX$ThdPPV$phsCA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda19
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda19 = {
  "LD0",
  false,
  "MHAI1$MX$ThdOddPPV$phsAB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda20
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda20 = {
  "LD0",
  false,
  "MHAI1$MX$ThdOddPPV$phsBC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda21
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda21 = {
  "LD0",
  false,
  "MHAI1$MX$ThdOddPPV$phsCA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda22
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda22 = {
  "LD0",
  false,
  "MHAI1$MX$ThdEvnPPV$phsAB$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda23
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda23 = {
  "LD0",
  false,
  "MHAI1$MX$ThdEvnPPV$phsBC$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda24
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda24 = {
  "LD0",
  false,
  "MHAI1$MX$ThdEvnPPV$phsCA$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda25
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda25 = {
  "LD0",
  false,
  "MSQI1$MX$SeqA$c1$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda26
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda26 = {
  "LD0",
  false,
  "MSQI1$MX$SeqA$c2$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda27
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda27 = {
  "LD0",
  false,
  "MSQI1$MX$SeqA$c3$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda28
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda28 = {
  "LD0",
  false,
  "MSQI1$MX$SeqV$c1$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda29
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda29 = {
  "LD0",
  false,
  "MSQI1$MX$SeqV$c2$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda30
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda30 = {
  "LD0",
  false,
  "MSQI1$MX$SeqV$c3$cVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda31
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda31 = {
  "LD0",
  false,
  "MSTA1$MX$AvVA$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda32
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda32 = {
  "LD0",
  false,
  "MSTA1$MX$MaxVA$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda33
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda33 = {
  "LD0",
  false,
  "MSTA1$MX$MinVA$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda34
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda34 = {
  "LD0",
  false,
  "MSTA1$MX$AvW$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda35
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda35 = {
  "LD0",
  false,
  "MSTA1$MX$MaxW$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda36
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda36 = {
  "LD0",
  false,
  "MSTA1$MX$MinW$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda37
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda37 = {
  "LD0",
  false,
  "MSTA1$MX$AvVAr$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda38
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda38 = {
  "LD0",
  false,
  "MSTA1$MX$MaxVAr$mag", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PQ_fcda39
};

DataSetEntry iedModelds_LD0_LLN0_PQ_fcda39 = {
  "LD0",
  false,
  "MSTA1$MX$MinVAr$mag", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_PQ = {
  "LD0",
  "LLN0$PQ",
  40,
  &iedModelds_LD0_LLN0_PQ_fcda0,
  &iedModelds_LD0_LLN0_CUSTOMIO
};

extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda2;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda3;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda4;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda5;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda6;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda7;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda8;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda9;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda10;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda11;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda12;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda13;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda14;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda15;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda16;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda17;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda18;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda19;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda20;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda21;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda22;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda23;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda24;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda25;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda26;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda27;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda28;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda29;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda30;
extern DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda31;

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda0 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn1$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda1 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn2$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda2
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda2 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn3$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda3
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda3 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn4$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda4
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda4 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn5$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda5
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda5 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn6$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda6
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda6 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn7$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda7
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda7 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn8$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda8
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda8 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn9$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda9
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda9 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn10$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda10
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda10 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn11$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda11
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda11 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn12$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda12
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda12 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn13$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda13
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda13 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn14$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda14
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda14 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn15$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda15
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda15 = {
  "LD0",
  false,
  "CUS1_GGIO3$MX$AnIn16$mag$f", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda16
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda16 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda17
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda17 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda18
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda18 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind3$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda19
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda19 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind4$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda20
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda20 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind5$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda21
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda21 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind6$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda22
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda22 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind7$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda23
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda23 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind8$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda24
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda24 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind9$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda25
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda25 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind10$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda26
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda26 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind11$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda27
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda27 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind12$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda28
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda28 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind13$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda29
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda29 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind14$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda30
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda30 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind15$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda31
};

DataSetEntry iedModelds_LD0_LLN0_CUSTOMIO_fcda31 = {
  "LD0",
  false,
  "CUS2_GGIO4$ST$Ind16$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_CUSTOMIO = {
  "LD0",
  "LLN0$CUSTOMIO",
  32,
  &iedModelds_LD0_LLN0_CUSTOMIO_fcda0,
  &iedModelds_LD0_LLN0_PersonalEvents
};

extern DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda0;
extern DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda1;
extern DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda2;
extern DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda3;

DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda0 = {
  "LD0",
  false,
  "XCBR1$ST$SPCSO1$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PersonalEvents_fcda1
};

DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda1 = {
  "LD0",
  false,
  "XCBR1$ST$SPCSO2$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PersonalEvents_fcda2
};

DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda2 = {
  "LD0",
  false,
  "XCBR1$ST$SPCSO3$stVal", 
  -1,
  NULL,
  NULL,
  &iedModelds_LD0_LLN0_PersonalEvents_fcda3
};

DataSetEntry iedModelds_LD0_LLN0_PersonalEvents_fcda3 = {
  "LD0",
  false,
  "XCBR1$ST$SPCSO4$stVal", 
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD0_LLN0_PersonalEvents = {
  "LD0",
  "LLN0$PersonalEvents",
  4,
  &iedModelds_LD0_LLN0_PersonalEvents_fcda0,
  NULL
};

LogicalDevice iedModel_LD0 = {
    LogicalDeviceModelType,
    "LD0",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_LD0_LLN0
};

LogicalNode iedModel_LD0_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
};

DataObject iedModel_LD0_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_LLN0,
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    (ModelNode*) &iedModel_LD0_LLN0_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_LLN0,
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_LLN0,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_LD0_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    (ModelNode*) &iedModel_LD0_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    (ModelNode*) &iedModel_LD0_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    (ModelNode*) &iedModel_LD0_LLN0_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_LLN0,
    NULL,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LD0_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
};

DataObject iedModel_LD0_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_vendor,
    0
};

DataAttribute iedModel_LD0_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_serNum,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_serNum = {
    DataAttributeModelType,
    "serNum",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_model,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_model = {
    DataAttributeModelType,
    "model",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_location,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyNam_location = {
    DataAttributeModelType,
    "location",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_LD0_LPHD1,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_CUS1_GGIO3 = {
    LogicalNodeModelType,
    "CUS1_GGIO3",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod,
};

DataObject iedModel_LD0_CUS1_GGIO3_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health_stVal,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn1,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn2 = {
    DataObjectModelType,
    "AnIn2",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn2,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn3 = {
    DataObjectModelType,
    "AnIn3",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn3,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn4 = {
    DataObjectModelType,
    "AnIn4",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn4,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn5 = {
    DataObjectModelType,
    "AnIn5",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn5_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn5,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn6 = {
    DataObjectModelType,
    "AnIn6",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn6_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn6,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn7 = {
    DataObjectModelType,
    "AnIn7",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn7_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn7,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn8 = {
    DataObjectModelType,
    "AnIn8",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn8_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn8,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn9 = {
    DataObjectModelType,
    "AnIn9",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn9_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn9,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn10 = {
    DataObjectModelType,
    "AnIn10",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn10_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn10,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn11 = {
    DataObjectModelType,
    "AnIn11",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn11_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn11,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn12 = {
    DataObjectModelType,
    "AnIn12",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn12_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn12,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn13 = {
    DataObjectModelType,
    "AnIn13",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn13_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn13,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn14 = {
    DataObjectModelType,
    "AnIn14",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn14_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn14,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn15 = {
    DataObjectModelType,
    "AnIn15",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn15_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn15,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS1_GGIO3_AnIn16 = {
    DataObjectModelType,
    "AnIn16",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3,
    NULL,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_instMag,
    0
};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_mag,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_q,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16,
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS1_GGIO3_AnIn16_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS1_GGIO3_AnIn16,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_CUS2_GGIO4 = {
    LogicalNodeModelType,
    "CUS2_GGIO4",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod,
};

DataObject iedModel_LD0_CUS2_GGIO4_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_NamPlt,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_NamPlt,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_NamPlt,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind1,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind2,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind3,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind4,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind5 = {
    DataObjectModelType,
    "Ind5",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind5_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind5_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind5_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind5_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind5,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind6 = {
    DataObjectModelType,
    "Ind6",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind6_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind6_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind6_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind6_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind6,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind7 = {
    DataObjectModelType,
    "Ind7",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind7_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind7_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind7_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind7_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind7,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind8 = {
    DataObjectModelType,
    "Ind8",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind8_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind8_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind8_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind8_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind8,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind9 = {
    DataObjectModelType,
    "Ind9",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind9_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind9_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind9_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind9_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind9,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind10 = {
    DataObjectModelType,
    "Ind10",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind10_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind10_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind10_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind10_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind10,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind11 = {
    DataObjectModelType,
    "Ind11",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind11_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind11_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind11_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind11_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind11,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind12 = {
    DataObjectModelType,
    "Ind12",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind12_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind12_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind12_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind12_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind12,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind13 = {
    DataObjectModelType,
    "Ind13",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind13_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind13_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind13_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind13_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind13,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind14 = {
    DataObjectModelType,
    "Ind14",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind14_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind14_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind14_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind14_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind14,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind15 = {
    DataObjectModelType,
    "Ind15",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind15_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind15_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind15_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind15_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind15,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_CUS2_GGIO4_Ind16 = {
    DataObjectModelType,
    "Ind16",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4,
    NULL,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16_stVal,
    0
};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind16_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind16_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind16_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16,
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_CUS2_GGIO4_Ind16_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_CUS2_GGIO4_Ind16,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_MHAI1 = {
    LogicalNodeModelType,
    "MHAI1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MHAI1_Mod,
};

DataObject iedModel_LD0_MHAI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_Beh,
    (ModelNode*) &iedModel_LD0_MHAI1_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MHAI1_Mod,
    (ModelNode*) &iedModel_LD0_MHAI1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_Mod,
    (ModelNode*) &iedModel_LD0_MHAI1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_Mod,
    (ModelNode*) &iedModel_LD0_MHAI1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_MHAI1_Mod,
    (ModelNode*) &iedModel_LD0_MHAI1_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_Health,
    (ModelNode*) &iedModel_LD0_MHAI1_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MHAI1_Beh,
    (ModelNode*) &iedModel_LD0_MHAI1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_Beh,
    (ModelNode*) &iedModel_LD0_MHAI1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_Beh,
    (ModelNode*) &iedModel_LD0_MHAI1_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_NamPlt,
    (ModelNode*) &iedModel_LD0_MHAI1_Health_stVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MHAI1_Health,
    (ModelNode*) &iedModel_LD0_MHAI1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_Health,
    (ModelNode*) &iedModel_LD0_MHAI1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_Health,
    (ModelNode*) &iedModel_LD0_MHAI1_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    (ModelNode*) &iedModel_LD0_MHAI1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_MHAI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_MHAI1_NamPlt,
    (ModelNode*) &iedModel_LD0_MHAI1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_MHAI1_NamPlt,
    (ModelNode*) &iedModel_LD0_MHAI1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_instMag,
    0
};

DataAttribute iedModel_LD0_MHAI1_Hz_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_mag,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_q,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_db,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_units,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    (ModelNode*) &iedModel_LD0_MHAI1_Hz_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_Hz_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_Hz,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HA = {
    DataObjectModelType,
    "HA",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_q,
    0
};

DataAttribute iedModel_LD0_MHAI1_HA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsAHar = {
    DataAttributeModelType,
    "phsAHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsAHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsAHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsAHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsAHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsAHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsBHar = {
    DataAttributeModelType,
    "phsBHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsBHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsBHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsBHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsBHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsBHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsCHar = {
    DataAttributeModelType,
    "phsCHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_numHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsCHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsCHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsCHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_phsCHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HA_phsCHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_numHar = {
    DataAttributeModelType,
    "numHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_numCyc,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_numCyc = {
    DataAttributeModelType,
    "numCyc",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_evalTm,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_evalTm = {
    DataAttributeModelType,
    "evalTm",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_frequency,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_frequency = {
    DataAttributeModelType,
    "frequency",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    (ModelNode*) &iedModel_LD0_MHAI1_HA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HPhV = {
    DataObjectModelType,
    "HPhV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_q,
    0
};

DataAttribute iedModel_LD0_MHAI1_HPhV_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsAHar = {
    DataAttributeModelType,
    "phsAHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsAHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsAHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsAHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsAHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsAHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsBHar = {
    DataAttributeModelType,
    "phsBHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsBHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsBHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsBHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsBHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsBHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsCHar = {
    DataAttributeModelType,
    "phsCHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_numHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsCHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsCHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsCHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_phsCHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_phsCHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_DATA_UPDATE,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_numHar = {
    DataAttributeModelType,
    "numHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_numCyc,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_numCyc = {
    DataAttributeModelType,
    "numCyc",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_evalTm,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_evalTm = {
    DataAttributeModelType,
    "evalTm",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_frequency,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_frequency = {
    DataAttributeModelType,
    "frequency",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPhV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HPhV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HPPV = {
    DataObjectModelType,
    "HPPV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_q,
    0
};

DataAttribute iedModel_LD0_MHAI1_HPPV_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsABHar = {
    DataAttributeModelType,
    "phsABHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsABHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsABHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsABHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsABHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsABHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsBCHar = {
    DataAttributeModelType,
    "phsBCHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsBCHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsBCHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsBCHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsBCHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsBCHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsCAHar = {
    DataAttributeModelType,
    "phsCAHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_numHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar_mag,
    51,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsCAHar_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar_ang,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsCAHar_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsCAHar_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_phsCAHar_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_phsCAHar_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_numHar = {
    DataAttributeModelType,
    "numHar",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_numCyc,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_numCyc = {
    DataAttributeModelType,
    "numCyc",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_evalTm,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_evalTm = {
    DataAttributeModelType,
    "evalTm",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_frequency,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT16U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_frequency = {
    DataAttributeModelType,
    "frequency",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HPPV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HPPV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HKf = {
    DataObjectModelType,
    "HKf",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_HKf_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HKf_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HKf_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_d,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HKf_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HKf,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdA = {
    DataObjectModelType,
    "ThdA",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_ThdA_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdA_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdA_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddA = {
    DataObjectModelType,
    "ThdOddA",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_ThdOddA_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddA_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddA_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnA = {
    DataObjectModelType,
    "ThdEvnA",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_ThdEvnA_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnA_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnA_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdPhV = {
    DataObjectModelType,
    "ThdPhV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_ThdPhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdPhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdPhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPhV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPhV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddPhV = {
    DataObjectModelType,
    "ThdOddPhV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_ThdOddPhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddPhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddPhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPhV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPhV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnPhV = {
    DataObjectModelType,
    "ThdEvnPhV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_ThdEvnPhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnPhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnPhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPhV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPhV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdPPV = {
    DataObjectModelType,
    "ThdPPV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    0
};

DataObject iedModel_LD0_MHAI1_ThdPPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsAB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdPPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsBC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdPPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_phsCA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdPPV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdPPV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddPPV = {
    DataObjectModelType,
    "ThdOddPPV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    0
};

DataObject iedModel_LD0_MHAI1_ThdOddPPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsAB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddPPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsBC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdOddPPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_phsCA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdOddPPV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdOddPPV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnPPV = {
    DataObjectModelType,
    "ThdEvnPPV",
    (ModelNode*) &iedModel_LD0_MHAI1,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    0
};

DataObject iedModel_LD0_MHAI1_ThdEvnPPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnPPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_ThdEvnPPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_d,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_ThdEvnPPV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_ThdEvnPPV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HCfA = {
    DataObjectModelType,
    "HCfA",
    (ModelNode*) &iedModel_LD0_MHAI1,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    0
};

DataObject iedModel_LD0_MHAI1_HCfA_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_q,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_db,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_units,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HCfA_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_q,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_db,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_units,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MHAI1_HCfA_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_d,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_cVal,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_q,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_db,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_units,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MHAI1_HCfA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MHAI1_HCfA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_MMTR1 = {
    LogicalNodeModelType,
    "MMTR1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_MMTR1_Mod,
};

DataObject iedModel_LD0_MMTR1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_Beh,
    (ModelNode*) &iedModel_LD0_MMTR1_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MMTR1_Mod,
    (ModelNode*) &iedModel_LD0_MMTR1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_Mod,
    (ModelNode*) &iedModel_LD0_MMTR1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_Mod,
    (ModelNode*) &iedModel_LD0_MMTR1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_MMTR1_Mod,
    (ModelNode*) &iedModel_LD0_MMTR1_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_Health,
    (ModelNode*) &iedModel_LD0_MMTR1_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MMTR1_Beh,
    (ModelNode*) &iedModel_LD0_MMTR1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_Beh,
    (ModelNode*) &iedModel_LD0_MMTR1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_Beh,
    (ModelNode*) &iedModel_LD0_MMTR1_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_NamPlt,
    (ModelNode*) &iedModel_LD0_MMTR1_Health_stVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MMTR1_Health,
    (ModelNode*) &iedModel_LD0_MMTR1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_Health,
    (ModelNode*) &iedModel_LD0_MMTR1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_Health,
    (ModelNode*) &iedModel_LD0_MMTR1_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh,
    (ModelNode*) &iedModel_LD0_MMTR1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_MMTR1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_MMTR1_NamPlt,
    (ModelNode*) &iedModel_LD0_MMTR1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_MMTR1_NamPlt,
    (ModelNode*) &iedModel_LD0_MMTR1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_TotVAh = {
    DataObjectModelType,
    "TotVAh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_actVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_TotVAh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVAh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVAh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_units,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVAh_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_pulsQty,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVAh_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_units,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVAh_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVAh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVAh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVAh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_TotWh = {
    DataObjectModelType,
    "TotWh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_actVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_TotWh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_units,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_pulsQty,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_units,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotWh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_TotWh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_TotVArh = {
    DataObjectModelType,
    "TotVArh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_actVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_TotVArh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVArh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVArh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_units,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVArh_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_pulsQty,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVArh_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_units,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVArh_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVArh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_TotVArh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_TotVArh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_SupWh = {
    DataObjectModelType,
    "SupWh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_actVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_SupWh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupWh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupWh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_units,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupWh_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_pulsQty,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupWh_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_units,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupWh_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupWh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupWh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_SupWh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_SupVArh = {
    DataObjectModelType,
    "SupVArh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_actVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_SupVArh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupVArh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupVArh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_units,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupVArh_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_pulsQty,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupVArh_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_units,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupVArh_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupVArh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_SupVArh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_SupVArh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_DmdWh = {
    DataObjectModelType,
    "DmdWh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_actVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_DmdWh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdWh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdWh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_units,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdWh_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_pulsQty,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdWh_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_units,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdWh_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdWh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdWh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdWh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MMTR1_DmdVArh = {
    DataObjectModelType,
    "DmdVArh",
    (ModelNode*) &iedModel_LD0_MMTR1,
    NULL,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_actVal,
    0
};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_actVal = {
    DataAttributeModelType,
    "actVal",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_units,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_pulsQty,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_units,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_pulsQty = {
    DataAttributeModelType,
    "pulsQty",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh,
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MMTR1_DmdVArh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MMTR1_DmdVArh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_M03_MMXU1 = {
    LogicalNodeModelType,
    "M03_MMXU1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_MSQI1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod,
};

DataObject iedModel_LD0_M03_MMXU1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_NamPlt,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health_stVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_NamPlt,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_NamPlt,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_instMag,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_mag,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotW_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_instMag,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_mag,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVAr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_instMag,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_mag,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotVA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_TotPF = {
    DataObjectModelType,
    "TotPF",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_instMag,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_mag,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_TotPF_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_TotPF,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_instMag,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_mag,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_Hz_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_Hz,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    0
};

DataObject iedModel_LD0_M03_MMXU1_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsAB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsBC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_d,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_phsCA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PPV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PPV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    0
};

DataObject iedModel_LD0_M03_MMXU1_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_d,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PhV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PhV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    0
};

DataObject iedModel_LD0_M03_MMXU1_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_d,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_A_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_A,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_W = {
    DataObjectModelType,
    "W",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    0
};

DataObject iedModel_LD0_M03_MMXU1_W_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_W_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_W_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_d,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_W_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_W,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_VAr = {
    DataObjectModelType,
    "VAr",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    0
};

DataObject iedModel_LD0_M03_MMXU1_VAr_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_VAr_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_VAr_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_d,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VAr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_VA = {
    DataObjectModelType,
    "VA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    0
};

DataObject iedModel_LD0_M03_MMXU1_VA_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_VA_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_VA_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_d,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_VA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_VA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PF = {
    DataObjectModelType,
    "PF",
    (ModelNode*) &iedModel_LD0_M03_MMXU1,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    0
};

DataObject iedModel_LD0_M03_MMXU1_PF_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PF_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsB_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_M03_MMXU1_PF_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_d,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_instCVal,
    0
};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_cVal,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_q,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_db,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_units,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_phsC_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_M03_MMXU1_PF_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_M03_MMXU1_PF,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_MSQI1 = {
    LogicalNodeModelType,
    "MSQI1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSQI1_Mod,
};

DataObject iedModel_LD0_MSQI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_MSQI1,
    (ModelNode*) &iedModel_LD0_MSQI1_Beh,
    (ModelNode*) &iedModel_LD0_MSQI1_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MSQI1_Mod,
    (ModelNode*) &iedModel_LD0_MSQI1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_Mod,
    (ModelNode*) &iedModel_LD0_MSQI1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_Mod,
    (ModelNode*) &iedModel_LD0_MSQI1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_MSQI1_Mod,
    (ModelNode*) &iedModel_LD0_MSQI1_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_MSQI1,
    (ModelNode*) &iedModel_LD0_MSQI1_Health,
    (ModelNode*) &iedModel_LD0_MSQI1_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MSQI1_Beh,
    (ModelNode*) &iedModel_LD0_MSQI1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_Beh,
    (ModelNode*) &iedModel_LD0_MSQI1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_Beh,
    (ModelNode*) &iedModel_LD0_MSQI1_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_MSQI1,
    (ModelNode*) &iedModel_LD0_MSQI1_NamPlt,
    (ModelNode*) &iedModel_LD0_MSQI1_Health_stVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MSQI1_Health,
    (ModelNode*) &iedModel_LD0_MSQI1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_Health,
    (ModelNode*) &iedModel_LD0_MSQI1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_Health,
    (ModelNode*) &iedModel_LD0_MSQI1_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_MSQI1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA,
    (ModelNode*) &iedModel_LD0_MSQI1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_MSQI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_MSQI1_NamPlt,
    (ModelNode*) &iedModel_LD0_MSQI1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_MSQI1_NamPlt,
    (ModelNode*) &iedModel_LD0_MSQI1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_SeqA = {
    DataObjectModelType,
    "SeqA",
    (ModelNode*) &iedModel_LD0_MSQI1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    0
};

DataObject iedModel_LD0_MSQI1_SeqA_c1 = {
    DataObjectModelType,
    "c1",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_q,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_db,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_units,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c1,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_SeqA_c2 = {
    DataObjectModelType,
    "c2",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_q,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_db,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_units,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c2,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_SeqA_c3 = {
    DataObjectModelType,
    "c3",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_seqT,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_q,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_db,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_units,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_c3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_c3,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_seqT = {
    DataAttributeModelType,
    "seqT",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA_d,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_SeqV = {
    DataObjectModelType,
    "SeqV",
    (ModelNode*) &iedModel_LD0_MSQI1,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    0
};

DataObject iedModel_LD0_MSQI1_SeqV_c1 = {
    DataObjectModelType,
    "c1",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_q,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_db,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_units,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c1,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_SeqV_c2 = {
    DataObjectModelType,
    "c2",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_q,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_db,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_units,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c2,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSQI1_SeqV_c3 = {
    DataObjectModelType,
    "c3",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_seqT,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal,
    0
};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_instCVal = {
    DataAttributeModelType,
    "instCVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_instCVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_instCVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_instCVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_instCVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_instCVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_q,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal_ang,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_cVal_ang = {
    DataAttributeModelType,
    "ang",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal,
    NULL,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal_ang_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_cVal_ang_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_cVal_ang,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_db,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_units,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_c3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_c3,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_seqT = {
    DataAttributeModelType,
    "seqT",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV,
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV_d,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSQI1_SeqV_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSQI1_SeqV,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_MSTA1 = {
    LogicalNodeModelType,
    "MSTA1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_RDRE1,
    (ModelNode*) &iedModel_LD0_MSTA1_Mod,
};

DataObject iedModel_LD0_MSTA1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_Beh,
    (ModelNode*) &iedModel_LD0_MSTA1_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_MSTA1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MSTA1_Mod,
    (ModelNode*) &iedModel_LD0_MSTA1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_Mod,
    (ModelNode*) &iedModel_LD0_MSTA1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_Mod,
    (ModelNode*) &iedModel_LD0_MSTA1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_MSTA1_Mod,
    (ModelNode*) &iedModel_LD0_MSTA1_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_Health,
    (ModelNode*) &iedModel_LD0_MSTA1_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_MSTA1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MSTA1_Beh,
    (ModelNode*) &iedModel_LD0_MSTA1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_Beh,
    (ModelNode*) &iedModel_LD0_MSTA1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_Beh,
    (ModelNode*) &iedModel_LD0_MSTA1_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_NamPlt,
    (ModelNode*) &iedModel_LD0_MSTA1_Health_stVal,
    0
};

DataAttribute iedModel_LD0_MSTA1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_MSTA1_Health,
    (ModelNode*) &iedModel_LD0_MSTA1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_Health,
    (ModelNode*) &iedModel_LD0_MSTA1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_Health,
    (ModelNode*) &iedModel_LD0_MSTA1_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    (ModelNode*) &iedModel_LD0_MSTA1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_MSTA1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_MSTA1_NamPlt,
    (ModelNode*) &iedModel_LD0_MSTA1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_MSTA1_NamPlt,
    (ModelNode*) &iedModel_LD0_MSTA1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_AvVA = {
    DataObjectModelType,
    "AvVA",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_AvVA_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_q,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_db,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_units,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_MaxVA = {
    DataObjectModelType,
    "MaxVA",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_MaxVA_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_q,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_db,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_units,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_MinVA = {
    DataObjectModelType,
    "MinVA",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_MinVA_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_q,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_db,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_units,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVA_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_AvW = {
    DataObjectModelType,
    "AvW",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_AvW_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_q,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_db,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_units,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    (ModelNode*) &iedModel_LD0_MSTA1_AvW_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvW_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_AvW,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_MaxW = {
    DataObjectModelType,
    "MaxW",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_MaxW_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_q,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_db,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_units,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxW_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxW,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_MinW = {
    DataObjectModelType,
    "MinW",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_MinW_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_q,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_db,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_units,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    (ModelNode*) &iedModel_LD0_MSTA1_MinW_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinW_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_MinW,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_AvVAr = {
    DataObjectModelType,
    "AvVAr",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_AvVAr_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_q,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_db,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_units,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_AvVAr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_AvVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_MaxVAr = {
    DataObjectModelType,
    "MaxVAr",
    (ModelNode*) &iedModel_LD0_MSTA1,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_q,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_db,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_units,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MaxVAr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_MaxVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_MSTA1_MinVAr = {
    DataObjectModelType,
    "MinVAr",
    (ModelNode*) &iedModel_LD0_MSTA1,
    NULL,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_instMag,
    0
};

DataAttribute iedModel_LD0_MSTA1_MinVAr_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_mag,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_q,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_units,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_units = {
    DataAttributeModelType,
    "units",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_db,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_units_SIUnit,
    0,
    IEC61850_FC_CF,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_units_SIUnit = {
    DataAttributeModelType,
    "SIUnit",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_units,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_units_multiplier,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_units_multiplier = {
    DataAttributeModelType,
    "multiplier",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_units,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_MSTA1_MinVAr_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_MSTA1_MinVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_RDRE1 = {
    LogicalNodeModelType,
    "RDRE1",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_RDRE2,
    (ModelNode*) &iedModel_LD0_RDRE1_Mod,
};

DataObject iedModel_LD0_RDRE1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_RDRE1,
    (ModelNode*) &iedModel_LD0_RDRE1_Beh,
    (ModelNode*) &iedModel_LD0_RDRE1_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE1_Mod,
    (ModelNode*) &iedModel_LD0_RDRE1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE1_Mod,
    (ModelNode*) &iedModel_LD0_RDRE1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE1_Mod,
    (ModelNode*) &iedModel_LD0_RDRE1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_RDRE1_Mod,
    (ModelNode*) &iedModel_LD0_RDRE1_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_RDRE1,
    (ModelNode*) &iedModel_LD0_RDRE1_Health,
    (ModelNode*) &iedModel_LD0_RDRE1_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE1_Beh,
    (ModelNode*) &iedModel_LD0_RDRE1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE1_Beh,
    (ModelNode*) &iedModel_LD0_RDRE1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE1_Beh,
    (ModelNode*) &iedModel_LD0_RDRE1_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_RDRE1,
    (ModelNode*) &iedModel_LD0_RDRE1_NamPlt,
    (ModelNode*) &iedModel_LD0_RDRE1_Health_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE1_Health,
    (ModelNode*) &iedModel_LD0_RDRE1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE1_Health,
    (ModelNode*) &iedModel_LD0_RDRE1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE1_Health,
    (ModelNode*) &iedModel_LD0_RDRE1_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_RDRE1,
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_RDRE1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_RDRE1_NamPlt,
    (ModelNode*) &iedModel_LD0_RDRE1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_RDRE1_NamPlt,
    (ModelNode*) &iedModel_LD0_RDRE1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE1_RcdMade = {
    DataObjectModelType,
    "RcdMade",
    (ModelNode*) &iedModel_LD0_RDRE1,
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE1_RcdMade_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_RcdMade_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_RcdMade_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_RcdMade_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE1_RcdMade,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE1_FltNum = {
    DataObjectModelType,
    "FltNum",
    (ModelNode*) &iedModel_LD0_RDRE1,
    NULL,
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE1_FltNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_FltNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_FltNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE1_FltNum_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE1_FltNum,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_RDRE2 = {
    LogicalNodeModelType,
    "RDRE2",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_RDRE2_Mod,
};

DataObject iedModel_LD0_RDRE2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_RDRE2,
    (ModelNode*) &iedModel_LD0_RDRE2_Beh,
    (ModelNode*) &iedModel_LD0_RDRE2_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE2_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE2_Mod,
    (ModelNode*) &iedModel_LD0_RDRE2_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE2_Mod,
    (ModelNode*) &iedModel_LD0_RDRE2_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE2_Mod,
    (ModelNode*) &iedModel_LD0_RDRE2_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_RDRE2_Mod,
    (ModelNode*) &iedModel_LD0_RDRE2_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE2_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_RDRE2,
    (ModelNode*) &iedModel_LD0_RDRE2_Health,
    (ModelNode*) &iedModel_LD0_RDRE2_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE2_Beh,
    (ModelNode*) &iedModel_LD0_RDRE2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE2_Beh,
    (ModelNode*) &iedModel_LD0_RDRE2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE2_Beh,
    (ModelNode*) &iedModel_LD0_RDRE2_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_RDRE2,
    (ModelNode*) &iedModel_LD0_RDRE2_NamPlt,
    (ModelNode*) &iedModel_LD0_RDRE2_Health_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE2_Health,
    (ModelNode*) &iedModel_LD0_RDRE2_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE2_Health,
    (ModelNode*) &iedModel_LD0_RDRE2_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE2_Health,
    (ModelNode*) &iedModel_LD0_RDRE2_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE2_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_RDRE2,
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE2_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD0_RDRE2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_RDRE2_NamPlt,
    (ModelNode*) &iedModel_LD0_RDRE2_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD0_RDRE2_NamPlt,
    (ModelNode*) &iedModel_LD0_RDRE2_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE2_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE2_RcdMade = {
    DataObjectModelType,
    "RcdMade",
    (ModelNode*) &iedModel_LD0_RDRE2,
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE2_RcdMade_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_RcdMade_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_RcdMade_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade,
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_RcdMade_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE2_RcdMade,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_RDRE2_FltNum = {
    DataObjectModelType,
    "FltNum",
    (ModelNode*) &iedModel_LD0_RDRE2,
    NULL,
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum_stVal,
    0
};

DataAttribute iedModel_LD0_RDRE2_FltNum_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_FltNum_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_FltNum_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum,
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_RDRE2_FltNum_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_RDRE2_FltNum,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_XCBR1 = {
    LogicalNodeModelType,
    "XCBR1",
    (ModelNode*) &iedModel_LD0,
    NULL,
    (ModelNode*) &iedModel_LD0_XCBR1_Mod,
};

DataObject iedModel_LD0_XCBR1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_Beh,
    (ModelNode*) &iedModel_LD0_XCBR1_Mod_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_Mod,
    (ModelNode*) &iedModel_LD0_XCBR1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_Mod,
    (ModelNode*) &iedModel_LD0_XCBR1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_Mod,
    (ModelNode*) &iedModel_LD0_XCBR1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_XCBR1_Mod,
    (ModelNode*) &iedModel_LD0_XCBR1_Mod_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Mod_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_Health,
    (ModelNode*) &iedModel_LD0_XCBR1_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_Beh,
    (ModelNode*) &iedModel_LD0_XCBR1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_Beh,
    (ModelNode*) &iedModel_LD0_XCBR1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_Beh,
    (ModelNode*) &iedModel_LD0_XCBR1_Beh_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Beh_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt,
    (ModelNode*) &iedModel_LD0_XCBR1_Health_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_Health,
    (ModelNode*) &iedModel_LD0_XCBR1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_Health,
    (ModelNode*) &iedModel_LD0_XCBR1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_Health,
    (ModelNode*) &iedModel_LD0_XCBR1_Health_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Health_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1,
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_NamPlt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt,
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_NamPlt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt,
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_NamPlt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt,
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_instMag,
    0
};

DataAttribute iedModel_LD0_XCBR1_AnIn1_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_mag,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn1_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_q,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn1_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn1,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_AnIn2 = {
    DataObjectModelType,
    "AnIn2",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_instMag,
    0
};

DataAttribute iedModel_LD0_XCBR1_AnIn2_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_mag,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn2_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn2_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_q,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn2_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn2_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn2,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_AnIn3 = {
    DataObjectModelType,
    "AnIn3",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_instMag,
    0
};

DataAttribute iedModel_LD0_XCBR1_AnIn3_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_mag,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn3_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn3_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_q,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn3_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn3_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn3,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_AnIn4 = {
    DataObjectModelType,
    "AnIn4",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_instMag,
    0
};

DataAttribute iedModel_LD0_XCBR1_AnIn4_instMag = {
    DataAttributeModelType,
    "instMag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_mag,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_instMag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn4_instMag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_instMag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn4_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_q,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn4_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_db,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn4_db = {
    DataAttributeModelType,
    "db",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4,
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4_d,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_INT32U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_AnIn4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_AnIn4,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_SPCSO1 = {
    DataObjectModelType,
    "SPCSO1",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_ctlModel,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_ctlNum,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_origin,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO1,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_SPCSO2 = {
    DataObjectModelType,
    "SPCSO2",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_ctlModel,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_ctlNum,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_origin,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO2,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_SPCSO3 = {
    DataObjectModelType,
    "SPCSO3",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_ctlModel,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_ctlNum,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_origin,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO3,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_SPCSO4 = {
    DataObjectModelType,
    "SPCSO4",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_ctlModel,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_ctlNum,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_origin,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4,
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_SPCSO4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_SPCSO4,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_Ind1 = {
    DataObjectModelType,
    "Ind1",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_Ind1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind1_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind1,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_Ind2 = {
    DataObjectModelType,
    "Ind2",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_Ind2_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind2_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind2_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind2_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind2,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_Ind3 = {
    DataObjectModelType,
    "Ind3",
    (ModelNode*) &iedModel_LD0_XCBR1,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_Ind3_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind3_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind3_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind3_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind3,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_XCBR1_Ind4 = {
    DataObjectModelType,
    "Ind4",
    (ModelNode*) &iedModel_LD0_XCBR1,
    NULL,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4_stVal,
    0
};

DataAttribute iedModel_LD0_XCBR1_Ind4_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind4_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind4_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4,
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4_d,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_XCBR1_Ind4_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD0_XCBR1_Ind4,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_LD0_LLN0_report0;
extern ReportControlBlock iedModel_LD0_LLN0_report1;
extern ReportControlBlock iedModel_LD0_LLN0_report2;
extern ReportControlBlock iedModel_LD0_LLN0_report3;
extern ReportControlBlock iedModel_LD0_LLN0_report4;
extern ReportControlBlock iedModel_LD0_LLN0_report5;
extern ReportControlBlock iedModel_LD0_LLN0_report6;
extern ReportControlBlock iedModel_LD0_LLN0_report7;
extern ReportControlBlock iedModel_LD0_LLN0_report8;
extern ReportControlBlock iedModel_LD0_LLN0_report9;
extern ReportControlBlock iedModel_LD0_LLN0_report10;
extern ReportControlBlock iedModel_LD0_LLN0_report11;
extern ReportControlBlock iedModel_LD0_LLN0_report12;
extern ReportControlBlock iedModel_LD0_LLN0_report13;
extern ReportControlBlock iedModel_LD0_LLN0_report14;
extern ReportControlBlock iedModel_LD0_LLN0_report15;
extern ReportControlBlock iedModel_LD0_LLN0_report16;
extern ReportControlBlock iedModel_LD0_LLN0_report17;
extern ReportControlBlock iedModel_LD0_LLN0_report18;
extern ReportControlBlock iedModel_LD0_LLN0_report19;
extern ReportControlBlock iedModel_LD0_LLN0_report20;
extern ReportControlBlock iedModel_LD0_LLN0_report21;

ReportControlBlock iedModel_LD0_LLN0_report0 = {&iedModel_LD0_LLN0, "urcbSTATUS0101", "urcbSTATUS1", false, "STATUS", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report1};
ReportControlBlock iedModel_LD0_LLN0_report1 = {&iedModel_LD0_LLN0, "urcbSTATUS0201", "urcbSTATUS2", false, "STATUS", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report2};
ReportControlBlock iedModel_LD0_LLN0_report2 = {&iedModel_LD0_LLN0, "urcbSTATUS0301", "urcbSTATUS3", false, "STATUS", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report3};
ReportControlBlock iedModel_LD0_LLN0_report3 = {&iedModel_LD0_LLN0, "urcbSTATUS0401", "urcbSTATUS4", false, "STATUS", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report4};
ReportControlBlock iedModel_LD0_LLN0_report4 = {&iedModel_LD0_LLN0, "urcbMMXU0101", "urcbMMXU1", false, "MMXU", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report5};
ReportControlBlock iedModel_LD0_LLN0_report5 = {&iedModel_LD0_LLN0, "urcbMMXU0201", "urcbMMXU2", false, "MMXU", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report6};
ReportControlBlock iedModel_LD0_LLN0_report6 = {&iedModel_LD0_LLN0, "urcbMMXU0301", "urcbMMXU3", false, "MMXU", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report7};
ReportControlBlock iedModel_LD0_LLN0_report7 = {&iedModel_LD0_LLN0, "urcbMMXU0401", "urcbMMXU4", false, "MMXU", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report8};
ReportControlBlock iedModel_LD0_LLN0_report8 = {&iedModel_LD0_LLN0, "urcbMMTR0101", "urcbMMTR1", false, "MMTR", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report9};
ReportControlBlock iedModel_LD0_LLN0_report9 = {&iedModel_LD0_LLN0, "urcbMMTR0201", "urcbMMTR2", false, "MMTR", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report10};
ReportControlBlock iedModel_LD0_LLN0_report10 = {&iedModel_LD0_LLN0, "urcbMMTR0301", "urcbMMTR3", false, "MMTR", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report11};
ReportControlBlock iedModel_LD0_LLN0_report11 = {&iedModel_LD0_LLN0, "urcbMMTR0401", "urcbMMTR4", false, "MMTR", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report12};
ReportControlBlock iedModel_LD0_LLN0_report12 = {&iedModel_LD0_LLN0, "urcbPQ0101", "urcbPQ1", false, "PQ", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report13};
ReportControlBlock iedModel_LD0_LLN0_report13 = {&iedModel_LD0_LLN0, "urcbPQ0201", "urcbPQ2", false, "PQ", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report14};
ReportControlBlock iedModel_LD0_LLN0_report14 = {&iedModel_LD0_LLN0, "urcbPQ0301", "urcbPQ3", false, "PQ", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report15};
ReportControlBlock iedModel_LD0_LLN0_report15 = {&iedModel_LD0_LLN0, "urcbPQ0401", "urcbPQ4", false, "PQ", 1, 27, 175, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report16};
ReportControlBlock iedModel_LD0_LLN0_report16 = {&iedModel_LD0_LLN0, "brcbGGIO0101", "brcbGGIO1", true, "CUSTOMIO", 2, 27, 239, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report17};
ReportControlBlock iedModel_LD0_LLN0_report17 = {&iedModel_LD0_LLN0, "brcbGGIO0201", "brcbGGIO2", true, "CUSTOMIO", 2, 27, 239, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report18};
ReportControlBlock iedModel_LD0_LLN0_report18 = {&iedModel_LD0_LLN0, "brcbGGIO0301", "brcbGGIO3", true, "CUSTOMIO", 2, 27, 239, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report19};
ReportControlBlock iedModel_LD0_LLN0_report19 = {&iedModel_LD0_LLN0, "brcbGGIO0401", "brcbGGIO4", true, "CUSTOMIO", 2, 27, 239, 1000, 0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report20};
ReportControlBlock iedModel_LD0_LLN0_report20 = {&iedModel_LD0_LLN0, "PersonalEventsRCB01", "Events1", false, "PersonalEvents", 1, 24, 175, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD0_LLN0_report21};
ReportControlBlock iedModel_LD0_LLN0_report21 = {&iedModel_LD0_LLN0, "PersonalEventsBRCB01", "Events2", true, "PersonalEvents", 1, 24, 175, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "ION8650",
    &iedModel_LD0,
    &iedModelds_LD0_LLN0_STATUS,
    &iedModel_LD0_LLN0_report0,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_LD0_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_LLN0_Mod_d.mmsValue = MmsValue_newVisibleString("Meter's Operational Status");

iedModel_LD0_LLN0_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_LLN0_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_LLN0_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_LLN0_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_LLN0_NamPlt_ldNs.mmsValue = MmsValue_newVisibleString("IEC 61850-7-4:2003");

iedModel_LD0_LPHD1_PhyNam_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_LPHD1_PhyNam_location.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_LPHD1_PhyHealth_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_LPHD1_Proxy_stVal.mmsValue = MmsValue_newBoolean(false);

iedModel_LD0_LPHD1_Proxy_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_CUS1_GGIO3_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_CUS1_GGIO3_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_CUS1_GGIO3_AnIn1_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn1_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn2_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn2_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn3_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn3_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn4_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn4_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn5_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn5_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn6_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn6_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn7_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn7_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn8_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn8_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn9_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn9_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn10_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn10_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn11_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn11_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn12_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn12_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn13_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn13_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn14_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn14_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn15_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn15_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS1_GGIO3_AnIn16_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_CUS1_GGIO3_AnIn16_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_CUS2_GGIO4_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_CUS2_GGIO4_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_CUS2_GGIO4_Ind1_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind2_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind3_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind4_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind5_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind6_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind7_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind8_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind9_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind10_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind11_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind12_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind13_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind14_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind15_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_CUS2_GGIO4_Ind16_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_MHAI1_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_MHAI1_Hz_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(33);

iedModel_LD0_MHAI1_Hz_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_Hz_db.mmsValue = MmsValue_newUnsignedFromUint32(100);

iedModel_LD0_MHAI1_Hz_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HA_numHar.mmsValue = MmsValue_newUnsignedFromUint32(50);

iedModel_LD0_MHAI1_HA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HPhV_numHar.mmsValue = MmsValue_newUnsignedFromUint32(50);

iedModel_LD0_MHAI1_HPhV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HPPV_numHar.mmsValue = MmsValue_newUnsignedFromUint32(50);

iedModel_LD0_MHAI1_HPPV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HKf_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_HKf_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_HKf_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_HKf_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HKf_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_HKf_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_HKf_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_HKf_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HKf_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_HKf_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_HKf_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_HKf_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HKf_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdA_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdA_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdA_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdA_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdA_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdA_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdA_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdA_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdA_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdA_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdA_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdA_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddA_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddA_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddA_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddA_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddA_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddA_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddA_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddA_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddA_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddA_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddA_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddA_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnA_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnA_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnA_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnA_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnA_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnA_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnA_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnA_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnA_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnA_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnA_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnA_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPhV_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdPhV_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdPhV_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdPhV_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPhV_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdPhV_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdPhV_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdPhV_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPhV_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdPhV_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdPhV_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdPhV_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPhV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPhV_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddPhV_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddPhV_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddPhV_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPhV_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddPhV_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddPhV_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddPhV_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPhV_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddPhV_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddPhV_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddPhV_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPhV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnPhV_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnPhV_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnPhV_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnPhV_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnPhV_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnPhV_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnPhV_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnPhV_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnPhV_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPhV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPPV_phsAB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdPPV_phsAB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdPPV_phsAB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdPPV_phsAB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPPV_phsBC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdPPV_phsBC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdPPV_phsBC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdPPV_phsBC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPPV_phsCA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdPPV_phsCA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdPPV_phsCA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdPPV_phsCA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdPPV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddPPV_phsAB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddPPV_phsAB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddPPV_phsAB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddPPV_phsBC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddPPV_phsBC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddPPV_phsBC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdOddPPV_phsCA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdOddPPV_phsCA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdOddPPV_phsCA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdOddPPV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnPPV_phsAB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnPPV_phsBC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_ThdEvnPPV_phsCA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_ThdEvnPPV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HCfA_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_HCfA_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_HCfA_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_HCfA_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HCfA_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_HCfA_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_HCfA_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_HCfA_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HCfA_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_MHAI1_HCfA_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MHAI1_HCfA_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MHAI1_HCfA_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MHAI1_HCfA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MMTR1_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_MMTR1_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_MMTR1_TotVAh_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(71);

iedModel_LD0_MMTR1_TotVAh_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MMTR1_TotVAh_pulsQty.mmsValue = MmsValue_newFloat(1000.0);

iedModel_LD0_MMTR1_TotVAh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_TotWh_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(72);

iedModel_LD0_MMTR1_TotWh_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MMTR1_TotWh_pulsQty.mmsValue = MmsValue_newFloat(1000.0);

iedModel_LD0_MMTR1_TotWh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_TotVArh_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(73);

iedModel_LD0_MMTR1_TotVArh_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MMTR1_TotVArh_pulsQty.mmsValue = MmsValue_newFloat(1000.0);

iedModel_LD0_MMTR1_TotVArh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_SupWh_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(72);

iedModel_LD0_MMTR1_SupWh_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MMTR1_SupWh_pulsQty.mmsValue = MmsValue_newFloat(1000.0);

iedModel_LD0_MMTR1_SupWh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_SupVArh_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(73);

iedModel_LD0_MMTR1_SupVArh_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MMTR1_SupVArh_pulsQty.mmsValue = MmsValue_newFloat(1000.0);

iedModel_LD0_MMTR1_SupVArh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_DmdWh_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(72);

iedModel_LD0_MMTR1_DmdWh_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MMTR1_DmdWh_pulsQty.mmsValue = MmsValue_newFloat(1000.0);

iedModel_LD0_MMTR1_DmdWh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MMTR1_DmdVArh_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(73);

iedModel_LD0_MMTR1_DmdVArh_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MMTR1_DmdVArh_pulsQty.mmsValue = MmsValue_newFloat(1000.0);

iedModel_LD0_MMTR1_DmdVArh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_M03_MMXU1_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_M03_MMXU1_TotW_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(38);

iedModel_LD0_M03_MMXU1_TotW_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_TotW_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_TotW_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_TotVAr_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(63);

iedModel_LD0_M03_MMXU1_TotVAr_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_TotVAr_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_TotVAr_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_TotVA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(61);

iedModel_LD0_M03_MMXU1_TotVA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_TotVA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_TotVA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_TotPF_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_M03_MMXU1_TotPF_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_TotPF_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_TotPF_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_Hz_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(33);

iedModel_LD0_M03_MMXU1_Hz_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_Hz_db.mmsValue = MmsValue_newUnsignedFromUint32(100);

iedModel_LD0_M03_MMXU1_Hz_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PPV_phsAB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_M03_MMXU1_PPV_phsAB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PPV_phsAB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PPV_phsAB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PPV_phsBC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_M03_MMXU1_PPV_phsBC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PPV_phsBC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PPV_phsBC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PPV_phsCA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_M03_MMXU1_PPV_phsCA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PPV_phsCA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PPV_phsCA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PPV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PhV_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_M03_MMXU1_PhV_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PhV_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PhV_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PhV_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_M03_MMXU1_PhV_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PhV_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PhV_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PhV_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_M03_MMXU1_PhV_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PhV_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PhV_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PhV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_A_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(33);

iedModel_LD0_M03_MMXU1_A_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_A_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(1);

iedModel_LD0_M03_MMXU1_A_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_A_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(33);

iedModel_LD0_M03_MMXU1_A_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_A_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(1);

iedModel_LD0_M03_MMXU1_A_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_A_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(33);

iedModel_LD0_M03_MMXU1_A_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_A_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(1);

iedModel_LD0_M03_MMXU1_A_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_A_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_W_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(38);

iedModel_LD0_M03_MMXU1_W_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_W_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_W_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_W_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(38);

iedModel_LD0_M03_MMXU1_W_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_W_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_W_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_W_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(38);

iedModel_LD0_M03_MMXU1_W_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_W_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_W_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_W_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VAr_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(63);

iedModel_LD0_M03_MMXU1_VAr_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_VAr_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_VAr_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VAr_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(63);

iedModel_LD0_M03_MMXU1_VAr_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_VAr_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_VAr_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VAr_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(63);

iedModel_LD0_M03_MMXU1_VAr_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_VAr_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_VAr_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VAr_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VA_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(61);

iedModel_LD0_M03_MMXU1_VA_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_VA_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_VA_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VA_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(61);

iedModel_LD0_M03_MMXU1_VA_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_VA_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_VA_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VA_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(61);

iedModel_LD0_M03_MMXU1_VA_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_M03_MMXU1_VA_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_VA_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_VA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PF_phsA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_M03_MMXU1_PF_phsA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PF_phsA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PF_phsA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PF_phsB_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_M03_MMXU1_PF_phsB_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PF_phsB_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PF_phsB_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PF_phsC_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_M03_MMXU1_PF_phsC_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_M03_MMXU1_PF_phsC_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_M03_MMXU1_PF_phsC_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_M03_MMXU1_PF_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_MSQI1_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_MSQI1_SeqA_c1_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(5);

iedModel_LD0_MSQI1_SeqA_c1_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqA_c1_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSQI1_SeqA_c1_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_SeqA_c2_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(5);

iedModel_LD0_MSQI1_SeqA_c2_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqA_c2_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSQI1_SeqA_c2_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_SeqA_c3_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(5);

iedModel_LD0_MSQI1_SeqA_c3_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqA_c3_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSQI1_SeqA_c3_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_SeqA_seqT.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_SeqV_c1_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_MSQI1_SeqV_c1_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqV_c1_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSQI1_SeqV_c1_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_SeqV_c2_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_MSQI1_SeqV_c2_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqV_c2_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSQI1_SeqV_c2_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_SeqV_c3_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(29);

iedModel_LD0_MSQI1_SeqV_c3_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqV_c3_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSQI1_SeqV_c3_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSQI1_SeqV_seqT.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSQI1_SeqV_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_MSTA1_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_MSTA1_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_MSTA1_AvVA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(61);

iedModel_LD0_MSTA1_AvVA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_AvVA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_AvVA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_MaxVA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(61);

iedModel_LD0_MSTA1_MaxVA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_MaxVA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_MaxVA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_MinVA_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(61);

iedModel_LD0_MSTA1_MinVA_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_MinVA_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_MinVA_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_AvW_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(38);

iedModel_LD0_MSTA1_AvW_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_AvW_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_AvW_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_MaxW_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(38);

iedModel_LD0_MSTA1_MaxW_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_MaxW_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_MaxW_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_MinW_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(38);

iedModel_LD0_MSTA1_MinW_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_MinW_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_MinW_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_AvVAr_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(63);

iedModel_LD0_MSTA1_AvVAr_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_AvVAr_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_AvVAr_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_MaxVAr_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(63);

iedModel_LD0_MSTA1_MaxVAr_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_MaxVAr_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_MaxVAr_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_MSTA1_MinVAr_units_SIUnit.mmsValue = MmsValue_newIntegerFromInt32(63);

iedModel_LD0_MSTA1_MinVAr_units_multiplier.mmsValue = MmsValue_newIntegerFromInt32(3);

iedModel_LD0_MSTA1_MinVAr_db.mmsValue = MmsValue_newUnsignedFromUint32(10);

iedModel_LD0_MSTA1_MinVAr_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_RDRE1_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE1_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE1_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE1_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_RDRE1_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_RDRE1_RcdMade_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE1_FltNum_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_RDRE2_Mod_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE2_Beh_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE2_Health_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE2_NamPlt_vendor.mmsValue = MmsValue_newVisibleString("Schneider Electric");

iedModel_LD0_RDRE2_NamPlt_d.mmsValue = MmsValue_newVisibleString("High End Meter");

iedModel_LD0_RDRE2_RcdMade_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_RDRE2_FltNum_d.mmsValue = MmsValue_newVisibleString("To be filled by the customer");

iedModel_LD0_XCBR1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_XCBR1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD0_XCBR1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_XCBR1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_XCBR1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_XCBR1_SPCSO2_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_XCBR1_SPCSO3_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD0_XCBR1_SPCSO4_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
}
