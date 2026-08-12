int __thiscall sub_100F5B80(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax

  this[826] = this[823];
  v2 = a2 ^ this[826];
  this[823] = a2;
  result = v2 & ~a2;
  this[824] = a2 & v2;
  this[825] = result;
  return result;
}
