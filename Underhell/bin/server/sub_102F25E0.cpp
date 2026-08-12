int *sub_102F25E0()
{
  if ( (dword_106E25F8 & 1) == 0 )
  {
    dword_106E25F8 |= 1u;
    dword_106E25DC = (int)"CLookDoor";
    dword_106E25E4 = 0;
    dword_106E25E8 = 0;
    dword_106E25EC = 0;
    dword_106E25F0 = 0;
    dword_106E25F4 = 0;
    dword_106E25E0 = 9;
    atexit(sub_104776A0);
  }
  dword_1066987C = (int)&dword_10626C40;
  if ( (dword_106E25F8 & 2) == 0 )
  {
    dword_106E25F8 |= 2u;
    dword_10669B38 = (int)sub_100390B0((char **)&dword_106E25DC, "MoveThink");
    dword_10669B3C = 0;
    dword_10669B40 = 0;
    dword_10669B44 = 2097153;
    dword_10669B48 = 0;
    dword_10669B4C = 0;
    dword_10669B50 = (int)sub_102F1F40;
    dword_10669B54 = 0;
    dword_10669B58 = 0;
    dword_10669B5C = 0;
    dword_10669B60 = 0;
    dword_10669B64 = 0;
  }
  dword_10669874 = 7;
  dword_10669870 = (int)&unk_106699FC;
  return &dword_10669870;
}
