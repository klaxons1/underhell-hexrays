int __thiscall sub_1001FEE0(float *this, int a2)
{
  float v4; // [esp+4h] [ebp-14h]
  _BYTE v5[4]; // [esp+Ch] [ebp-Ch] BYREF
  float v6; // [esp+10h] [ebp-8h]

  (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 900))(this, v5);
  v4 = this[667] + v6;
  sub_102650F0(a2, v4);
  return a2;
}
