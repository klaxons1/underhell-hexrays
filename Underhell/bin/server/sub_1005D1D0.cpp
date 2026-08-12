int __thiscall sub_1005D1D0(void *this)
{
  int v1; // ebx
  int result; // eax
  _DWORD *v3; // esi
  char *v4; // edi
  int v5; // eax
  const char *v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp-8h] BYREF
  void *v9; // [esp+8h] [ebp-4h]

  v9 = this;
  v1 = 0;
  result = sub_1016BFB0(&dword_10690DF8);
  if ( result > 0 )
  {
    do
    {
      v3 = *(_DWORD **)(sub_1002A680(&dword_10690DF8) + 4 * v1);
      v4 = (char *)*((_DWORD *)v9 + 200);
      if ( !v4 )
        v4 = (char *)String;
      if ( (char *)v3[65] == v4
        || (unsigned __int8)sub_100D6190(v4)
        || (char *)v3[23] == v4
        || (unsigned __int8)sub_100D6240(v4) )
      {
        goto LABEL_20;
      }
      v5 = v3[699];
      if ( v5 )
      {
        v6 = *(const char **)(v5 + 4);
        if ( !v6 )
          v6 = String;
        if ( !_stricmp(v6, v4) )
        {
LABEL_20:
          if ( sub_1005D0C0(v3, &v8) )
          {
            v7 = v8;
            if ( *(int *)(v8 + 64) > 0 )
            {
              *(float *)(v8 + 136) = 8.0;
              *(float *)(v7 + 132) = *(float *)(dword_106B31C8 + 12) + 8.0;
            }
            if ( *(_DWORD *)(v7 + 64) == 2 )
              *(_BYTE *)(v7 + 104) = 1;
          }
        }
      }
      ++v1;
      result = sub_1016BFB0(&dword_10690DF8);
    }
    while ( v1 < result );
  }
  return result;
}
