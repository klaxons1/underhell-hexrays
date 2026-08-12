void __thiscall sub_100AC430(_DWORD *this)
{
  int v1; // edx
  double v2; // st6
  double v3; // st6
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]

  v1 = this[1];
  if ( 0.0 != *(float *)(v1 + 3536) )
  {
    v2 = 1000.0 - *(float *)(v1 + 3536);
    if ( v2 < 0.0 )
      v2 = 0.0;
    v3 = v2 * 0.001;
    if ( v3 <= 0.2 )
    {
      v4 = 1.0 - v3 * 5.0;
      v5 = 3.0 * (v4 * v4) - v4 * (v4 * v4 + v4 * v4);
      sub_100A9640(this, v5);
    }
    else
    {
      *(float *)(v1 + 3536) = 0.0;
      sub_100A9640(this, 0.0);
    }
  }
}
