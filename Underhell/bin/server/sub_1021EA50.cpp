void *__thiscall sub_1021EA50(_DWORD *this, void *Src, int a3)
{
  void *result; // eax
  int v4; // esi
  int v5; // edi

  result = (void *)a3;
  v4 = this[6];
  v5 = 12 * a3;
  if ( v4 )
  {
    if ( v5 <= *(_DWORD *)(v4 + 12) - *(_DWORD *)(v4 + 8) )
    {
      result = memcpy_0(*(void **)(v4 + 4), Src, 12 * a3);
      *(_DWORD *)(v4 + 4) += v5;
      *(_DWORD *)(v4 + 8) += v5;
    }
    else
    {
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v4 + 12);
      return (void *)Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
