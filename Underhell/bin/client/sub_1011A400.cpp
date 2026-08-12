void *__thiscall sub_1011A400(int this, const char *a2, const char *Src)
{
  signed int v4; // edi
  void *result; // eax
  int v6; // esi

  v4 = strlen(Src) + 1;
  result = (void *)sub_10118820((_DWORD **)this, a2, v4);
  v6 = *(_DWORD *)(this + 24);
  if ( v6 )
  {
    if ( v4 <= *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 8) )
    {
      result = memcpy_0(*(void **)(v6 + 4), Src, v4);
      *(_DWORD *)(v6 + 4) += v4;
      *(_DWORD *)(v6 + 8) += v4;
    }
    else
    {
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 12);
      return (void *)Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
