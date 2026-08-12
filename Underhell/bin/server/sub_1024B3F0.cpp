_DWORD *__cdecl sub_1024B3F0(_DWORD *a1, char *String2)
{
  int v2; // esi
  int v3; // edi
  _DWORD *result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v3 = dword_106C68CC;
  if ( dword_106C68CC <= 0 )
  {
LABEL_4:
    result = a1;
    *a1 = 0;
  }
  else
  {
    while ( _stricmp(**(const char ***)(dword_106C68C0 + 4 * v2), String2) )
    {
      if ( ++v2 >= v3 )
        goto LABEL_4;
    }
    v5 = *(_DWORD *)(dword_106C68C0 + 4 * v2);
    if ( !*(_DWORD *)(v5 + 8) )
    {
      v6 = dword_106C68C0 + 4 * v2;
      *(_DWORD *)(*(_DWORD *)v6 + 8) = *sub_10162BE0(&v7, *(_BYTE **)(v5 + 4));
    }
    result = a1;
    *a1 = *(_DWORD *)(*(_DWORD *)(dword_106C68C0 + 4 * v2) + 8);
  }
  return result;
}
