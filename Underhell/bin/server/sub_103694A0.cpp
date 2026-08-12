int *sub_103694A0()
{
  if ( (dword_106E8088 & 1) == 0 )
  {
    dword_106E8088 |= 1u;
    dword_106E806C = (int)"CNPC_Fisherman";
    dword_106E8074 = 0;
    dword_106E8078 = 0;
    dword_106E807C = 0;
    dword_106E8080 = 0;
    dword_106E8084 = 0;
    dword_106E8070 = 14;
    atexit(sub_10478240);
  }
  dword_10673884 = (int)&dword_106775B0;
  dword_1067387C = 1;
  dword_10673878 = (int)&unk_1067390C;
  return &dword_10673878;
}
