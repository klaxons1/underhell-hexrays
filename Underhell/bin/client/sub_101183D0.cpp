void *__thiscall sub_101183D0(_DWORD *this, const char *Src)
{
  void *result; // eax
  int v3; // esi
  signed int v4; // edi

  result = (void *)strlen(Src);
  v3 = this[6];
  v4 = (signed int)result + 1;
  if ( v3 )
  {
    if ( v4 <= *(_DWORD *)(v3 + 12) - *(_DWORD *)(v3 + 8) )
    {
      result = memcpy_0(*(void **)(v3 + 4), Src, v4);
      *(_DWORD *)(v3 + 4) += v4;
      *(_DWORD *)(v3 + 8) += v4;
    }
    else
    {
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(v3 + 12);
      return (void *)Warning("Save/Restore overflow!\n");
    }
  }
  return result;
}
