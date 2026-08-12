const char *__thiscall sub_1009A470(_DWORD *this, const char *Src)
{
  const char *result; // eax
  size_t v4; // esi
  void *v5; // edi

  sub_10184660(this[10]);
  result = Src;
  if ( Src )
  {
    v4 = strlen(Src);
    v5 = (void *)sub_10184390(v4 + 1);
    result = (const char *)memcpy_0(v5, Src, v4);
    *((_BYTE *)v5 + v4) = 0;
    this[10] = v5;
  }
  else
  {
    this[10] = 0;
  }
  return result;
}
