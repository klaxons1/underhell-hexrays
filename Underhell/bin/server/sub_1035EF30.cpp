char __thiscall sub_1035EF30(int this, float a2)
{
  float *v3; // eax
  float *v5; // eax
  double v6; // st7
  int v7; // edx
  float v8; // [esp+0h] [ebp-74h]
  int v9[20]; // [esp+18h] [ebp-5Ch] BYREF
  int v10[3]; // [esp+68h] [ebp-Ch] BYREF

  if ( sub_100A6190(*(void **)(*(_DWORD *)(this + 2588) + 36)) == 2 && *(_DWORD *)(*(_DWORD *)(this + 2588) + 12) != 2 )
    sub_100223F0(2);
  if ( sub_100223E0((_DWORD *)this) != 2 )
    return 0;
  if ( **(_DWORD **)(*(_DWORD *)(this + 2588) + 36) )
  {
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3676) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( sub_10018CD0((float *)(this + 3664), (float *)(this + 580)) )
      {
        if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
          sub_100DAFD0(this);
        if ( sub_10018CD0((float *)(this + 476), &flt_106F1CA8) )
        {
          v8 = (float)*(int *)(this + 220);
          sub_10248110((int)v9, this, this, v8, 0, 0);
          *(float *)v10 = flt_106F1CA8;
          *(float *)&v10[1] = flt_106F1CAC;
          *(float *)&v10[2] = flt_106F1CB0 - 0.1;
          v3 = (float *)sub_10019640((_DWORD *)this);
          sub_10248740((int)v9, (float *)v10, v3, 1.0);
          sub_100D9E70((int *)this, this, v9);
          return 0;
        }
        v5 = (float *)sub_10019640((_DWORD *)this);
        *(float *)(this + 3664) = *v5;
        *(float *)(this + 3668) = v5[1];
        v6 = v5[2];
      }
      else
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        *(float *)(this + 3664) = *(float *)(this + 580);
        *(float *)(this + 3668) = *(float *)(this + 584);
        v6 = *(float *)(this + 588);
      }
      *(float *)(this + 3672) = v6;
      *(float *)(this + 3676) = *(float *)(dword_106B31C8 + 12) + 1.0;
    }
    if ( *(_BYTE *)(this + 3644) )
    {
      sub_10039F40((int *)this, dword_106E7AD4);
      sub_100EA9A0((int *)this, 1024);
      sub_100223F0(0);
      sub_10020480((_DWORD *)this, 4);
      sub_10020460((_DWORD *)this, 1);
      sub_100E0970(this, v7, 3, 0);
      *(float *)(this + 3632) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                  dword_106B31E4,
                                  5.0,
                                  10.0)
                              + *(float *)(dword_106B31C8 + 12);
      sub_1003AB20((int *)this);
    }
    else
    {
      sub_10039F40((int *)this, 26);
      sub_1035DFF0(this, a2);
    }
    return 1;
  }
  else
  {
    if ( !sub_10043EC0((_DWORD *)this) || *(_DWORD *)sub_10043EC0((_DWORD *)this) == 129 )
    {
      sub_100457E0((_DWORD *)this, 89);
      sub_1035D090(this, 1);
      sub_10039F40((int *)this, 26);
    }
    return 1;
  }
}
