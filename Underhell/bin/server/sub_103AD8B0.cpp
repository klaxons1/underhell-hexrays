int *sub_103AD8B0()
{
  if ( (dword_106EAD40 & 1) == 0 )
  {
    dword_106EAD40 |= 1u;
    dword_106EAD24 = (int)"CNPC_Stalker";
    dword_106EAD2C = 0;
    dword_106EAD30 = 0;
    dword_106EAD34 = 0;
    dword_106EAD38 = 0;
    dword_106EAD3C = 0;
    dword_106EAD28 = 12;
    atexit(sub_10478A70);
  }
  dword_1067990C = (int)&dword_105FE114;
  if ( (dword_106EAD40 & 2) == 0 )
  {
    dword_106EAD40 |= 2u;
    dword_10679D58 = (int)sub_100390B0((char **)&dword_106EAD24, "StalkerThink");
    dword_10679D5C = 0;
    dword_10679D60 = 0;
    dword_10679D64 = 2097153;
    dword_10679D68 = 0;
    dword_10679D6C = 0;
    dword_10679D70 = (int)sub_103AD800;
    dword_10679D74 = 0;
    dword_10679D78 = 0;
    dword_10679D7C = 0;
    dword_10679D80 = 0;
    dword_10679D84 = 0;
  }
  dword_10679904 = 19;
  dword_10679900 = (int)&unk_106799AC;
  return &dword_10679900;
}
