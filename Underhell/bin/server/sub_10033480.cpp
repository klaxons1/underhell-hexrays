int __thiscall sub_10033480(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int (__thiscall *v8)(_DWORD *); // edx
  int result; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
  v2 = sub_1007DB30(35);
  if ( v2 != -1 && (v3 = v2 - 1000000000, v3 != -1) && ((1 << (v3 & 0x1F)) & this[(v3 >> 5) + 548]) != 0
    || ((*(void (__thiscall **)(_DWORD *))(*this + 2160))(this), v4 = sub_1007DB30(17), v4 != -1)
    && (v5 = v4 - 1000000000, v5 != -1)
    && ((1 << (v5 & 0x1F)) & this[(v5 >> 5) + 548]) != 0
    || ((*(void (__thiscall **)(_DWORD *))(*this + 2160))(this), v6 = sub_1007DB30(18), v6 != -1)
    && (v7 = v6 - 1000000000, v7 != -1)
    && ((1 << (v7 & 0x1F)) & this[(v7 >> 5) + 548]) != 0 )
  {
    sub_1002FE40((int)this);
  }
  if ( this[584] != 1 )
    return -1;
  v8 = *(int (__thiscall **)(_DWORD *))(*this + 1396);
  this[581] = 1;
  result = v8(this);
  this[581] = 4;
  return result;
}
