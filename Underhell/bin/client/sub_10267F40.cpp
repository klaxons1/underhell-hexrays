int __thiscall sub_10267F40(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 )
  {
    this[67] = a2;
    return (*(int (__thiscall **)(_DWORD *))(*this + 812))(this);
  }
  return result;
}
