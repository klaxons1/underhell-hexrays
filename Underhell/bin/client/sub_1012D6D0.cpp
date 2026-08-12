void __cdecl sub_1012D6D0(float *a1, float *a2, int a3, int a4)
{
  int i; // eax
  int v6; // esi
  float v7; // [esp+20h] [ebp-10h]

  for ( i = dword_104369F0; i; i = *(_DWORD *)(i + 4) )
    *(_DWORD *)(i + 12) = 0;
  if ( a3 != -1 && !(a3 ? *(_DWORD *)(dword_10439254 + 48) == 0 : *(_DWORD *)(dword_104391C4 + 48) == 0) )
  {
    v6 = a4;
    if ( a4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 132))(dword_10412D50) )
        v6 = 5 * a4;
      if ( v6 > 255 )
        v6 = 255;
      if ( a3 == 3 )
      {
        ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_103DFD80)[3])(
          off_103DFD80,
          a1,
          1,
          1,
          0);
        if ( ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               0.0,
               2.0) >= 1.0 )
        {
          v7 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 10, 15);
          sub_10076B20((int)a1, v7, 10.0);
        }
      }
      else
      {
        sub_1012D1C0(a1, a2, a3, v6);
      }
    }
  }
}
