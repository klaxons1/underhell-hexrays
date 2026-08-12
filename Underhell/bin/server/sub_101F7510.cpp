int __thiscall sub_101F7510(int *this)
{
  _DWORD *v2; // eax

  if ( this[895] - 1 > 0 )
    sub_101F72F0(this + 892, 0, this[895] - 1);
  if ( !this[895] )
  {
    v2 = (_DWORD *)(this[892] + 36 * sub_101F2CB0(this + 892, this[895]));
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = 0;
    v2[6] = 0;
    v2[7] = 0;
    v2[8] = 0;
  }
  return this[892];
}
