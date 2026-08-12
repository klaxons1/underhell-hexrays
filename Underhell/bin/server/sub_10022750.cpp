double __thiscall sub_10022750(float *this, float a2, float a3)
{
  int v4; // edx
  double v5; // st7
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+0h] [ebp-Ch]

  v7 = a2 * 10.0;
  v4 = (int)v7;
  if ( 0.0 == a3 )
  {
    v5 = (double)(int)v7;
  }
  else
  {
    if ( !v4 )
      v4 = 1;
    v8 = a3 * 10.0;
    v5 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, v4, (int)v8);
  }
  this[705] = v5 * 0.1 + *(float *)(dword_106B31C8 + 12);
  return this[705];
}
