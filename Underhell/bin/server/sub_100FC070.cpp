void __thiscall sub_100FC070(int this)
{
  int v2; // edi
  long double v3; // st6
  float v4; // edx
  float v5; // eax
  double v6; // st5
  float v7[3]; // [esp+Ch] [ebp-1Ch]
  float v8; // [esp+18h] [ebp-10h]
  float v9; // [esp+1Ch] [ebp-Ch]
  float v10; // [esp+20h] [ebp-8h]
  int v11; // [esp+24h] [ebp-4h]

  sub_100D8290((float *)this, 10.0);
  if ( *(_BYTE *)(this + 856) )
  {
    sub_100D8290((float *)this, *(float *)(dword_106B31C8 + 28));
    v2 = 2;
    if ( 0.0 == *(float *)(this + 800) )
    {
      if ( 0.0 != *(float *)(this + 804) )
        v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    v11 = (unsigned __int16)(int)((*(float *)(this + 4 * v2 + 728) - *(float *)(this + 4 * v2 + 844)) * 182.04445);
    v3 = (double)v11 * 0.0054931641;
    if ( v3 > 180.0 )
      v3 = v3 - 360.0;
    v4 = *(float *)(this + 492);
    v5 = *(float *)(this + 496);
    v8 = *(float *)(this + 488);
    v6 = *(float *)(dword_106B31C8 + 28);
    v9 = v4;
    v10 = v5;
    v7[0] = v8 * v6;
    v7[1] = v4 * v6;
    v7[2] = v6 * v5;
    if ( fabs(v7[v2]) > fabs(v3) )
    {
      sub_100FD1D0(0.0);
      sub_100E11A0(this, (float *)(this + 844));
      *(_BYTE *)(this + 856) = 0;
    }
  }
}
