float *__cdecl sub_10064730(int a1, int a2, __int16 a3, __int16 a4, float a5, int ArgList, int a7, int a8)
{
  _DWORD *v8; // eax
  float *v9; // esi
  int v10; // eax

  v8 = sub_10034900(0x820u);
  if ( v8 )
    v9 = (float *)sub_10064590(v8);
  else
    v9 = 0;
  (*(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)v9 + 324))(v9, 0, 7);
  if ( a1 )
  {
    v9[477] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    *((_DWORD *)v9 + 484) |= 1u;
  }
  if ( a2 )
  {
    v9[478] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    *((_DWORD *)v9 + 484) |= 2u;
  }
  v9[485] = a5;
  *((_WORD *)v9 + 959) = a4;
  v10 = a7;
  *((_WORD *)v9 + 958) = a3;
  if ( a7 <= 10 )
  {
    if ( a7 < 2 )
      v10 = 2;
  }
  else
  {
    v10 = 10;
  }
  *((_DWORD *)v9 + 312) = a8;
  *((_DWORD *)v9 + 476) = v10;
  sub_10060680(v9, ArgList);
  return v9;
}
