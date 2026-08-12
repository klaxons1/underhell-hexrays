int __thiscall sub_10263750(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 >= 0 && a2 < this[68] )
    return (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 832))(
             this,
             a2,
             *(unsigned __int8 *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a2) + 25));
  return result;
}
