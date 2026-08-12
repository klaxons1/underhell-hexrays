_DWORD *__thiscall sub_1042C2D0(_DWORD *this, int a2, int a3, char *a4, int a5, int a6)
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
    v7 = (char *)off_1068E2AC[0];
  this[4] = v7;
  this[5] = a5;
  if ( (a5 & 1) != 0 )
  {
    this[1] = 0;
  }
  else
  {
    this[1] = dword_106FE528;
    dword_106FE528 = (int)this;
  }
  if ( dword_106FE52C )
    (*(void (__thiscall **)(_DWORD *))(*this + 36))(this);
  return this;
}
