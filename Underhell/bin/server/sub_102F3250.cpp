int *sub_102F3250()
{
  if ( (dword_106E26CC & 1) == 0 )
  {
    dword_106E26CC |= 1u;
    dword_106E26B0 = (int)"CNPC_Advisor";
    dword_106E26B8 = 0;
    dword_106E26BC = 0;
    dword_106E26C0 = 0;
    dword_106E26C4 = 0;
    dword_106E26C8 = 0;
    dword_106E26B4 = 12;
    atexit(sub_104776F0);
  }
  dword_10669C6C = (int)&dword_105FE114;
  if ( (dword_106E26CC & 2) == 0 )
  {
    dword_106E26CC |= 2u;
    dword_10669F60 = (int)sub_101D3250(8);
    flt_10669FAC = 0.0;
    dword_10669F68 = 0;
    dword_10669F6C = 0;
    dword_10669F70 = 0;
    dword_10669F74 = 0;
    dword_10669F78 = 0;
    word_10669F8C = 1;
    dword_10669F64 = 0;
    dword_10669F7C = 10;
    dword_10669F80 = (int)"m_levitateCallback";
    dword_10669F84 = 3668;
    dword_10669F88 = 0;
    word_10669F8E = 2;
    dword_10669F90 = 0;
    dword_10669F94 = 0;
    dword_10669F98 = 0;
    dword_10669F9C = (int)&dword_10669C48;
    dword_10669FA0 = 36;
    dword_10669FA4 = 0;
    dword_10669FA8 = 0;
    dword_10669FB0 = 11;
    dword_10669FB4 = (int)"m_physicsObjects";
    dword_10669FB8 = 3644;
    dword_10669FBC = 0;
    word_10669FC0 = 1;
    word_10669FC2 = 2;
    dword_10669FC4 = 0;
    if ( (dword_106950B0 & 1) == 0 )
    {
      dword_106950B0 |= 1u;
      dword_106950AC = (int)&CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,13>::`vftable';
    }
    flt_1066A014 = 0.0;
    dword_10669FD0 = 0;
    flt_1066A048 = 0.0;
    dword_10669FD4 = 0;
    flt_1066A07C = 0.0;
    dword_10669FD8 = 0;
    dword_10669FDC = 0;
    dword_10669FE0 = 0;
    word_10669FF4 = 1;
    word_10669FF6 = 2;
    word_1066A028 = 1;
    dword_10669FC8 = (int)&dword_106950AC;
    dword_10669FCC = 0;
    dword_10669FE4 = 13;
    dword_10669FE8 = (int)"m_hLevitateGoal1";
    dword_10669FEC = 3704;
    dword_10669FF0 = 0;
    dword_10669FF8 = 0;
    dword_10669FFC = 0;
    dword_1066A000 = 0;
    dword_1066A004 = 0;
    dword_1066A008 = 4;
    dword_1066A00C = 0;
    dword_1066A010 = 0;
    dword_1066A018 = 13;
    dword_1066A01C = (int)"m_hLevitateGoal2";
    dword_1066A020 = 3708;
    dword_1066A024 = 0;
    word_1066A02A = 2;
    dword_1066A02C = 0;
    dword_1066A030 = 0;
    dword_1066A034 = 0;
    dword_1066A038 = 0;
    dword_1066A03C = 4;
    dword_1066A040 = 0;
    dword_1066A044 = 0;
    dword_1066A04C = 13;
    dword_1066A050 = (int)"m_hLevitationArea";
    dword_1066A054 = 3712;
    dword_1066A058 = 0;
    dword_1066A05C = 131073;
    dword_1066A060 = 0;
    dword_1066A064 = 0;
    dword_1066A068 = 0;
    dword_1066A06C = 0;
    dword_1066A070 = 4;
    dword_1066A074 = 0;
    dword_1066A078 = 0;
  }
  dword_10669C64 = 9;
  dword_10669C60 = (int)&unk_10669EAC;
  return &dword_10669C60;
}
