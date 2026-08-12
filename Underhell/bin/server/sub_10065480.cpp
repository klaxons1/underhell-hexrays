void *__thiscall sub_10065480(_DWORD *this, const char *Src)
{
  void *result; // eax
  size_t v4; // esi
  void *v5; // eax

  result = (void *)sub_10184660(this[40]);
  this[40] = 0;
  if ( Src )
  {
    v4 = strlen(Src);
    v5 = (void *)sub_10184390(v4 + 1);
    this[40] = v5;
    result = memcpy_0(v5, Src, v4);
    *(_BYTE *)(v4 + this[40]) = 0;
  }
  return result;
}
