int __thiscall sub_1011ADB0(_DWORD *this)
{
  int v1; // edi

  v1 = *(_DWORD *)(this[1] + 4 * this[4]-- - 4);
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, v1);
}
