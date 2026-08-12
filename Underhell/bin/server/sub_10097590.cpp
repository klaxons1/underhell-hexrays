_DWORD *__thiscall sub_10097590(_DWORD *this, _BYTE *Src, size_t Size)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  _DWORD *v6; // eax
  _DWORD *result; // eax
  size_t v8; // eax
  void *v9; // eax
  bool v10; // cf

  if ( Src )
  {
    v4 = this[5];
    v5 = v4 < 0x10 ? (unsigned int)this : *this;
    if ( (unsigned int)Src >= v5 )
    {
      v6 = v4 < 0x10 ? this : (_DWORD *)*this;
      if ( (char *)v6 + this[4] > Src )
      {
        if ( v4 < 0x10 )
          return sub_100961B0(this, this, Src - (_BYTE *)this, Size);
        else
          return sub_100961B0(this, this, (unsigned int)&Src[-*this], Size);
      }
    }
  }
  if ( Size == -1 )
    std::_Xlength_error("string too long");
  v8 = this[5];
  if ( v8 < Size )
  {
    sub_10093E50(this, Size, this[4]);
    if ( !Size )
      return this;
LABEL_17:
    if ( this[5] < 0x10u )
      v9 = this;
    else
      v9 = (void *)*this;
    memcpy_0(v9, Src, Size);
    v10 = this[5] < 0x10u;
    this[4] = Size;
    if ( !v10 )
    {
      *(_BYTE *)(*this + Size) = 0;
      return this;
    }
    *((_BYTE *)this + Size) = 0;
    return this;
  }
  if ( Size )
    goto LABEL_17;
  this[4] = 0;
  if ( v8 < 0x10 )
  {
    result = this;
    *(_BYTE *)this = 0;
  }
  else
  {
    *(_BYTE *)*this = 0;
    return this;
  }
  return result;
}
