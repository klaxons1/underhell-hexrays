int __thiscall sub_10327B90(_BYTE *this, int a2, _BYTE *a3)
{
  int result; // eax

  result = (int)(this + 5684);
  if ( a3 == this + 5684 )
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
