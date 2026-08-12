int *sub_103BCB40()
{
  if ( (dword_106EBB6C & 1) == 0 )
  {
    dword_106EBB6C |= 1u;
    dword_106EBB50 = (int)"CNPCSimpleTalker";
    dword_106EBB58 = 0;
    dword_106EBB5C = 0;
    dword_106EBB60 = 0;
    dword_106EBB64 = 0;
    dword_106EBB68 = 0;
    dword_106EBB54 = 16;
    atexit(sub_10478D00);
  }
  dword_1067B370 = (int)&dword_10609D78;
  if ( (dword_106EBB6C & 2) == 0 )
  {
    dword_106EBB6C |= 2u;
    dword_1067B5E4 = (int)sub_100390B0((char **)&dword_106EBB50, "FollowerUse");
    dword_1067B5E8 = 0;
    dword_1067B5EC = 0;
    dword_1067B5F0 = 2097153;
    dword_1067B5F4 = 0;
    dword_1067B5F8 = 0;
    dword_1067B5FC = (int)sub_103BCAB0;
    dword_1067B600 = 0;
    dword_1067B604 = 0;
    dword_1067B608 = 0;
    dword_1067B60C = 0;
    dword_1067B610 = 0;
  }
  dword_1067B368 = 6;
  dword_1067B364 = (int)&unk_1067B4DC;
  return &dword_1067B364;
}
