int __cdecl sub_101F42F0(char *Source, int a2, int a3)
{
  int result; // eax
  int v4; // eax

  result = sub_10278EF0(Source);
  if ( (_BYTE)result )
  {
    dword_10464FAC = sub_101F42B0(a3, (int)"VMaterialSystem079", a2);
    dword_10464FB8 = sub_101F42B0(a3, (int)"MatSystemSurface006", a2);
    dword_10464FB4 = sub_101F42B0(a3, (int)"MDLCache004", a2);
    dword_10464FBC = sub_101F42B0(a3, (int)"VStudioRender025", a2);
    v4 = sub_101F42B0(a3, (int)"MaterialSystemHardwareConfig012", a2);
    dword_10464FB0 = v4;
    return dword_10464FAC && dword_10464FB8 && v4;
  }
  return result;
}
