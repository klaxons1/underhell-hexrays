unsigned int __thiscall sub_10168630(int *this)
{
  _BYTE *v2; // edi
  char *v3; // eax
  unsigned int result; // eax

  v2 = (char *)this + 225;
  if ( *((_BYTE *)this + 225) != 2 )
  {
    (*(void (__thiscall **)(int *, int))(*this + 480))(this, (int)this + 225);
    *v2 = 2;
  }
  sub_100EA940(this, 0x10000);
  v3 = sub_100D8070(this);
  if ( v3 )
    this[230] = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 8))(v3);
  else
    this[230] = -1;
  result = this[230];
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (this[230] & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (this[230] & 0xFFF) + 1] )
      {
        if ( this[55] != this[54] )
        {
          (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
          this[55] = this[54];
        }
        return sub_10168560((int)this);
      }
    }
  }
  return result;
}
