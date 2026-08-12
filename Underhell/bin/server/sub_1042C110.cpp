int __thiscall sub_1042C110(_DWORD *this, int a2, char *a3, int a4)
{
  char *v4; // eax
  int result; // eax

  this[3] = a2;
  v4 = a3;
  *((_BYTE *)this + 8) = 0;
  if ( !a3 )
    v4 = (char *)off_1068E2AC[0];
  this[4] = v4;
  result = a4;
  this[5] = a4;
  if ( (a4 & 1) != 0 )
  {
    this[1] = 0;
  }
  else
  {
    result = dword_106FE528;
    this[1] = dword_106FE528;
    dword_106FE528 = (int)this;
  }
  if ( dword_106FE52C )
    return (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  return result;
}
