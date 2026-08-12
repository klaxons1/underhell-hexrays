int *sub_101FE3E0()
{
  if ( (dword_106C152C & 1) == 0 )
  {
    dword_106C152C |= 1u;
    dword_106C1510 = (int)"CPointDevShotCamera";
    dword_106C1518 = 0;
    dword_106C151C = 0;
    dword_106C1520 = 0;
    dword_106C1524 = 0;
    dword_106C1528 = 0;
    dword_106C1514 = 19;
    atexit(sub_10473790);
  }
  dword_106403DC = (int)&dword_1060F348;
  if ( (dword_106C152C & 2) == 0 )
  {
    dword_106C152C |= 2u;
    dword_106C1410 = (int)sub_100390B0((char **)&dword_106C1510, "DevShotThink_Setup");
    dword_106C1414 = 0;
    dword_106C1418 = 0;
    dword_106C141C = 2097153;
    dword_106C1420 = 0;
    dword_106C1424 = 0;
    dword_106C1428 = (int)sub_101FE210;
    dword_106C142C = 0;
    dword_106C1430 = 0;
    dword_106C1434 = 0;
    dword_106C1438 = 0;
    dword_106C143C = 0;
    dword_106C1440 = 0;
    dword_106C1444 = (int)sub_100390B0((char **)&dword_106C1510, "DevShotThink_TakeShot");
    dword_106C1448 = 0;
    dword_106C144C = 0;
    dword_106C1450 = 2097153;
    dword_106C1454 = 0;
    dword_106C1458 = 0;
    dword_106C145C = (int)sub_101FE170;
    dword_106C1460 = 0;
    dword_106C1464 = 0;
    dword_106C1468 = 0;
    dword_106C146C = 0;
    dword_106C1470 = 0;
    dword_106C1474 = 0;
    dword_106C1478 = (int)sub_100390B0((char **)&dword_106C1510, "DevShotThink_PostShot");
    flt_106C14D8 = 0.0;
    flt_106C150C = 0.0;
    dword_106C1494 = 0;
    dword_106C1498 = 0;
    dword_106C149C = 0;
    dword_106C14A0 = 0;
    dword_106C14A4 = 0;
    dword_106C147C = 0;
    dword_106C1480 = 0;
    dword_106C1484 = 2097153;
    dword_106C1488 = 0;
    dword_106C148C = 0;
    dword_106C1490 = (int)sub_101FDE80;
    dword_106C14A8 = 2;
    dword_106C14AC = (int)"m_iszCameraName";
    dword_106C14B0 = 800;
    dword_106C14B4 = 0;
    dword_106C14B8 = 393217;
    dword_106C14BC = (int)"cameraname";
    dword_106C14C0 = 0;
    dword_106C14C4 = 0;
    dword_106C14C8 = 0;
    dword_106C14CC = 4;
    dword_106C14D0 = 0;
    dword_106C14D4 = 0;
    dword_106C14DC = 5;
    dword_106C14E0 = (int)"m_iFOV";
    dword_106C14E4 = 804;
    dword_106C14E8 = 0;
    dword_106C14EC = 393217;
    dword_106C14F0 = (int)"FOV";
    dword_106C14F4 = 0;
    dword_106C14F8 = 0;
    dword_106C14FC = 0;
    dword_106C1500 = 4;
    dword_106C1504 = 0;
    dword_106C1508 = 0;
  }
  dword_106403D4 = 5;
  dword_106403D0 = (int)&unk_106C140C;
  return &dword_106403D0;
}
