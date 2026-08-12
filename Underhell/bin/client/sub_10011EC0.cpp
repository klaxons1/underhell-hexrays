int __thiscall sub_10011EC0(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax

  this[1009] = this[1012];
  v2 = a2 ^ this[1009];
  this[1012] = a2;
  result = v2 & ~a2;
  this[1010] = a2 & v2;
  this[1011] = result;
  return result;
}
