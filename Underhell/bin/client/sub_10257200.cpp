int __thiscall sub_10257200(int *this)
{
  int v3; // [esp-8h] [ebp-Ch]
  int v4; // [esp-4h] [ebp-8h]

  v4 = this[63];
  v3 = this[60];
  this[70] = this[72];
  sub_102571C0(this + 55, v3, v4);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
  (*(void (__thiscall **)(int *))(*this + 16))(this);
  return (*(int (__thiscall **)(int *))(*this + 852))(this);
}
