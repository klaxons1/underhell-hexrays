int __thiscall sub_1024BA40(_DWORD *this)
{
  int result; // eax

  result = this[61];
  if ( result )
  {
    result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_1047CA80 + 64))(
               dword_1047CA80,
               result,
               this[62]);
    if ( result )
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 352))(this, result);
  }
  return result;
}
