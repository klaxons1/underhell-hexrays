double __thiscall sub_1009C6B0(int this, float a2)
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
  double v19; // st7
  int v21; // [esp+Ch] [ebp-1Ch]
  float v22[3]; // [esp+18h] [ebp-10h] BYREF
  int v23; // [esp+24h] [ebp-4h]

  sub_1009C610(this, a2);
  while ( 1 )
  {
    v3 = *(float *)(this + 72) - *(float *)(this + 68);
    v4 = a2 - *(float *)(this + 68);
    if ( v4 <= v3 )
    {
      v3 = v4;
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    if ( *(float *)(this + 52) >= (double)*(float *)(this + 76) )
    {
      if ( *(float *)(this + 52) <= (double)*(float *)(this + 76) )
      {
        v7 = a2;
      }
      else
      {
        v9 = v3;
        v7 = a2;
        v10 = *(float *)(this + 52) - v9 * 15.0;
        *(float *)(this + 52) = v10;
        if ( v10 < *(float *)(this + 76) )
          *(float *)(this + 52) = *(float *)(this + 76);
      }
    }
    else
    {
      v6 = v3;
      v7 = a2;
      v8 = v6 * 150.0 + *(float *)(this + 52);
      *(float *)(this + 52) = v8;
      if ( v8 > *(float *)(this + 76) )
        *(float *)(this + 52) = *(float *)(this + 76);
    }
    if ( !v5 )
      break;
    v11 = *(_BYTE *)(this + 80) == 0;
    *(float *)(this + 68) = *(float *)(this + 72);
    if ( v11 )
    {
      v16 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this + 96) + 8))(
              this + 96,
              *(_DWORD *)(this + 20),
              *(_DWORD *)(this + 24));
      v17 = *(_DWORD *)(this + 96);
      v23 = v16;
      v21 = *(_DWORD *)(this + 40);
      *(float *)(this + 76) = (float)v16;
      v23 = (unsigned __int16)(int)((double)(*(_DWORD *)(this + 48)
                                           + (*(int (__thiscall **)(int, int, int))(v17 + 8))(this + 96, -v21, v21))
                                  * 182.04445);
      v18 = *(float *)(this + 36) + *(float *)(this + 72);
      *(_DWORD *)(this + 48) = (int)((double)v23 * 0.0054931641);
      *(_BYTE *)(this + 80) = 1;
      *(float *)(this + 72) = v18;
    }
    else
    {
      v12 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)(this + 96) + 8))(
              this + 96,
              *(_DWORD *)(this + 12),
              *(_DWORD *)(this + 16));
      v13 = *(_DWORD *)(this + 96);
      v23 = v12;
      v14 = (double)v12;
      v15 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v13 + 4);
      *(float *)(this + 76) = v14;
      *(_BYTE *)(this + 80) = 0;
      *(float *)(this + 72) = v15(this + 96, 0.0, *(float *)(this + 32)) + *(float *)(this + 28) + *(float *)(this + 72);
    }
  }
  *(float *)(this + 68) = v7;
  v22[0] = 0.0;
  v22[1] = (double)*(int *)(this + 48) + *(float *)(this + 84);
  v22[2] = 0.0;
  sub_101EDFB0(v22, &flt_1042D5F0);
  v19 = *(float *)(this + 88) * *(float *)(this + 52);
  flt_1042D5F0 = flt_1042D5F0 * v19;
  flt_1042D5F4 = flt_1042D5F4 * v19;
  flt_1042D5F8 = v19 * flt_1042D5F8;
  return a2 + 0.0099999998;
}
