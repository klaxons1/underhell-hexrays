int __thiscall sub_100746D0(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = this[1];
  this[3] = a2;
  result = *(_DWORD *)(v2 + 2600);
  this[52] = result;
  return result;
}
