int __thiscall sub_102571C0(int *this, int a2, int a3)
{
  int result; // eax

  this[3] = 0;
  sub_10255490(this, 0, a3, 0);
  for ( result = 0; result < a3; ++result )
    *(_WORD *)(*this + 2 * result) = *(_WORD *)(a2 + 2 * result);
  return result;
}
