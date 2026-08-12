int __thiscall sub_10180210(int *this)
{
  _BYTE *v2; // eax
  _BYTE *v3; // eax

  if ( *this && *(_BYTE *)*this )
  {
    sub_10034930(*this);
    *this = 0;
  }
  v2 = (_BYTE *)this[1];
  if ( v2 && *v2 )
  {
    sub_10034930(this[1]);
    this[1] = 0;
  }
  v3 = (_BYTE *)this[3];
  if ( v3 && *v3 )
  {
    sub_10034930(this[3]);
    this[3] = 0;
  }
  sub_101800C0(this + 16);
  sub_10180180(this + 21);
  sub_1011A810(this + 21);
  return sub_1011A810(this + 16);
}
