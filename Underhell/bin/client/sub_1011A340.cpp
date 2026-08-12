void *__thiscall sub_1011A340(int this, const char *a2, void *Src, int a4)
{
  signed int v4; // edi
  void *result; // eax
  int v7; // esi

  v4 = 4 * a4;
  result = (void *)sub_10118820((_DWORD **)this, a2, 4 * a4);
  v7 = *(_DWORD *)(this + 24);
  if ( v7 )
  {
    if ( v4 <= *(_DWORD *)(v7 + 12) - *(_DWORD *)(v7 + 8) )
    {
      result = memcpy_0(*(void **)(v7 + 4), Src, v4);
      *(_DWORD *)(v7 + 4) += v4;
      *(_DWORD *)(v7 + 8) += v4;
    }
    else
    {
      *(_DWORD *)(v7 + 8) = *(_DWORD *)(v7 + 12);
      return (void *)Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
