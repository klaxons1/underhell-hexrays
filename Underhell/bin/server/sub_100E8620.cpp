int __thiscall sub_100E8620(_DWORD *this)
{
  int result; // eax

  if ( this[106] )
  {
    sub_101B4EF0(this);
    result = sub_101DB3D0(this[106], this);
    this[106] = 0;
  }
  return result;
}
