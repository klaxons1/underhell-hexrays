int __cdecl sub_100B0890(int *a1)
{
  char *v1; // eax
  int result; // eax
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // eax

  if ( *a1 <= 1 || !a1[259] || *a1 <= 1 || (v1 = (char *)a1[259], !*v1) )
  {
    v3 = sub_10153490();
    result = sub_101E94B0(v3);
    goto LABEL_10;
  }
  result = sub_1012BF20(0, v1, 0, 0, 0, 0);
  if ( !result )
  {
    if ( *a1 > 1 )
      result = sub_1012BC90(0, a1[259]);
    else
      result = sub_1012BC90(0, String);
LABEL_10:
    if ( !result )
      return result;
  }
  result = sub_100D7680(result);
  v4 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 1656))(result);
    if ( result )
    {
      LOBYTE(a1) = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 212))(dword_106B31D0, 0);
      v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1656))(v4);
      sub_100B0780(v5);
      return (*(int (__thiscall **)(int, int *))(*(_DWORD *)dword_106B31D0 + 212))(dword_106B31D0, a1);
    }
  }
  return result;
}
