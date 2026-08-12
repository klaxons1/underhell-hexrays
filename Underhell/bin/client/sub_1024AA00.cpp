int __thiscall sub_1024AA00(_DWORD *this, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // ecx

  (*(void (__thiscall **)(_DWORD *, int))(*this + 900))(this, a2);
  result = 12 * a2;
  v6 = 12 * a2 + this[55];
  if ( *(_DWORD *)v6 != a3 || *(__int16 *)(v6 + 4) != a4 )
  {
    *(_DWORD *)(result + this[55]) = a3;
    *(_WORD *)(this[55] + result + 4) = a4;
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  }
  return result;
}
