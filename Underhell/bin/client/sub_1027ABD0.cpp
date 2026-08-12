char __userpurge sub_1027ABD0@<al>(int a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // edi
  int v8; // ecx
  char result; // al
  int *v10; // ebx
  void *v11; // ecx
  int v12; // eax
  int v13; // edx

  if ( a3 < 0 )
    return 0;
  if ( a3 >= *(_DWORD *)(a1 + 236) )
    return 0;
  if ( a3 > *(_DWORD *)(a1 + 260) )
    return 0;
  v7 = 12 * a3;
  v8 = 12 * a3 + *(_DWORD *)(a1 + 232);
  if ( *(_DWORD *)(v8 + 4) == a3 && *(_DWORD *)(v8 + 8) != a3 )
    return 0;
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 244))(a1, 0, 0, a2);
  sub_1027A5F0(*(_DWORD **)(v7 + *(_DWORD *)(a1 + 232)), v7, a5);
  v10 = *(int **)(v7 + *(_DWORD *)(a1 + 232));
  v11 = (void *)v10[75];
  if ( v11 )
    sub_1022AF00(v11);
  v12 = sub_1022AD00(a6);
  v13 = *v10;
  v10[75] = v12;
  (*(void (__thiscall **)(int *, _DWORD))(v13 + 244))(v10, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v7 + *(_DWORD *)(a1 + 232)) + 244))(
    *(_DWORD *)(v7 + *(_DWORD *)(a1 + 232)),
    0,
    0);
  result = 1;
  *(_BYTE *)(a1 + 353) = 1;
  return result;
}
