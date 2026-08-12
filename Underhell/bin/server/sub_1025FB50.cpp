int __cdecl sub_1025FB50(int a1)
{
  _DWORD *v1; // eax
  int v2; // eax

  if ( a1 <= 0 )
    return 0;
  if ( a1 > *(_DWORD *)(dword_106B31C8 + 20) )
    return 0;
  v1 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a1);
  if ( !v1 || (*v1 & 2) != 0 )
    return 0;
  v2 = v1[3];
  if ( v2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2);
  else
    return 0;
}
