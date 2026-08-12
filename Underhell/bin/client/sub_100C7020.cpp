int __thiscall sub_100C7020(_DWORD *this)
{
  int result; // eax

  result = this[64];
  this[63] = result;
  this[65] = -1;
  return result;
}
