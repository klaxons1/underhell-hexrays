_BYTE *__stdcall sub_101295E0(char *a1, _BYTE *a2, int a3)
{
  _BYTE *result; // eax
  char *v4; // esi
  char *v5; // edi
  int v6; // ecx
  char v7; // al
  char *v8; // ecx
  int v9; // eax
  int v10; // ebx
  _BYTE *v11; // eax
  int v12; // eax
  char *v13; // ecx
  char i; // al
  char *v15; // [esp+8h] [ebp-4h]
  char *v16; // [esp+14h] [ebp+8h]

  result = a2;
  v4 = a1;
  v5 = a2;
  if ( *a1 )
  {
    while ( 1 )
    {
      v6 = a3;
      if ( a3 <= 0 )
      {
LABEL_20:
        result[v6 - 1] = 0;
        return result;
      }
      if ( *v4 != 35 )
        break;
      v7 = v4[1];
      v16 = v4++;
      v8 = (char *)&unk_10438B88;
      v15 = v4;
      if ( v7 >= 65 )
      {
        do
        {
          if ( v7 > 122 )
            break;
          ++v4;
          *v8 = v7;
          v7 = *v4;
          ++v8;
        }
        while ( *v4 >= 65 );
      }
      *v8 = 0;
      v9 = sub_10076700((int)&unk_10438B88);
      v10 = v9;
      if ( v9 && (v11 = *(_BYTE **)(v9 + 44)) != 0 )
      {
        if ( *v11 != 35
          || (v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA78 + 8))(
                      dword_1047CA78,
                      *(_DWORD *)(v10 + 44))) == 0 )
        {
          v13 = *(char **)(v10 + 44);
          for ( i = *v13; *v13; ++v5 )
          {
            ++v13;
            *v5 = i;
            i = *v13;
          }
          result = a2;
          goto LABEL_17;
        }
        (*(void (__thiscall **)(int, int, char *, int))(*(_DWORD *)dword_1047CA78 + 16))(dword_1047CA78, v12, v5, a3);
        result = a2;
      }
      else
      {
        v4 = v15;
        result = a2;
        *v5++ = *v16;
      }
LABEL_18:
      --a3;
      if ( !*v4 )
      {
        v6 = a3;
        goto LABEL_20;
      }
    }
    *v5++ = *v4++;
LABEL_17:
    *v5 = 0;
    goto LABEL_18;
  }
  a2[a3 - 1] = 0;
  return result;
}
