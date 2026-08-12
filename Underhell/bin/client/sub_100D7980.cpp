int __thiscall sub_100D7980(float *this, int a2, int a3, float a4, float a5)
{
  double v6; // st7
  double v7; // st7
  double v8; // st7
  int result; // eax
  float v10; // [esp+0h] [ebp-18h]
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+Ch] [ebp-Ch]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]
  float v16; // [esp+14h] [ebp-4h]

  if ( (dword_104337E8 & 1) == 0 )
  {
    dword_104337E8 |= 1u;
    sub_10229600("m_yaw");
  }
  if ( (dword_104337E8 & 2) == 0 )
  {
    dword_104337E8 |= 2u;
    sub_10229600("m_pitch");
  }
  v15 = *(float *)(dword_104337E4 + 44) * 0.011111111;
  v13 = 0.011111111 * *(float *)(dword_104337DC + 44);
  v6 = 1.0;
  if ( *(_DWORD *)(dword_10432C6C + 48) )
    v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 352))(dword_1041315C);
  this[7] = v15 * a4 + this[7];
  this[8] = v6 * a5 * v13 + this[8];
  v10 = this[8] * this[8] + this[7] * this[7];
  v7 = off_103EDFE0(v10);
  v14 = v7;
  if ( 0.0 == v7 )
  {
    this[8] = 0.0;
    this[7] = 0.0;
  }
  else
  {
    this[7] = 1.0 / v7 * this[7];
    this[8] = 1.0 / v7 * this[8];
  }
  v16 = v7;
  v12 = *(float *)(dword_10432B94 + 44);
  v11 = this[7] * this[7] + this[8] * this[8];
  off_103EDFE0(v11);
  v8 = v12;
  if ( v12 >= (double)v14 )
    v8 = v16;
  this[7] = v8 * this[7];
  this[8] = v8 * this[8];
  *(_WORD *)(a3 + 56) = (int)a4;
  result = (int)a5;
  *(_WORD *)(a3 + 58) = result;
  return result;
}
