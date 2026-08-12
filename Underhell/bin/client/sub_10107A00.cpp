int __thiscall sub_10107A00(_DWORD *this, char a2)
{
  int result; // eax

  result = (*this ^ (a2 != 0)) & 1;
  *this ^= result;
  return result;
}
