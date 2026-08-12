char __stdcall sub_10189C50(int a1, int a2)
{
  int v3; // edx
  _DWORD *i; // esi
  int v5; // ecx

  if ( *(int *)(dword_106B2EA4 + 48) <= 0 || ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1244))(a2) & 8) != 0 )
    return sub_101891F0(a1, a2);
  v3 = 0;
  for ( i = (_DWORD *)(a1 + 1908); ; ++i )
  {
    v5 = *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 ? 0 : off_1061BE18[4 * (*i & 0xFFF) + 1];
    if ( v5 == a2 )
      break;
    if ( ++v3 >= 48 )
      return sub_101891F0(a1, a2);
  }
  return 0;
}
