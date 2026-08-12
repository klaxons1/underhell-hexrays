int __thiscall sub_102565B0(int *this, int a2, int a3)
{
  int (__thiscall *v4)(int *, _DWORD, _DWORD); // eax
  int v6; // [esp-8h] [ebp-10h]

  sub_102366A0(this, a2, a3);
  this[99] = 0;
  this[68] = 0;
  v6 = this[68];
  a3 = 999999;
  sub_100C2010(this + 65, v6, &a3);
  if ( a2 > this[97] )
    sub_10252F40(this);
  v4 = *(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244);
  this[97] = a2;
  return v4(this, 0, 0);
}
