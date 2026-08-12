_DWORD *__thiscall sub_10050E00(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // ebx

  result = (_DWORD *)a2;
  if ( a2 > 0 )
  {
    v4 = this[2];
    if ( !v4 )
    {
      v4 = this[1];
      if ( !v4 )
        v4 = 1;
    }
    if ( v4 < a2 )
      v4 *= (v4 + a2 - 1) / v4;
    this[1] += v4;
    v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 76 * v4 + 8);
    if ( !v5 )
      Error("CUtlFixedMemory overflow!\n");
    result = (_DWORD *)*this;
    *v5 = 0;
    v5[1] = v4;
    if ( result )
    {
      for ( ; *result; result = (_DWORD *)*result )
        ;
      *result = v5;
    }
    else
    {
      *this = v5;
    }
  }
  return result;
}
