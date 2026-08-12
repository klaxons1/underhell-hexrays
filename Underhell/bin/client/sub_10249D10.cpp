int __thiscall sub_10249D10(_DWORD *this)
{
  int result; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 852))(this);
  result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 832))(this, this[54], 0);
  this[65] = result;
  return result;
}
