int __thiscall sub_102022B0(_DWORD *this)
{
  bool v2; // sf

  v2 = (int)this[218] < 0;
  this[219] = 0;
  if ( !v2 )
  {
    if ( this[216] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[216]);
      this[216] = 0;
    }
    this[217] = 0;
  }
  this[220] = this[216];
  return sub_1024BA60(this);
}
