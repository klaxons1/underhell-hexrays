char __thiscall sub_100AB140(_DWORD *this)
{
  int v2; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // ecx
  long double v10; // st6
  bool v11; // zf
  int v12; // ecx
  long double v13; // st7
  int v14; // edi
  double v15; // st7
  float *v16; // eax
  double v17; // st7
  double v18; // st7
  double v19; // st7
  float *v20; // ecx
  double v21; // st6
  double v22; // st5
  double v23; // st7
  double v24; // rt1
  float v25[2]; // [esp+10h] [ebp-18h] BYREF
  float v26; // [esp+18h] [ebp-10h]
  float v27; // [esp+1Ch] [ebp-Ch]
  float v28; // [esp+20h] [ebp-8h]
  float v29; // [esp+24h] [ebp-4h]

  v2 = this[1];
  if ( *(_BYTE *)(v2 + 3964) )
    goto LABEL_2;
  if ( 0.0 == *(float *)(v2 + 4212) )
  {
    if ( *(_BYTE *)(v2 + 320) < 2u )
    {
      if ( !sub_100F7AF0(v2) )
      {
LABEL_2:
        *(_DWORD *)(this[2] + 40) |= 2u;
        return 0;
      }
      if ( (*(_BYTE *)(this[2] + 40) & 2) != 0 )
        return 0;
      v6 = this[1];
      if ( *(_BYTE *)(v6 + 3529) )
      {
        if ( (*(_BYTE *)(v6 + 732) & 2) != 0 )
          return 0;
      }
      if ( *(float *)(v6 + 3536) > 0.0 )
        return 0;
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0);
      (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)this[1] + 996))(
        this[2] + 152,
        *(_DWORD *)(this[1] + 4672),
        1.0,
        1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10434620 + 36))(dword_10434620, 2);
      v7 = 1.0;
      v8 = this[1];
      v9 = *(_DWORD *)(v8 + 4672);
      if ( v9 )
        v7 = *(float *)(v9 + 68);
      if ( byte_103E0658 )
        v10 = 160.0;
      else
        v10 = sqrt((*(float *)(dword_10434644 + 44) + *(float *)(dword_10434644 + 44)) * 21.0);
      v11 = *(_BYTE *)(v8 + 3529) == 0;
      v12 = this[2];
      v27 = *(float *)(v12 + 72);
      if ( !v11 || (*(_BYTE *)(v8 + 732) & 2) != 0 )
        v13 = v7 * v10;
      else
        v13 = v7 * v10 + *(float *)(v12 + 72);
      *(float *)(v12 + 72) = v13;
      if ( *((_DWORD *)off_103DC81C + 5) == 1 )
      {
        v14 = v12;
        sub_101EDFB0(v12 + 12, v25);
        v26 = 0.0;
        off_103EDFEC();
        if ( *(_BYTE *)(v14 + 164) || *(_BYTE *)(this[1] + 3528) )
          v15 = 0.1;
        else
          v15 = 0.5;
        v16 = (float *)this[2];
        v29 = fabs(v16[11] * v15);
        v17 = v15 * v16[14] + v16[14];
        v28 = v17;
        sub_10008FA0(v16 + 16);
        v18 = v17 + v29;
        if ( v28 >= v18 )
          v19 = v29;
        else
          v19 = v29 - (v18 - v28);
        v20 = (float *)this[2];
        if ( v20[11] < 0.0 )
          v19 = v19 * -1.0;
        v21 = v25[0] * v19;
        v22 = v19;
        v23 = v25[1] * v19;
        v24 = v22 * v26;
        v20[16] = v21 + v20[16];
        v20[17] = v23 + v20[17];
        v20[18] = v24 + v20[18];
      }
      sub_100AA660(this);
      *(float *)(this[2] + 124) = *(float *)(this[2] + 72) - v27 + *(float *)(this[2] + 124);
      *(float *)(this[2] + 100) = *(float *)(this[2] + 100) + 0.15000001;
      if ( *((_DWORD *)off_103DC81C + 5) == 1 )
      {
        *(float *)(this[1] + 3540) = 510.0;
        *(_BYTE *)(this[1] + 3530) = 1;
      }
      *(_DWORD *)(this[2] + 40) |= 2u;
      return 1;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0);
      if ( sub_1000E280((_BYTE *)this[1]) == 32 )
      {
        *(float *)(this[2] + 72) = 100.0;
      }
      else if ( sub_1000E280((_BYTE *)this[1]) == 16 )
      {
        *(float *)(this[2] + 72) = 80.0;
      }
      v5 = this[1];
      if ( *(float *)(v5 + 4220) <= 0.0 )
      {
        *(float *)(v5 + 4220) = 1000.0;
        sub_100A8AB0(this);
      }
      return 0;
    }
  }
  else
  {
    *(float *)(v2 + 4212) = *(float *)(v2 + 4212) - *((float *)off_103DC81C + 4);
    v4 = this[1];
    if ( *(float *)(v4 + 4212) < 0.0 )
      *(float *)(v4 + 4212) = 0.0;
    return 0;
  }
}
