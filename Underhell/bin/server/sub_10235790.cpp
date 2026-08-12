int __thiscall sub_10235790(_DWORD *this)
{
  int result; // eax

  result = this[2];
  *(_DWORD *)(result + 252) |= 1u;
  return result;
}
