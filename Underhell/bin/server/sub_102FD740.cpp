char __thiscall sub_102FD740(int this, int a2)
{
  int v3; // ebx
  float *v5; // eax
  float *v6; // eax
  int v7; // eax
  float v8; // edx
  float v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  float *v13; // eax
  int v14; // ebx
  double v15; // st7
  double v16; // rtt
  int v17; // ecx
  float v18; // [esp+8h] [ebp-ECh]
  float v19[3]; // [esp+18h] [ebp-DCh] BYREF
  int v20[19]; // [esp+24h] [ebp-D0h] BYREF
  _DWORD v21[12]; // [esp+70h] [ebp-84h] BYREF
  _DWORD v22[12]; // [esp+A0h] [ebp-54h] BYREF
  float v23; // [esp+D0h] [ebp-24h] BYREF
  float v24; // [esp+D4h] [ebp-20h]
  float v25; // [esp+D8h] [ebp-1Ch]
  float v26; // [esp+DCh] [ebp-18h] BYREF
  float v27; // [esp+E0h] [ebp-14h]
  float v28; // [esp+E4h] [ebp-10h]
  float v29; // [esp+E8h] [ebp-Ch] BYREF
  float v30; // [esp+ECh] [ebp-8h]
  float v31; // [esp+F0h] [ebp-4h]
  _DWORD *v32; // [esp+FCh] [ebp+8h]
  float v33; // [esp+FCh] [ebp+8h]

  v3 = sub_1001FCB0((void *)this, a2);
  if ( v3 )
  {
    sub_10020480((_DWORD *)this, 2);
    if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 )
      sub_10020480((_DWORD *)this, 128);
    sub_10072560(v20);
    sub_10070FE0(v20, 401);
    sub_1042C170(2);
    v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    sub_10072770(v20, v5, 2500.0);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    v7 = sub_10072EC0(v6, v20);
    v8 = *(float *)(v3 + 40);
    v29 = *(float *)(v3 + 36);
    v32 = (_DWORD *)v7;
    v9 = *(float *)(v3 + 44);
    v10 = *(_DWORD *)(this + 252) >> 11;
    v30 = v8;
    v31 = v9;
    if ( (v10 & 1) != 0 )
      sub_100DAE60(this);
    v11 = *(_DWORD *)(this + 252) >> 11;
    v31 = *(float *)(this + 588);
    if ( (v11 & 1) != 0 )
      sub_100DAE60(this);
    v26 = *(float *)(this + 580) - v29;
    v27 = *(float *)(this + 584) - v30;
    v28 = *(float *)(this + 588) - v31;
    off_10689714();
    if ( !v32 )
      goto LABEL_16;
    sub_10070340((int)v32, this, &v23);
    *(float *)&v22[8] = 128.0;
    *(float *)&v22[9] = -1.0;
    *(float *)&v22[1] = v23;
    *(float *)&v22[2] = v24;
    v22[5] = dword_106E2974;
    v12 = *(_DWORD *)(this + 2588);
    *(float *)&v22[3] = v25;
    v22[11] = dword_1066A988;
    v22[0] = 4;
    v22[4] = -1;
    v22[6] = -1;
    v22[7] = -1;
    v22[10] = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v12 + 20))(v12, v22, 0) )
    {
      sub_10070B10(v32, this);
      sub_10070510((int)v32, 2.0);
      sub_1007DE40(dword_106E2984);
      v29 = -v26;
      v30 = -v27;
      v31 = -v28;
      sub_1007DF40((int)&v29);
      if ( !*(_BYTE *)(this + 4113) )
        sub_10020460((_DWORD *)this, 2);
      if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 )
        sub_10020460((_DWORD *)this, 128);
      sub_100725D0(v20);
      return 1;
    }
    else
    {
LABEL_16:
      v33 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -20, 20);
      v18 = sub_10029300((float *)this, &v26) + v33;
      v13 = sub_102650F0(v19, v18);
      v26 = *v13;
      v27 = v13[1];
      v28 = v13[2];
      v14 = *(_DWORD *)(v3 + 8);
      v15 = (double)(v14 + (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                             dword_106B31E4,
                             32,
                             64));
      v21[0] = 4;
      v21[4] = -1;
      v21[6] = -1;
      v21[7] = -1;
      v21[10] = 0;
      v16 = v15 * v28 + v31;
      v23 = v26 * v15 + v29;
      v29 = v23;
      *(float *)&v21[1] = v23;
      v24 = v27 * v15 + v30;
      v30 = v24;
      *(float *)&v21[2] = v24;
      v25 = v16;
      v21[5] = dword_106E2974;
      v21[11] = dword_1066A988;
      v17 = *(_DWORD *)(this + 2588);
      v31 = v16 + 8.0;
      *(float *)&v21[8] = 512.0;
      *(float *)&v21[3] = v31;
      *(float *)&v21[9] = -1.0;
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v17 + 20))(v17, v21, 0) )
      {
        sub_1007DE40(dword_106E2984);
        v29 = -v26;
        v30 = -v27;
        v31 = -v28;
        sub_1007DF40((int)&v29);
        if ( !*(_BYTE *)(this + 4113) )
          sub_10020460((_DWORD *)this, 2);
        if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 )
          sub_10020460((_DWORD *)this, 128);
        sub_100725D0(v20);
        return 1;
      }
      else
      {
        if ( !*(_BYTE *)(this + 4113) )
          sub_10020460((_DWORD *)this, 2);
        if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 )
          sub_10020460((_DWORD *)this, 128);
        sub_100725D0(v20);
        return 0;
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 1312))(this, "Unable to find thumper sound!");
    return 0;
  }
}
