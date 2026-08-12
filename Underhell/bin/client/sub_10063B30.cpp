_DWORD *__thiscall sub_10063B30(_DWORD *this)
{
  int v2; // edx

  *this = &CRopeManager::`vftable';
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  sub_100639D0(this + 14);
  this[42] = 0;
  this[43] = 0;
  this[44] = 0;
  *((_WORD *)this + 94) = -1;
  v2 = this[42];
  this[45] = -1;
  this[46] = 0xFFFF;
  this[48] = v2;
  this[4] = 0;
  if ( (int)this[3] >= 0 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  this[5] = this[1];
  this[10] = 0;
  if ( (int)this[9] >= 0 )
  {
    if ( this[7] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[7]);
      this[7] = 0;
    }
    this[8] = 0;
  }
  this[11] = this[7];
  this[6] = 0;
  this[41] = 0;
  return this;
}
