int __stdcall sub_100B10E0(int a1, int a2)
{
  _DWORD *v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int result; // eax
  int i; // esi

  v2 = *(_DWORD **)a1;
  v3 = a2;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
  if ( v2 )
    *v2 = 0;
  v5 = v4 + 31;
  v6 = v5 / 32;
  a1 = 1;
  if ( v5 / 32 <= 1 )
    a1 = v5 / 32;
  result = (*(int (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)v3 + 60))(v3, v2, v6, 0);
  for ( i = v6 - a1; i > 0; result = (*(int (__thiscall **)(int, int *, int, _DWORD))(*(_DWORD *)v3 + 60))(
                                       v3,
                                       &a1,
                                       1,
                                       0) )
    --i;
  return result;
}
