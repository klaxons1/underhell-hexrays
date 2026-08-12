int __thiscall sub_10248AC0(_DWORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 100))(this);
  this[202] = 0;
  this[201] = -1;
  return result;
}
