int __thiscall sub_101E46E0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi

  result = a2;
  v4 = 6;
  if ( this[870] != a2 )
  {
    if ( *((_BYTE *)this + 3508) )
      v4 = this[875];
    result = (*(int (__thiscall **)(_DWORD *, int))(*this + 1328))(this, a2);
    if ( *((_BYTE *)this + 3508) )
      this[875] = v4;
    *((_BYTE *)this + 3508) = 1;
  }
  return result;
}
