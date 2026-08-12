int __thiscall sub_10257B60(int *this, unsigned int a2)
{
  int result; // eax

  sub_102576F0(this, a2);
  result = (*(int (__thiscall **)(int *, unsigned int))(*this + 752))(this, a2);
  if ( (_BYTE)result )
  {
    if ( this[276]-- == 1 )
    {
      sub_100EC3F0(this, 0, 0.0, 0);
      return sub_100EC4A0(this, -1.0, 0);
    }
  }
  return result;
}
