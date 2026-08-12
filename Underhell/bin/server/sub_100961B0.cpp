_DWORD *__thiscall sub_100961B0(_DWORD *this, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v5; // ecx
  unsigned int v6; // edi
  unsigned int v7; // edi
  _DWORD *result; // eax
  unsigned int v9; // eax
  _BYTE *v10; // eax
  bool v11; // cf

  v5 = a2;
  v6 = a2[4];
  if ( v6 < a3 )
    std::_Xout_of_range("invalid string position");
  v7 = v6 - a3;
  if ( a4 < v7 )
    v7 = a4;
  if ( this == a2 )
  {
    sub_10093DC0(this, a3 + v7, 0xFFFFFFFF);
    sub_10093DC0(this, 0, a3);
    return this;
  }
  if ( v7 == -1 )
    std::_Xlength_error("string too long");
  v9 = this[5];
  if ( v9 < v7 )
  {
    sub_10093E50(this, v7, this[4]);
    v5 = a2;
    if ( !v7 )
      return this;
LABEL_11:
    if ( v5[5] >= 0x10u )
      v5 = (_DWORD *)*v5;
    if ( this[5] < 0x10u )
      v10 = this;
    else
      v10 = (_BYTE *)*this;
    memcpy_0(v10, (char *)v5 + a3, v7);
    v11 = this[5] < 0x10u;
    this[4] = v7;
    if ( !v11 )
    {
      *(_BYTE *)(*this + v7) = 0;
      return this;
    }
    *((_BYTE *)this + v7) = 0;
    return this;
  }
  if ( v7 )
    goto LABEL_11;
  this[4] = 0;
  if ( v9 < 0x10 )
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
