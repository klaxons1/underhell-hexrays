_DWORD *__thiscall sub_10122180(_DWORD *this, char a2)
{
  int v3; // ecx
  _DWORD *v4; // eax
  int i; // ecx

  if ( (a2 & 2) != 0 )
  {
    v3 = *(this - 1);
    v4 = &this[19 * v3];
    for ( i = v3 - 1; i >= 0; *v4 = &SendProp::`vftable' )
    {
      v4 -= 19;
      --i;
    }
    if ( (a2 & 1) != 0 )
      sub_10184660(this - 1);
    return this - 1;
  }
  else
  {
    *this = &SendProp::`vftable';
    if ( (a2 & 1) != 0 )
      sub_10184660(this);
    return this;
  }
}
