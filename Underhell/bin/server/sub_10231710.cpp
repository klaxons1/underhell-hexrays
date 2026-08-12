_DWORD *__stdcall sub_10231710(int *a1, __int16 a2)
{
  int v2; // eax

  v2 = a1[584];
  if ( v2 != 7 && v2 != 1 )
    a1[584] = 1;
  if ( sub_10043EC0(a1)
    && (*(_DWORD *)sub_10043EC0(a1) == 116 || *(_DWORD *)sub_10043EC0(a1) == 117)
    && (a2 & 0x400) == 0
    && (a1[64] & 0x400) != 0 )
  {
    sub_100EA9A0(a1, 1024);
  }
  return sub_10044510((int)a1, (int)"Finished scripted sequence");
}
