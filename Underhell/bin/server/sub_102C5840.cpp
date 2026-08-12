int __thiscall sub_102C5840(int *this)
{
  if ( this[62] >= 0 )
  {
    if ( this[60] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[60]);
      this[60] = 0;
    }
    this[61] = 0;
  }
  sub_102375F0(this + 53);
  sub_102C4900(this + 44);
  sub_102C4800(this + 44);
  sub_102C48B0(this + 35);
  sub_102C47A0(this + 35);
  sub_102C4860(this + 26);
  sub_102C4740(this + 26);
  return sub_102375F0(this + 21);
}
