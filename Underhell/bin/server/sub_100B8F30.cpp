void __thiscall sub_100B8F30(int this, float a2, float a3)
{
  int v3; // edx
  double v4; // st7
  double v5; // st6
  bool v6; // c3
  double v7; // st7
  float v8; // [esp+0h] [ebp-4h]

  if ( *(_DWORD *)(this + 8) != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 2] == *(_DWORD *)(this + 8) >> 12 )
  {
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 8) & 0xFFF) + 1];
    if ( v3 )
    {
      if ( *(float *)(this + 36) >= 0.1 )
      {
        if ( -1.0 == a2 )
        {
          v4 = -1.0;
          v5 = *(float *)(this + 36);
        }
        else
        {
          v5 = a2;
          v4 = -1.0;
        }
        *(float *)(this + 12) = v5;
        v6 = a3 == v4;
        v7 = a3;
        if ( v6 )
          v7 = *(float *)(this + 40);
        v8 = v7;
        sub_10043F70((float *)(this + 16), v3, v8);
      }
    }
  }
}
