int __thiscall sub_10334D40(_BYTE *this, int a2, _BYTE *a3)
{
  int result; // eax

  result = (int)(this + 5932);
  if ( a3 == this + 5932 )
  {
    this[5600] = 0;
  }
  else if ( a2 == result )
  {
    result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 2400))(this);
    this[5600] = result;
  }
  return result;
}
