int __thiscall sub_103293E0(float *this, float a2, int a3)
{
  int v4; // eax
  double v5; // st6
  double v6; // st5
  double v7; // st7
  int result; // eax
  float v9; // [esp+0h] [ebp-8h]

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    return 0;
  v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  v5 = *(float *)(v4 + 720) - this[180];
  v6 = *(float *)(v4 + 716) - this[179];
  v9 = v6 * v6 + v5 * v5;
  v7 = off_10689708(v9);
  if ( *(float *)(dword_106B31C8 + 12) < (double)this[418] )
    return 0;
  if ( v7 > this[958] )
    return 39;
  result = 40;
  if ( a2 >= 0.7 )
    return 23;
  return result;
}
