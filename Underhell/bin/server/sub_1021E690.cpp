int __thiscall sub_1021E690(_DWORD *this, const char *a2)
{
  const char *v2; // ebx
  char v3; // dl
  unsigned int v4; // eax
  char *i; // esi
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  int result; // eax
  int v11; // [esp+Ch] [ebp-Ch]
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]

  v2 = a2;
  v3 = *a2;
  v4 = 0;
  for ( i = (char *)a2; *i; v3 = *i )
  {
    ++i;
    v4 = v3 ^ __ROR4__(v4, 4);
  }
  v6 = this[4];
  v13 = 0;
  v7 = (unsigned __int16)(v4 % v6);
  if ( v6 <= 0 )
  {
LABEL_11:
    Warning("CSaveRestoreBuffer::TokenHash() is COMPLETELY FULL!");
    return 0;
  }
  else
  {
    v8 = this[5];
    v12 = v8;
    v11 = v7;
    v9 = v7 - v6;
    while ( 1 )
    {
      result = v13 + v7;
      if ( result >= v6 )
        result = v9;
      if ( !*(_DWORD *)(v8 + 4 * result) )
        break;
      if ( !strcmp(v2, *(const char **)(v8 + 4 * result)) )
      {
        v2 = a2;
        v8 = v12;
        break;
      }
      ++v9;
      if ( ++v13 >= v6 )
        goto LABEL_11;
      v2 = a2;
      v7 = v11;
      v8 = v12;
    }
    *(_DWORD *)(v8 + 4 * result) = v2;
  }
  return result;
}
