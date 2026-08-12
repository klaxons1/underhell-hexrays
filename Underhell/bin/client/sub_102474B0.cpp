int __thiscall sub_102474B0(_DWORD *this, int a2)
{
  int result; // eax

  sub_1011A810((int *)(28 * a2 + *this + 8));
  result = this[3] - a2 - 1;
  if ( result > 0 )
    result = (int)memcpy((void *)(28 * a2 + *this), (const void *)(28 * a2 + *this + 28), 28 * result);
  --this[3];
  return result;
}
