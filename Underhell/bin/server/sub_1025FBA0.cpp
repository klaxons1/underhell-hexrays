int __cdecl sub_1025FBA0(char *String2)
{
  int v1; // eax
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi

  if ( !String2 || !*String2 )
    return 0;
  v1 = *(_DWORD *)(dword_106B31C8 + 20);
  v2 = 1;
  if ( v1 < 1 )
    return 0;
  while ( 1 )
  {
    if ( v2 > 0 && v2 <= v1 )
    {
      v3 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v2);
      if ( v3 )
      {
        if ( (*v3 & 2) == 0 )
        {
          v4 = v3[3];
          if ( v4 )
          {
            v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
            v6 = v5;
            if ( v5 )
            {
              if ( *(_DWORD *)(v5 + 4004) != 2 && !_stricmp((const char *)(v5 + 4296), String2) )
                break;
            }
          }
        }
      }
    }
    v1 = *(_DWORD *)(dword_106B31C8 + 20);
    if ( ++v2 > v1 )
      return 0;
  }
  return v6;
}
