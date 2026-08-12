_DWORD *__thiscall sub_10134320(_DWORD *this, int a2)
{
  char *v2; // eax
  _DWORD *result; // eax
  int i; // edi
  char v5; // bl
  int *v6; // ecx
  char *v7; // eax

  v2 = (char *)this[53];
  if ( !v2 )
    v2 = (char *)String;
  result = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  for ( i = (int)result; result; i = (int)result )
  {
    v5 = *(_BYTE *)(i + 604) + 1;
    if ( *(_BYTE *)(i + 84) )
    {
      *(_BYTE *)(i + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(i + 24);
      if ( v6 )
        sub_100194B0(v6, 604);
    }
    *(_BYTE *)(i + 604) = v5;
    v7 = (char *)this[53];
    if ( !v7 )
      v7 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, i, v7, 0, 0, 0, 0);
  }
  return result;
}
