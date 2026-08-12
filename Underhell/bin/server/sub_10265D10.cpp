void __cdecl sub_10265D10(float *a1, float *a2, int a3, int a4)
{
  int i; // eax
  int v6; // esi
  float v7; // [esp+20h] [ebp-10h]

  for ( i = dword_106E1C58; i; i = *(_DWORD *)(i + 4) )
    *(_DWORD *)(i + 12) = 0;
  if ( a3 != -1 && !(a3 ? *(_DWORD *)(dword_106CE75C + 48) == 0 : *(_DWORD *)(dword_106CE6CC + 48) == 0) )
  {
    v6 = a4;
    if ( a4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
        v6 = 5 * a4;
      if ( v6 > 255 )
        v6 = 255;
      if ( a3 == 3 )
      {
        ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
          off_1061B7A0,
          a1,
          1,
          1,
          0);
        if ( ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               0.0,
               2.0) >= 1.0 )
        {
          v7 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 10, 15);
          sub_1025F3A0((int)a1, v7, 10.0);
        }
      }
      else
      {
        sub_10265280(a1, a2, a3, v6);
      }
    }
  }
}
