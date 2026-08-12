int __thiscall sub_1000AF20(_BYTE *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 1048))(this, 7);
  this[1984] = 0;
  return result;
}
