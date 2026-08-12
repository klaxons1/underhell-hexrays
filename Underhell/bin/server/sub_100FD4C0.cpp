int *sub_100FD4C0()
{
  if ( (dword_1069A4F8 & 1) == 0 )
  {
    dword_1069A4F8 |= 1u;
    dword_1069A4DC = (int)"CFuncVPhysicsClip";
    dword_1069A4E4 = 0;
    dword_1069A4E8 = 0;
    dword_1069A4EC = 0;
    dword_1069A4F0 = 0;
    dword_1069A4F4 = 0;
    dword_1069A4E0 = 17;
    atexit(sub_10470270);
  }
  dword_10613088 = (int)&dword_1060F348;
  dword_10613080 = 5;
  dword_1061307C = (int)&unk_10613594;
  return &dword_1061307C;
}
