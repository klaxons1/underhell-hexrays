int __usercall sub_101BCA40@<eax>(int a1@<eax>, int a2)
{
  int v2; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  _DWORD *i; // esi

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v4 = *(_DWORD *)(a1 + 1100);
  if ( !v4 || !*(_DWORD *)v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  v5 = *(_DWORD *)v4 + *(_DWORD *)(*(_DWORD *)v4 + 176) + 12 * *(_DWORD *)(a1 + 856);
  v6 = 0;
  if ( *(int *)(v5 + 4) <= 0 )
    return 0;
  for ( i = (_DWORD *)(v5 + *(_DWORD *)(v5 + 8));
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 160) + 216 * *i + *(_DWORD *)v4 + 172) != a2;
        i += 17 )
  {
    if ( ++v6 >= *(_DWORD *)(v5 + 4) )
      return 0;
  }
  return *(_DWORD *)(*(_DWORD *)(v5 + 8) + 68 * v6 + v5 + 4);
}
