int __thiscall sub_102BFBD0(_DWORD *this)
{
  int result; // eax
  bool v3; // cf

  sub_1015F200(this);
  result = this[23];
  v3 = __CFADD__((*(_DWORD *)(result + 264))++, 1);
  *(_DWORD *)(result + 268) += v3;
  return result;
}
