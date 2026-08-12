void __thiscall sub_10382AD0(int this)
{
  double v2; // st4
  double v3; // st6
  double v4; // st4
  double v5; // st5
  double v6; // st6
  double v7; // st7
  int v8; // ecx
  double v9; // st6
  float v10; // eax
  float v11; // ecx
  float v12; // [esp+4h] [ebp-10h]
  float v13; // [esp+8h] [ebp-Ch]
  float v14; // [esp+Ch] [ebp-8h]
  float v15; // [esp+10h] [ebp-4h]

  if ( !*(_BYTE *)(this + 3894) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = *(float *)(this + 3900) - *(float *)(this + 584);
    v3 = v2 * v2;
    v4 = *(float *)(this + 3896) - *(float *)(this + 580);
    v5 = v3;
    v6 = *(float *)(this + 3904) - *(float *)(this + 588);
    v7 = v4 * v4 + v5 + v6 * v6;
    v15 = v7;
    if ( v7 <= 144.0 )
    {
      v10 = *(float *)(this + 3628);
      v11 = *(float *)(this + 3632);
      *(float *)(this + 3740) = *(float *)(this + 3624) * -0.5;
      *(float *)(this + 3744) = v10 * -0.5;
      *(float *)(this + 3748) = -0.5 * v11;
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v12 = *(float *)(this + 3896) - *(float *)(this + 580);
      v13 = *(float *)(this + 3900) - *(float *)(this + 584);
      v14 = *(float *)(this + 3904) - *(float *)(this + 588);
      off_10689714();
      v8 = dword_106B31C8;
      if ( *(float *)(this + 3908) >= (double)*(float *)(dword_106B31C8 + 12) )
      {
        *(float *)(this + 3740) = flt_106F1CA8;
        *(float *)(this + 3744) = flt_106F1CAC;
        *(float *)(this + 3748) = flt_106F1CB0;
      }
      else
      {
        if ( v15 <= 576.0 )
          v9 = 6.0;
        else
          v9 = 12.0;
        *(float *)(this + 3740) = v12 * v9;
        *(float *)(this + 3744) = v13 * v9;
        *(float *)(this + 3748) = v9 * v14;
        *(float *)(this + 3908) = *(float *)(v8 + 12) + 1.0;
      }
    }
  }
}
