int __thiscall sub_1026AD00(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this[57] + 128))(this[57]);
  if ( (_BYTE)result )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this[57] + 772))(this[57]);
    (*(void (__thiscall **)(_DWORD *, int))(*this[57] + 768))(this[57], v4 - a2);
    return ((int (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[61])(this, 0, 0);
  }
  return result;
}
