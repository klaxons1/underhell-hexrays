void __cdecl sub_1011BB60(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  _DWORD v9[3]; // [esp+4h] [ebp-Ch] BYREF

  *(float *)v9 = flt_106F1CB4;
  *(float *)&v9[2] = flt_106F1CBC;
  *(float *)&v9[1] = sub_10265030(a4);
  if ( dword_106B3200 )
    (*(void (__thiscall **)(int, int, int, int, _DWORD *, int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3200 + 4))(
      dword_106B3200,
      a1,
      a2,
      a3,
      v9,
      a5,
      a6,
      a7,
      a8,
      LODWORD(a9));
}
