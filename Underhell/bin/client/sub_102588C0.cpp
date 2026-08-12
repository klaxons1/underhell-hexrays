int __thiscall sub_102588C0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = this[3] - a2 - a3;
  if ( result > 0 && a3 > 0 )
    result = (int)memcpy((void *)(*this + 32 * a2), (const void *)(*this + 32 * (a2 + a3)), 32 * result);
  this[3] -= a3;
  return result;
}
