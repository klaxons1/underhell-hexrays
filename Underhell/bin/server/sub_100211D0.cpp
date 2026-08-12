int __thiscall sub_100211D0(_DWORD *this, int a2, char a3)
{
  int result; // eax

  result = this[702];
  this[702] = a2;
  *((_BYTE *)this + 2812) = a3;
  if ( result != a2 )
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 1956))(this, result, a2);
  return result;
}
