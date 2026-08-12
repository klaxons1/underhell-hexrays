int __thiscall sub_100C1FD0(_DWORD *this, int a2)
{
  int result; // eax

  result = this[3] - a2 - 1;
  if ( result > 0 )
    result = (int)memcpy((void *)(*this + 4 * a2), (const void *)(*this + 4 * a2 + 4), 4 * result);
  --this[3];
  return result;
}
