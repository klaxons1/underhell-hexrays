int __thiscall sub_103B60D0(int *this)
{
  bool v2; // sf

  sub_101BD250(this + 955);
  v2 = this[1003] < 0;
  this[1004] = 0;
  if ( !v2 )
  {
    if ( this[1001] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1001]);
      this[1001] = 0;
    }
    this[1002] = 0;
  }
  this[1005] = this[1001];
  return sub_10021F20(this);
}
