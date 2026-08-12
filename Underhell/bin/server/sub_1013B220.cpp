int *sub_1013B220()
{
  if ( (dword_106B002C & 1) == 0 )
  {
    dword_106B002C |= 1u;
    dword_106B0010 = (int)"CPhysicsShake";
    dword_106B0018 = 0;
    dword_106B001C = 0;
    dword_106B0020 = 0;
    dword_106B0024 = 0;
    dword_106B0028 = 0;
    dword_106B0014 = 13;
    atexit(sub_10470FB0);
  }
  dword_106218E0 = 0;
  dword_106218D8 = 1;
  dword_106218D4 = (int)&unk_1062199C;
  return &dword_106218D4;
}
