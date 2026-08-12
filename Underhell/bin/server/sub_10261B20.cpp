int __cdecl sub_10261B20()
{
  int v0; // eax
  _DWORD *v2; // eax
  int v3; // eax

  v0 = *(_DWORD *)(dword_106B31C8 + 20);
  if ( v0 > 1 )
    return 0;
  if ( v0 >= 1 )
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 1);
    if ( v2 )
    {
      if ( (*v2 & 2) == 0 )
      {
        v3 = v2[3];
        if ( v3 )
          return (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
      }
    }
  }
  return 0;
}
