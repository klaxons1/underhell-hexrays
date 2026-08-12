int __thiscall sub_10102E00(_DWORD *this, int a2)
{
  int result; // eax

  if ( *((_BYTE *)this + 134) )
  {
    result = a2;
    this[34] -= a2;
    if ( (int)this[34] <= 0 )
      return (*(int (__thiscall **)(_DWORD *))(*this + 756))(this);
  }
  return result;
}
