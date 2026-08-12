char __thiscall sub_10226B80(_DWORD *this, _DWORD *a2, char a3, char a4, const char *a5)
{
  int v5; // eax
  int v6; // edi
  int *v7; // ecx
  int v8; // esi
  const char *v9; // ecx
  const char *v10; // ecx
  int v12; // [esp+4h] [ebp-8h]
  _DWORD *v13; // [esp+8h] [ebp-4h]

  v5 = this[203];
  v6 = 0;
  v13 = this;
  v12 = v5;
  if ( v5 > 0 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(this[200] + 4 * v6);
      if ( v5 != -1 )
      {
        v7 = &off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v6) & 0xFFF) + 1];
        v5 = (unsigned int)v5 >> 12;
        if ( v7[1] == v5 )
        {
          v8 = *v7;
          if ( *v7 )
          {
            if ( (!a3
               || (v5 = __RTDynamicCast(
                          v8,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&CSceneEntity `RTTI Type Descriptor',
                          (int)&CInstancedSceneEntity `RTTI Type Descriptor',
                          0)) != 0)
              && (!a4 || *(_BYTE *)(v8 + 928)) )
            {
              LOBYTE(v5) = sub_102237E0((_DWORD *)v8, (int)a2);
              if ( (_BYTE)v5 )
              {
                if ( !a5 || !*a5 )
                  goto LABEL_17;
                v9 = *(const char **)(v8 + 804);
                if ( !v9 )
                  v9 = String;
                v5 = strcmp(a5, v9);
                if ( !v5 )
                {
LABEL_17:
                  if ( a2 )
                    sub_100D6390(a2);
                  v10 = *(const char **)(v8 + 804);
                  if ( !v10 )
                    v10 = String;
                  sub_1022F660("%s : removed for '%s'\n", (char)v10);
                  LOBYTE(v5) = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 764))(v8);
                }
              }
            }
          }
        }
      }
      if ( ++v6 >= v12 )
        break;
      this = v13;
    }
  }
  return v5;
}
