int *sub_10369940()
{
  if ( (dword_106E80DC & 1) == 0 )
  {
    dword_106E80DC |= 1u;
    dword_106E80C0 = (int)"CNPC_GMan";
    dword_106E80C8 = 0;
    dword_106E80CC = 0;
    dword_106E80D0 = 0;
    dword_106E80D4 = 0;
    dword_106E80D8 = 0;
    dword_106E80C4 = 9;
    atexit(sub_10478250);
  }
  dword_1067396C = (int)&dword_10609D78;
  dword_10673964 = 1;
  dword_10673960 = (int)&unk_106E808C;
  return &dword_10673960;
}
