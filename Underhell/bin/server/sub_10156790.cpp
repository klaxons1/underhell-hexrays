char __thiscall sub_10156790(float *this, char *String1, int a3, int a4, int a5, void **a6, char a7)
{
  char result; // al
  int v9; // eax

  sub_101356E0();
  sub_101541B0((int)String1);
  sub_101AB730((char)String1, 0);
  if ( (_BYTE)a6 )
  {
    *(_DWORD *)(dword_106B31C8 + 72) = (a4 != 0) + 1;
    sub_10156350();
    if ( !(*(unsigned __int8 (__thiscall **)(int, char *, int))(*(_DWORD *)dword_106B31D0 + 268))(
            dword_106B31D0,
            String1,
            1) )
    {
      if ( !a4 )
        return 0;
      sub_10181AF0(a3, 0, 0);
    }
    if ( a4 )
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 272))(dword_106B31D0, a4, a5);
    if ( byte_106B3250 )
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 332))(dword_106B31D0);
  }
  else
  {
    *(_DWORD *)(dword_106B31C8 + 72) = a7 != 0 ? 3 : 0;
    sub_101357D0(&dword_10627CF4);
    v9 = dword_10627CF4;
    if ( dword_10627CFC >= 0 )
    {
      if ( dword_10627CF4 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, dword_10627CF4);
        v9 = 0;
        dword_10627CF4 = 0;
      }
      dword_10627CF8 = 0;
    }
    dword_10627D0C = v9;
    word_10627D04 = -1;
    word_10627D08 = -1;
    a6 = &CMapLoadEntityFilter::`vftable';
    sub_10181AF0(a3, &a6, 0);
    ((void (__thiscall *)(_UNKNOWN ***))**off_1064A4E0)(off_1064A4E0);
    nullsub_5(a3);
  }
  sub_10218120(String1);
  sub_10202210();
  sub_10154080();
  sub_1012CE60();
  result = 1;
  flt_1060B428 = 0.0;
  dword_1060B42C = -1;
  flt_1060B430 = 0.0;
  dword_1060B434 = -1;
  this[1] = 0.0;
  this[2] = 0.0;
  byte_106B3250 = 0;
  return result;
}
