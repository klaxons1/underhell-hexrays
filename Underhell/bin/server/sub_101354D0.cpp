double __thiscall sub_101354D0(int this, float a2)
{
  double v3; // st7
  double v4; // st5
  char v5; // cl
  double v6; // st6
  double v7; // st7
  double v8; // st6
  double v9; // st6
  double v10; // st6
  bool v11; // zf
  int v12; // eax
  int v13; // edx
  double v14; // st7
  double (__thiscall *v15)(int, _DWORD, _DWORD); // eax
  int v16; // eax
  int v17; // edx
  double v18; // st7
  int v20; // [esp+10h] [ebp-1Ch]
  float v21[3]; // [esp+1Ch] [ebp-10h] BYREF
  int v22; // [esp+28h] [ebp-4h]

  sub_10135430(this, a2);
  while ( 1 )
  {
    v3 = *(float *)(this + 120) - *(float *)(this + 116);
    v4 = a2 - *(float *)(this + 116);
    if ( v4 <= v3 )
    {
      v3 = v4;
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    if ( *(float *)(this + 52) >= (double)*(float *)(this + 124) )
    {
      if ( *(float *)(this + 52) <= (double)*(float *)(this + 124) )
      {
        v7 = a2;
      }
      else
      {
        v9 = v3;
        v7 = a2;
        v10 = *(float *)(this + 52) - v9 * 15.0;
        *(float *)(this + 52) = v10;
        if ( v10 < *(float *)(this + 124) )
          *(float *)(this + 52) = *(float *)(this + 124);
      }
    }
    else
    {
      v6 = v3;
      v7 = a2;
      v8 = v6 * 150.0 + *(float *)(this + 52);
      *(float *)(this + 52) = v8;
      if ( v8 > *(float *)(this + 124) )
        *(float *)(this + 52) = *(float *)(this + 124);
    }
    if ( !v5 )
      break;
    v11 = *(_BYTE *)(this + 128) == 0;
    *(float *)(this + 116) = *(float *)(this + 120);
    if ( v11 )
    {
      v16 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this + 144) + 8))(
              this + 144,
              *(_DWORD *)(this + 20),
              *(_DWORD *)(this + 24));
      v17 = *(_DWORD *)(this + 144);
      v22 = v16;
      v20 = *(_DWORD *)(this + 40);
      *(float *)(this + 124) = (float)v16;
      v22 = (unsigned __int16)(int)((double)(*(_DWORD *)(this + 48)
                                           + (*(int (__thiscall **)(int, int, int))(v17 + 8))(this + 144, -v20, v20))
                                  * 182.04445);
      *(_DWORD *)(this + 48) = (int)((double)v22 * 0.0054931641);
      *(_BYTE *)(this + 128) = 1;
      sub_1010DD80((_DWORD *)(this + 64), 0, 0.0);
      *(float *)(this + 120) = *(float *)(this + 36) + *(float *)(this + 120);
    }
    else
    {
      v12 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this + 144) + 8))(
              this + 144,
              *(_DWORD *)(this + 12),
              *(_DWORD *)(this + 16));
      v13 = *(_DWORD *)(this + 144);
      v22 = v12;
      v14 = (double)v12;
      v15 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v13 + 4);
      *(float *)(this + 124) = v14;
      *(_BYTE *)(this + 128) = 0;
      *(float *)(this + 120) = v15(this + 144, 0.0, *(float *)(this + 32))
                             + *(float *)(this + 28)
                             + *(float *)(this + 120);
      sub_1010DD80((_DWORD *)(this + 88), 0, 0.0);
    }
  }
  *(float *)(this + 116) = v7;
  v21[0] = 0.0;
  v21[1] = (double)*(int *)(this + 48) + *(float *)(this + 132);
  v21[2] = 0.0;
  sub_10422220(v21, &flt_106AFE60);
  v18 = *(float *)(this + 136) * *(float *)(this + 52);
  flt_106AFE60 = flt_106AFE60 * v18;
  flt_106AFE64 = flt_106AFE64 * v18;
  flt_106AFE68 = v18 * flt_106AFE68;
  return a2 + 0.0099999998;
}
