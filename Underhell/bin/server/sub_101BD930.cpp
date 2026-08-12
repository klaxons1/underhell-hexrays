int *sub_101BD930()
{
  if ( (dword_106BA488 & 1) == 0 )
  {
    dword_106BA488 |= 1u;
    dword_106BA46C = (int)"CBoneFollower";
    dword_106BA474 = 0;
    dword_106BA478 = 0;
    dword_106BA47C = 0;
    dword_106BA480 = 0;
    dword_106BA484 = 0;
    dword_106BA470 = 13;
    atexit(sub_10472F40);
  }
  dword_10637AC0 = (int)&dword_1060F348;
  dword_10637AB8 = 4;
  dword_10637AB4 = (int)&unk_10637D0C;
  return &dword_10637AB4;
}
