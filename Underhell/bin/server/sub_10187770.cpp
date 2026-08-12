int *sub_10187770()
{
  if ( (dword_106B6DA4 & 1) == 0 )
  {
    dword_106B6DA4 |= 1u;
    dword_106B6D88 = (int)"CNPCSpawnDestination";
    dword_106B6D90 = 0;
    dword_106B6D94 = 0;
    dword_106B6D98 = 0;
    dword_106B6D9C = 0;
    dword_106B6DA0 = 0;
    dword_106B6D8C = 20;
    atexit(sub_10472140);
  }
  dword_10631328 = (int)&dword_1060F348;
  if ( (dword_106B6DA4 & 2) == 0 )
  {
    dword_106B6DA4 |= 2u;
    dword_10631588 = (int)off_10614A2C;
    dword_1063158C = 0;
    dword_10631590 = 0;
    dword_10631594 = 0;
    dword_10631598 = 0;
    dword_1063159C = 0;
    dword_106315A0 = 0;
  }
  dword_10631320 = 4;
  dword_1063131C = (int)&unk_106314D4;
  return &dword_1063131C;
}
