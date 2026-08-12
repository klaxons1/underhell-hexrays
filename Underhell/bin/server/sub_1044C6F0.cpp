int __thiscall sub_1044C6F0(_DWORD *this, int a2)
{
  int result; // eax

  sub_1044C560(this);
  *this = a2;
  result = sub_104498A0(dword_1068FEE8[a2]);
  this[2] = result;
  return result;
}
