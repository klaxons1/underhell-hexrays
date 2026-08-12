int *sub_1026D450()
{
  if ( (dword_106CEEA4 & 1) == 0 )
  {
    dword_106CEEA4 |= 1u;
    dword_106CEE88 = (int)"vehiclesounds_t";
    dword_106CEE90 = 0;
    dword_106CEE94 = 0;
    dword_106CEE98 = 0;
    dword_106CEE9C = 0;
    dword_106CEEA0 = 0;
    dword_106CEE8C = 15;
    atexit(sub_10474AD0);
  }
  dword_10654974 = 0;
  if ( (dword_106CEEA4 & 2) == 0 )
  {
    dword_106CEEA4 |= 2u;
    if ( (dword_106CEE34 & 1) == 0 )
    {
      dword_106CEE34 |= 1u;
      dword_106CEE30 = (int)&CUtlVectorDataOps<CUtlVector<vehicle_gear_t,CUtlMemory<vehicle_gear_t,int>>,10>::`vftable';
    }
    dword_10654E18 = 0;
    dword_10654E1C = 0;
    dword_10654E20 = 0;
    dword_10654E24 = 0;
    dword_10654E28 = 0;
    dword_10654E10 = (int)&dword_106CEE30;
    dword_10654E14 = 0;
    dword_10654E2C = 11;
    dword_10654E30 = (int)"crashSounds";
    dword_10654E34 = 24;
    dword_10654E38 = 0;
    word_10654E3C = 1;
    word_10654E3E = 2;
    dword_10654E40 = 0;
    if ( (dword_106CEE3C & 1) == 0 )
    {
      dword_106CEE3C |= 1u;
      dword_106CEE38 = (int)&CUtlVectorDataOps<CUtlVector<vehicle_crashsound_t,CUtlMemory<vehicle_crashsound_t,int>>,10>::`vftable';
    }
    flt_10654E90 = 0.0;
    dword_10654E4C = 0;
    flt_10654EC4 = 0.0;
    dword_10654E50 = 0;
    dword_10654E54 = 0;
    dword_10654E58 = 0;
    dword_10654E5C = 0;
    word_10654E70 = 20;
    dword_10654E44 = (int)&dword_106CEE38;
    dword_10654E48 = 0;
    dword_10654E60 = 2;
    dword_10654E64 = (int)"iszStateSounds";
    dword_10654E68 = 80;
    dword_10654E6C = 0;
    word_10654E72 = 2;
    dword_10654E74 = 0;
    dword_10654E78 = 0;
    dword_10654E7C = 0;
    dword_10654E80 = 0;
    dword_10654E84 = 80;
    dword_10654E88 = 0;
    dword_10654E8C = 0;
    dword_10654E94 = 1;
    dword_10654E98 = (int)"minStateTime";
    dword_10654E9C = 160;
    dword_10654EA0 = 0;
    dword_10654EA4 = 131092;
    dword_10654EA8 = 0;
    dword_10654EAC = 0;
    dword_10654EB0 = 0;
    dword_10654EB4 = 0;
    dword_10654EB8 = 80;
    dword_10654EBC = 0;
    dword_10654EC0 = 0;
  }
  dword_1065496C = 5;
  dword_10654968 = (int)&unk_10654DC4;
  return &dword_10654968;
}
