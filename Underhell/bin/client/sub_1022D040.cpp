_BYTE *__thiscall sub_1022D040(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  if ( !this[3] )
  {
    v2 = this[1];
    this[3] = 1;
    if ( v2 < 1 )
    {
      sub_1001A460(this, 1 - v2);
      v3 = this[1];
      if ( v3 < 1 )
        this[3] = v3;
    }
    *(_BYTE *)*this = 0;
  }
  return (_BYTE *)*this;
}
