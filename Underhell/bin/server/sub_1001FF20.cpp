int __thiscall sub_1001FF20(float *this, int a2)
{
  _BYTE v4[4]; // [esp+4h] [ebp-18h] BYREF
  float v5; // [esp+8h] [ebp-14h]
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 900))(this, v4);
  v6[0] = this[668];
  v6[1] = this[667] + v5;
  v6[2] = 0.0;
  sub_10422220(v6, a2);
  return a2;
}
