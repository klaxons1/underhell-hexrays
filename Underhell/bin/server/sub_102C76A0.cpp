int __thiscall sub_102C76A0(int *this)
{
  bool v2; // zf
  float v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-4h]

  if ( this[232] > 1 )
    sub_1023B860(this, (int)"SuitRecharge.ChargingLoop");
  v2 = this[231] == 0;
  this[232] = 0;
  if ( !v2 )
    return sub_100EC3F0(this, 0, 0.0, 0);
  v5 = (int)((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 392))(dword_106B3CDC);
  this[230] = v5;
  if ( v5 <= 0 )
    return sub_100EC3F0(this, 0, 0.0, 0);
  v4 = (double)v5 + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0(this, v4, 0);
  return sub_100EC3F0(this, (int)sub_102C7640, 0.0, 0);
}
