__int16 *__thiscall sub_1024AAF0(_DWORD *this, int a2, int a3)
{
  __int16 *result; // eax

  result = (__int16 *)a2;
  if ( a2 >= 0 && a2 < this[58] )
  {
    result = (__int16 *)(this[55] + 12 * a2 + 4);
    if ( *result != a3 )
    {
      *result = a3;
      return (__int16 *)(*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
    }
  }
  return result;
}
