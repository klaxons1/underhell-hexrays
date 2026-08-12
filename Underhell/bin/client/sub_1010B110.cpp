char __cdecl sub_1010B110(char *String2, _DWORD *a2, int *a3)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // ebx
  bool v6; // zf
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edi
  char result; // al
  int v13; // eax
  int v14; // [esp+Ch] [ebp-10h]
  int v15; // [esp+10h] [ebp-Ch] BYREF
  int v16; // [esp+14h] [ebp-8h]
  int v17; // [esp+18h] [ebp-4h]

  while ( 1 )
  {
    v3 = a2;
    v4 = a2[1];
    v14 = v4;
    v16 = 0;
    if ( v4 > 0 )
    {
      v17 = 0;
      do
      {
        v5 = v17 + *v3;
        v6 = *(_DWORD *)v5 == 0;
        v15 = v5;
        if ( !v6 )
        {
          v7 = a3[3];
          v8 = a3[1];
          if ( v7 + 1 > v8 )
            sub_1010AFF0(a3, v7 - v8 + 1);
          ++a3[3];
          v9 = *a3;
          v10 = a3[3] - v7 - 1;
          a3[4] = *a3;
          if ( v10 > 0 )
            memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
          v11 = (_DWORD *)(*a3 + 4 * v7);
          if ( v11 )
            *v11 = v5;
          if ( *(_DWORD *)v5 == 10 )
          {
            result = sub_1010B110(String2, *(_DWORD *)(v5 + 32), (int)a3);
            if ( result )
              return result;
          }
          if ( !_stricmp(*(const char **)(v5 + 4), String2) )
            return 1;
          sub_1012D820(&v15);
          v3 = a2;
          v4 = v14;
        }
        v17 += 52;
        ++v16;
      }
      while ( v16 < v4 );
    }
    v13 = v3[3];
    if ( !v13 )
      break;
    a2 = (_DWORD *)v13;
  }
  return 0;
}
