_DWORD *__thiscall sub_10228C20(_DWORD *this, int a2, int a3, char *a4, int a5, int a6)
{
  char *v7; // eax

  this[6] = a3;
  this[7] = a6;
  v7 = a4;
  *((_BYTE *)this + 32) = this[8] & 0xFC | (a6 != 0) | 4;
  this[4] = 0;
  this[5] = 0;
  this[1] = 0;
  *this = &ConCommand::`vftable';
  *((_BYTE *)this + 8) = 0;
  this[3] = a2;
  if ( !a4 )
    v7 = (char *)off_103FC14C[0];
  this[4] = v7;
  this[5] = a5;
  if ( (a5 & 1) != 0 )
  {
    this[1] = 0;
  }
  else
  {
    this[1] = dword_10479818;
    dword_10479818 = (int)this;
  }
  if ( dword_1047981C )
    (*(void (__thiscall **)(_DWORD *))(*this + 36))(this);
  return this;
}
