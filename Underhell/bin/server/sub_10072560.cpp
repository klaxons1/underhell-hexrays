_DWORD *__thiscall sub_10072560(_DWORD *this)
{
  this[2] = 0;
  *this = 0;
  this[1] = 0;
  this[4] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  this[14] = 0;
  this[15] = 0;
  this[16] = 0;
  this[17] = 0;
  this[18] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[5] = 0;
  this[3] = 0;
  if ( (int)this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  this[4] = *this;
  return this;
}
