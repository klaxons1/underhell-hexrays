int __cdecl sub_10119EA0(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int result; // eax

  v3 = (_DWORD *)(*(_DWORD *)(a2 + 1400) + 56 * *a3);
  *v3 = *a3;
  v3[1] = -1;
  v3[13] = sub_10034E90(a1);
  result = -1;
  v3[3] = -1;
  if ( a1 )
    result = (*(int (__thiscall **)(_DWORD *))(a1[2] + 36))(a1 + 2);
  v3[2] = result;
  if ( a1 )
  {
    result = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
    v3[4] = result;
  }
  else
  {
    v3[4] = -1;
  }
  v3[7] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[8] = 0;
  ++*a3;
  return result;
}
