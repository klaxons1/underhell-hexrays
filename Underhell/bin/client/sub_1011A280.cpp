void *__thiscall sub_1011A280(int this, const char *a2, signed int Size, void *Src)
{
  void *result; // eax
  int v6; // esi

  result = (void *)sub_10118820((_DWORD **)this, a2, Size);
  v6 = *(_DWORD *)(this + 24);
  if ( v6 )
  {
    if ( Size <= *(_DWORD *)(v6 + 12) - *(_DWORD *)(v6 + 8) )
    {
      result = memcpy_0(*(void **)(v6 + 4), Src, Size);
      *(_DWORD *)(v6 + 4) += Size;
      *(_DWORD *)(v6 + 8) += Size;
    }
    else
    {
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v6 + 12);
      return (void *)Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
