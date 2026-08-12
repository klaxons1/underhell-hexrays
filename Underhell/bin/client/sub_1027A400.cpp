int __thiscall sub_1027A400(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // esi

  result = (*(int (__thiscall **)(_DWORD *, int))(*this + 880))(this, a2);
  if ( (_BYTE)result )
  {
    v4 = 12 * a2;
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(v4 + this[58]) + 244))(
      *(_DWORD *)(v4 + this[58]),
      0,
      0);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + this[58]) + 16))(*(_DWORD *)(v4 + this[58]));
  }
  return result;
}
