int __thiscall sub_102BFBA0(_DWORD *this, int a2)
{
  int result; // eax
  bool v4; // cf

  sub_1015F710(this, a2);
  result = this[23];
  v4 = __CFADD__((*(_DWORD *)(result + 272))++, 1);
  *(_DWORD *)(result + 276) += v4;
  return result;
}
