int __cdecl sub_10109D00(char *String2, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int v3; // edx
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int result; // eax
  int v9; // ecx
  int v10; // [esp+Ch] [ebp-4h]

  while ( 1 )
  {
    v2 = a2;
    v3 = a2[1];
    v4 = 0;
    v10 = v3;
    if ( v3 > 0 )
    {
      v5 = 0;
      do
      {
        v6 = *(_DWORD *)(*v2 + v5);
        v7 = v5 + *v2;
        if ( v6 )
        {
          if ( v6 == 10 )
          {
            result = sub_10109D00(String2, *(_DWORD *)(v7 + 32));
            if ( result )
              return result;
          }
          if ( !_stricmp(*(const char **)(v7 + 4), String2) )
            return v7;
          v3 = v10;
          v2 = a2;
        }
        ++v4;
        v5 += 52;
      }
      while ( v4 < v3 );
    }
    v9 = v2[3];
    if ( !v9 )
      break;
    a2 = (_DWORD *)v9;
  }
  return 0;
}
