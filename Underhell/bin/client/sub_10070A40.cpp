int __thiscall sub_10070A40(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-8h] BYREF
  _DWORD *v6; // [esp+Ch] [ebp-4h] BYREF

  sub_100E85C0(this + 333);
  v3 = a2;
  this[78] |= 0x40000u;
  v6 = this;
  sub_100E8610(v3, 0, 0, &v6);
  result = sub_10229A20(this + 333);
  if ( result )
    return sub_10236250(v5, &a2, this + 298, this + 299);
  this[299] = 0;
  this[298] = 0;
  return result;
}
