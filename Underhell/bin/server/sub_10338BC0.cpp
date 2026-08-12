_DWORD *__thiscall sub_10338BC0(_BYTE *this, int a2)
{
  _DWORD *result; // eax
  char **v3; // eax
  _DWORD *v4; // ecx
  int *v5; // esi
  int v6; // edi
  bool v7; // bl
  int *v8; // ecx
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // edi
  unsigned int v12; // esi
  int *v13; // ecx
  int v14; // [esp+0h] [ebp-10h] BYREF
  _DWORD *v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+8h] [ebp-8h] BYREF
  _DWORD *i; // [esp+Ch] [ebp-4h] BYREF

  result = (_DWORD *)dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    this[800] = 1;
    v3 = (char **)sub_10162BE0(&v14, "player_squad");
    result = sub_100B0F90(&dword_10695280, *v3);
    v15 = result;
    if ( result )
    {
      result = (_DWORD *)sub_100B1560(result, &v16, 1);
      v4 = result;
      for ( i = result; result; i = result )
      {
        if ( *((float *)v4 + 614) != flt_10689730
          || *((float *)v4 + 615) != flt_10689734
          || *((float *)v4 + 616) != flt_10689738 )
        {
          v5 = v4 + 62;
          v6 = v4[62] | 2;
          v7 = (v4[62] & 2) != 0;
          if ( v4[62] != v6 )
          {
            if ( *((_BYTE *)v4 + 84) )
            {
              *((_BYTE *)v4 + 88) |= 1u;
            }
            else
            {
              v8 = (int *)v4[6];
              if ( v8 )
                sub_100194B0(v8, 248);
            }
            *v5 = v6;
            v4 = i;
          }
          v9 = *v4;
          v10 = sub_10261B20();
          (*(void (__thiscall **)(_DWORD *, int, _DWORD **, int))(v9 + 1572))(i, v10, &i, 1);
          if ( !v7 )
          {
            v11 = i;
            v12 = i[62] & 0xFFFFFFFD;
            if ( i[62] != v12 )
            {
              if ( *((_BYTE *)i + 84) )
              {
                *((_BYTE *)i + 88) |= 1u;
              }
              else
              {
                v13 = (int *)i[6];
                if ( v13 )
                  sub_100194B0(v13, 248);
              }
              v11[62] = v12;
            }
          }
        }
        result = (_DWORD *)sub_100B1630(v15, &v16, 1);
        v4 = result;
      }
    }
  }
  return result;
}
