int *sub_103FD5A0()
{
  if ( (dword_106F0348 & 1) == 0 )
  {
    dword_106F0348 |= 1u;
    dword_106F032C = (int)"CWeaponPhysCannon";
    dword_106F0334 = 0;
    dword_106F0338 = 0;
    dword_106F033C = 0;
    dword_106F0340 = 0;
    dword_106F0344 = 0;
    dword_106F0330 = 17;
    atexit(sub_10479930);
  }
  dword_10685674 = (int)&dword_106609CC;
  if ( (dword_106F0348 & 2) == 0 )
  {
    dword_106F0348 |= 2u;
    dword_106863A0 = (int)sub_1023DBB0();
    flt_106863EC = 0.0;
    dword_106863A8 = 0;
    dword_106863AC = 0;
    dword_106863B0 = 0;
    dword_106863B4 = 0;
    dword_106863B8 = 0;
    word_106863CC = 1;
    dword_106863A4 = 0;
    dword_106863BC = 10;
    dword_106863C0 = (int)"m_grabController";
    dword_106863C4 = 1500;
    dword_106863C8 = 0;
    word_106863CE = 2;
    dword_106863D0 = 0;
    dword_106863D4 = 0;
    dword_106863D8 = 0;
    dword_106863DC = (int)&dword_1068561C;
    dword_106863E0 = 8328;
    dword_106863E4 = 0;
    dword_106863E8 = 0;
    dword_106863F0 = 11;
    dword_106863F4 = (int)"m_grabController.m_controller";
    dword_106863F8 = 9820;
    dword_106863FC = 0;
    word_10686400 = 1;
    word_10686402 = 2;
    dword_10686404 = 0;
    dword_10686408 = (int)sub_101D3250(8);
    dword_1068640C = 0;
    dword_10686410 = 0;
    dword_10686414 = 0;
    dword_10686418 = 0;
    dword_1068641C = 0;
    dword_10686420 = 0;
    dword_10686424 = 0;
    dword_10686428 = (int)sub_100390B0((char **)&dword_106F032C, "WaitForUpgradeThink");
    dword_10686444 = 0;
    dword_10686448 = 0;
    dword_1068644C = 0;
    dword_10686450 = 0;
    dword_10686454 = 0;
    dword_1068642C = 0;
    dword_10686430 = 0;
    dword_10686434 = 2097153;
    dword_10686438 = 0;
    dword_1068643C = 0;
    dword_10686440 = (int)sub_103FCF80;
    dword_10686458 = 11;
    dword_1068645C = (int)"m_ThrownEntities";
    dword_10686460 = 9836;
    dword_10686464 = 0;
    word_10686468 = 1;
    word_1068646A = 2;
    dword_1068646C = 0;
    if ( (dword_106F02A8 & 1) == 0 )
    {
      dword_106F02A8 |= 1u;
      dword_106F02A4 = (int)&CUtlVectorDataOps<CUtlVector<thrown_objects_t,CUtlMemory<thrown_objects_t,int>>,10>::`vftable';
    }
    flt_106864BC = 0.0;
    dword_10686470 = (int)&dword_106F02A4;
    dword_10686474 = 0;
    dword_10686478 = 0;
    dword_1068647C = 0;
    dword_10686480 = 0;
    dword_10686484 = 0;
    dword_10686488 = 0;
    dword_1068648C = 16;
    dword_10686490 = (int)"m_flTimeNextObjectPurge";
    dword_10686494 = 9856;
    dword_10686498 = 0;
    dword_1068649C = 131073;
    dword_106864A0 = 0;
    dword_106864A4 = 0;
    dword_106864A8 = 0;
    dword_106864AC = 0;
    dword_106864B0 = 4;
    dword_106864B4 = 0;
    dword_106864B8 = 0;
  }
  dword_1068566C = 25;
  dword_10685668 = (int)&unk_10685FAC;
  return &dword_10685668;
}
