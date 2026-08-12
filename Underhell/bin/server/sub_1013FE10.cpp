void __thiscall sub_1013FE10(int this, float a2, char a3)
{
  double v4; // st6
  double v5; // st7
  bool v6; // dl
  double v7; // st5
  double v8; // st6

  if ( *(_BYTE *)(this + 852) )
  {
    if ( a3 || *(float *)(this + 828) <= 0.0 )
      v4 = a2;
    else
      v4 = *(float *)(dword_106B05EC + 44) * a2;
    *(float *)(this + 820) = *(float *)(dword_106B31C8 + 12) + 0.5;
    v5 = v4;
    v6 = *(float *)(this + 828) <= 0.0;
    if ( *(float *)(this + 832) > 0.0 )
    {
      v7 = *(float *)(dword_106B04CC + 44) * v4;
      if ( v7 <= *(float *)(this + 832) )
      {
        *(float *)(this + 832) = *(float *)(this + 832) - v7;
        v5 = 0.0;
      }
      else
      {
        v5 = v4 - *(float *)(this + 832) / *(float *)(dword_106B04CC + 44);
        *(float *)(this + 832) = 0.0;
      }
    }
    v8 = v5 + *(float *)(this + 828);
    *(float *)(this + 828) = v8;
    if ( v6 && v8 > 0.0 && sub_1012B040((unsigned int *)(this + 800), 0) )
      sub_1013FB00(this);
    if ( *(float *)(this + 840) < (double)*(float *)(this + 828) )
      *(float *)(this + 828) = *(float *)(this + 840);
  }
}
