int __cdecl sub_1012DB70(int *a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // esi
  int v7; // eax
  int *v8; // eax
  int *v9; // eax
  int v11[6]; // [esp+8h] [ebp-24h] BYREF
  char v12; // [esp+20h] [ebp-Ch]
  int v13; // [esp+24h] [ebp-8h]
  char *v14; // [esp+28h] [ebp-4h]

  memset(v11, 0, sizeof(v11));
  v12 = 0;
  v13 = 0;
  if ( dword_106AE3E4 )
    v1 = *(_DWORD *)dword_106AE3E4;
  else
    v1 = 0;
  v2 = *a1;
  v3 = v1;
  v14 = 0;
  if ( v2 > 1 )
    v14 = (char *)a1[259];
  if ( v1 )
  {
    do
    {
      if ( !v14 || *(char **)(v3 + 92) == v14 || sub_100D6240((_DWORD *)v3, v14) )
      {
        v4 = (_DWORD *)sub_101C46F0(1);
        v5 = v4;
        if ( v4 )
        {
          v6 = (_DWORD *)v4[2];
          if ( v6 != v4 )
          {
            do
            {
              if ( *v6 == -1 || off_1061BE18[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
                v7 = 0;
              else
                v7 = off_1061BE18[4 * (*v6 & 0xFFF) + 1];
              a1 = (int *)v7;
              if ( v7 )
                sub_1012D160(v11, &a1);
              else
                ++v13;
              v6 = (_DWORD *)v6[2];
            }
            while ( v6 != v5 );
          }
        }
      }
      v8 = &dword_1069E3E4[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3) & 0xFFF)];
      if ( !v8 )
        break;
      v9 = (int *)v8[3];
      if ( !v9 )
        break;
      v3 = *v9;
    }
    while ( *v9 );
  }
  sub_1012CCE0(v11);
  return sub_102375F0(v11);
}
