int __thiscall sub_100FD1D0(int this, float a2)
{
  long double v3; // st7
  int v4; // eax
  long double v6; // st6
  long double v7; // st7
  long double v8; // st6
  float v9; // [esp+0h] [ebp-8h]

  v3 = fabs(a2);
  if ( *(_BYTE *)(this + 840) )
    v3 = v3 * -1.0;
  v4 = *(_DWORD *)(this + 248);
  *(float *)(this + 824) = v3;
  if ( (v4 & 0x10) == 0 )
  {
    v9 = v3;
    sub_100FCCC0(this, v9);
LABEL_5:
    *(_DWORD *)(this + 4) = sub_100FC070;
    goto LABEL_6;
  }
  if ( *(float *)(this + 108) > 0.0 && v3 < 0.0 )
  {
    *(_DWORD *)(this + 4) = sub_100FD170;
  }
  else if ( *(float *)(this + 108) >= 0.0 || v3 <= 0.0 )
  {
    v6 = v3;
    v7 = fabs(*(float *)(this + 108));
    v8 = fabs(v6);
    if ( v8 <= v7 )
    {
      if ( v8 >= v7 )
        goto LABEL_5;
      *(_DWORD *)(this + 4) = sub_100FD110;
    }
    else
    {
      *(_DWORD *)(this + 4) = sub_100FCFD0;
    }
  }
  else
  {
    *(_DWORD *)(this + 4) = sub_100FD170;
  }
LABEL_6:
  if ( *(_BYTE *)(this + 856) )
    return sub_100D8290((float *)this, *(float *)(dword_106B31C8 + 28));
  else
    return sub_100D8290((float *)this, 0.1);
}
