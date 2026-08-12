int __thiscall sub_1012CCE0(int *this)
{
  int v1; // eax
  int *v2; // esi
  int v3; // edi
  const char *v4; // ebx
  int v5; // eax
  const char *v6; // esi
  int result; // eax
  int v8; // [esp+Ch] [ebp-Ch]
  int v10; // [esp+14h] [ebp-4h]

  v1 = 0;
  v2 = this;
  v3 = 0;
  v4 = String;
  v10 = 0;
  v8 = 0;
  if ( this[3] > 0 )
  {
    do
    {
      v5 = *(_DWORD *)(*v2 + 4 * v1);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 24) )
          ++v10;
        v6 = *(const char **)(v5 + 92);
        if ( !v6 )
          v6 = String;
        if ( v6 == v4 || !_stricmp(v6, v4) )
        {
          ++v3;
        }
        else
        {
          if ( v3 )
            Msg("Class: %s (%d)\n", v4, v3);
          v4 = v6;
          v3 = 1;
        }
        v2 = this;
      }
      v1 = v8 + 1;
      v8 = v1;
    }
    while ( v1 < v2[3] );
    if ( *v4 && v3 )
      Msg("Class: %s (%d)\n", v4, v3);
  }
  result = v2[3];
  if ( result )
    return Msg("Total %d entities (%d empty, %d edicts)\n", result, v2[7], v10);
  return result;
}
