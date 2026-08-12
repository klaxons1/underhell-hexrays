int *sub_100FB540()
{
  if ( (dword_1069A0B8 & 1) == 0 )
  {
    dword_1069A0B8 |= 1u;
    dword_1069A09C = (int)"CBeam";
    dword_1069A0A4 = 0;
    dword_1069A0A8 = 0;
    dword_1069A0AC = 0;
    dword_1069A0B0 = 0;
    dword_1069A0B4 = 0;
    dword_1069A0A0 = 5;
    atexit(sub_104701B0);
  }
  dword_10612974 = (int)&dword_1060F348;
  dword_1061296C = 28;
  dword_10612968 = (int)&unk_10612A4C;
  return &dword_10612968;
}
