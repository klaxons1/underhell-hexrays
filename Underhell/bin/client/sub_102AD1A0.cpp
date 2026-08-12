int __thiscall sub_102AD1A0(_DWORD *this, int a2)
{
  int result; // eax

  sub_102AD010(this);
  *this = a2;
  result = sub_102AAF30(dword_103FEFB8[a2]);
  this[2] = result;
  return result;
}
