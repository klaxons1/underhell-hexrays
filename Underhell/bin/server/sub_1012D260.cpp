int __thiscall sub_1012D260(_DWORD *this)
{
  int result; // eax

  this[2052] = 0;
  if ( (int)this[2051] >= 0 )
  {
    if ( this[2049] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2049]);
      this[2049] = 0;
    }
    this[2050] = 0;
  }
  this[2053] = this[2049];
  result = -1;
  memset(this + 1, 0xFFu, 0x2000u);
  return result;
}
