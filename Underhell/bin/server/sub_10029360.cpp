int __thiscall sub_10029360(int this, float *a2, int a3)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  _BYTE v8[12]; // [esp+4h] [ebp-6Ch] BYREF
  _BYTE v9[32]; // [esp+10h] [ebp-60h] BYREF
  float v10; // [esp+30h] [ebp-40h]
  float v11[3]; // [esp+58h] [ebp-18h] BYREF
  float v12[3]; // [esp+64h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 580);
  v11[0] = *(float *)(this + 580);
  v5 = *(float *)(this + 584);
  v11[1] = *(float *)(this + 584);
  v6 = *(float *)(this + 588);
  v11[2] = *(float *)(this + 588);
  v12[0] = v4 + *a2;
  v12[1] = v5 + a2[1];
  v12[2] = v6 + a2[2];
  sub_102659D0(this, v11, v12, a3, v8);
  if ( 1.0 != v10
    || (*(_DWORD *)(this + 256) & 0x800) != 0
    && !(**(int (__thiscall ***)(int, _BYTE *, _DWORD))dword_106B31F4)(dword_106B31F4, v9, 0) )
  {
    return 0;
  }
  sub_100E0D20(v9);
  sub_100DCB50(0);
  return 1;
}
