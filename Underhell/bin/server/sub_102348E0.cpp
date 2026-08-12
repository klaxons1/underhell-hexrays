int __cdecl sub_102348E0(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v4; // esi
  int i; // edi
  int v6; // eax
  int v7; // eax

  if ( !a2 )
    return 0;
  v4 = sub_100D87F0(a2);
  if ( !v4 )
    return 0;
  if ( a4 )
  {
    *a4 = 0;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[6] = 0;
    a4[7] = 0;
  }
  for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 768))(v4); a4[(v7 - 1) >> 5] |= 1 << ((v7 - 1) & 0x1F) )
  {
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 772))(v4, i);
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v6 + 24));
    ++i;
  }
  return a3;
}
