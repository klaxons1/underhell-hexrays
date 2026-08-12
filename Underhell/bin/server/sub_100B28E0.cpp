int __thiscall sub_100B28E0(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = this[1];
  this[2] = a2;
  result = *(_DWORD *)(v2 + 2596);
  this[3] = result;
  return result;
}
