int __thiscall sub_10273750(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this[63] + 128))(this[63]);
  if ( (_BYTE)result )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this[63] + 772))(this[63]);
    return (*(int (__thiscall **)(_DWORD *, int))(*this[63] + 768))(this[63], v4 - 3 * a2);
  }
  return result;
}
