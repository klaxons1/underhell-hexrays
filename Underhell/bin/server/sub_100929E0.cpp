int __thiscall sub_100929E0(float *this, float a2, int a3)
{
  double v3; // st7
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  float v9; // [esp+0h] [ebp-Ch]
  int v10; // [esp+14h] [ebp+8h]

  v3 = a2;
  v5 = (int)a2;
  v6 = v5;
  v10 = v5;
  v7 = v3 - (double)v5 + this[1105];
  this[1105] = v7;
  if ( v7 > 1.0 )
  {
    do
    {
      v7 = v7 - 1.0;
      ++v6;
    }
    while ( v7 > 1.0 );
    v10 = v6;
    this[1105] = v7;
  }
  v9 = (float)v10;
  return sub_100C7D90(v9, a3);
}
