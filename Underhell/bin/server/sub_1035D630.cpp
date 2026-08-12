void __thiscall sub_1035D630(int this, int *a2)
{
  int v3; // eax
  int v4; // ecx
  float *v5; // eax
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st6
  long double v13; // st2
  long double v14; // st6
  long double v15; // st7
  long double v16; // st6
  double v17; // st7
  double v18; // st7
  float v19; // [esp+Ch] [ebp-20h]
  float v20; // [esp+Ch] [ebp-20h]
  float v21[3]; // [esp+14h] [ebp-18h] BYREF
  float v22; // [esp+20h] [ebp-Ch] BYREF
  float v23; // [esp+24h] [ebp-8h]
  float v24; // [esp+28h] [ebp-4h]

  v3 = *a2;
  if ( *a2 == dword_106E7AD0 )
  {
    v4 = *(_DWORD *)(this + 2588);
    if ( **(_DWORD **)(v4 + 36) )
    {
      v5 = (float *)sub_1007DFE0((_DWORD *)v4);
      sub_1035D240(this, v5);
    }
  }
  else if ( v3 == dword_106E7AC8 )
  {
    sub_101C73D0((unsigned int *)this, 0);
    v21[0] = *(float *)(this + 716);
    v21[1] = *(float *)(this + 720);
    v21[2] = *(float *)(this + 724) + 1.0;
    sub_1025F370((void *)this, v21, 0);
    v6 = *(float *)(this + 2868) - *(float *)(this + 720);
    v7 = v6 * v6;
    v8 = *(float *)(this + 2864) - *(float *)(this + 716);
    v9 = v7;
    v10 = *(float *)(this + 2872) - *(float *)(this + 724);
    v19 = v8 * v8 + v9 + v10 * v10;
    v11 = off_10689708(v19);
    v12 = *(float *)(dword_106B6F0C + 44);
    if ( v12 <= 1.0 )
      v12 = 1.0;
    v13 = sqrt(v11 * 0.25 * (v12 + v12));
    v14 = 1.0 / (v13 / v12);
    v15 = (*(float *)(this + 2864) - *(float *)(this + 716)) * v14;
    v16 = v14 * (*(float *)(this + 2868) - *(float *)(this + 720));
    v22 = v15;
    v23 = v16;
    v24 = v13;
    v20 = v13 * v13 + v15 * v15 + v16 * v16;
    v17 = off_10689708(v20);
    if ( v17 > 650.0 )
    {
      v18 = 650.0 / v17;
      v22 = v22 * v18;
      v23 = v23 * v18;
      v24 = v18 * v24;
    }
    *(_DWORD *)(this + 3640) -= (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                  dword_106B31E4,
                                  1,
                                  6);
    if ( *(int *)(this + 3640) <= 0 )
      *(_DWORD *)(this + 3640) = 0;
    sub_1023C380((_DWORD *)this, (int)"NPC_Crow.Hop", 0.0, 0);
    sub_100DD660(this, &v22);
  }
  else if ( v3 == dword_106E7ACC )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 26);
    *(_BYTE *)(this + 3660) = 0;
    *(float *)(this + 3656) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                3.0,
                                5.0)
                            + *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    sub_1003AD70(this, (int)a2);
  }
}
