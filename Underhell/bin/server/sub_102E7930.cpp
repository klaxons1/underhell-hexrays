int *sub_102E7930()
{
  if ( (dword_106E16E0 & 1) == 0 )
  {
    dword_106E16E0 |= 1u;
    dword_106E16C4 = (int)"CTriggerWateryDeath";
    dword_106E16CC = 0;
    dword_106E16D0 = 0;
    dword_106E16D4 = 0;
    dword_106E16D8 = 0;
    dword_106E16DC = 0;
    dword_106E16C8 = 19;
    atexit(sub_104774F0);
  }
  dword_10667830 = (int)&dword_1065151C;
  if ( (dword_106E16E0 & 2) == 0 )
  {
    dword_106E16E0 |= 2u;
    if ( (dword_106E15A4 & 1) == 0 )
    {
      dword_106E15A4 |= 1u;
      dword_106E15A0 = (int)&CUtlVectorDataOps<CUtlVector<float,CUtlMemory<float,int>>,16>::`vftable';
    }
    dword_10667EA4 = 0;
    dword_10667EA8 = 0;
    dword_10667EAC = 0;
    dword_10667EB0 = 0;
    dword_10667EB4 = 0;
    word_10667EC8 = 1;
    dword_10667E9C = (int)&dword_106E15A0;
    dword_10667EA0 = 0;
    dword_10667EB8 = 11;
    dword_10667EBC = (int)"m_hLeeches";
    dword_10667EC0 = 1092;
    dword_10667EC4 = 0;
    word_10667ECA = 2;
    dword_10667ECC = 0;
    if ( (dword_106950B0 & 1) == 0 )
    {
      dword_106950B0 |= 1u;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    dword_10667ED8 = 0;
    flt_10667F1C = 0.0;
    dword_10667EDC = 0;
    flt_10667F50 = 0.0;
    dword_10667EE0 = 0;
    dword_10667EE4 = 0;
    dword_10667EE8 = 0;
    word_10667EFC = 1;
    dword_10667ED0 = (int)&dword_106950AC;
    dword_10667ED4 = 0;
    dword_10667EEC = 16;
    dword_10667EF0 = (int)"m_flNextPullSound";
    dword_10667EF4 = 1132;
    dword_10667EF8 = 0;
    word_10667EFE = 2;
    dword_10667F00 = 0;
    dword_10667F04 = 0;
    dword_10667F08 = 0;
    dword_10667F0C = 0;
    dword_10667F10 = 4;
    dword_10667F14 = 0;
    dword_10667F18 = 0;
    dword_10667F20 = 1;
    dword_10667F24 = (int)"m_flPainValue";
    dword_10667F28 = 1136;
    dword_10667F2C = 0;
    dword_10667F30 = 131073;
    dword_10667F34 = 0;
    dword_10667F38 = 0;
    dword_10667F3C = 0;
    dword_10667F40 = 0;
    dword_10667F44 = 4;
    dword_10667F48 = 0;
    dword_10667F4C = 0;
  }
  dword_10667828 = 4;
  dword_10667824 = (int)&unk_10667E84;
  return &dword_10667824;
}
