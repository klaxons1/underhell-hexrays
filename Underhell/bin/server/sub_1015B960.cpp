char __thiscall sub_1015B960(_DWORD *this)
{
  int v2; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  bool v8; // zf
  double v9; // st7
  int v10; // eax
  int v11; // ecx
  long double v12; // st6
  int v13; // ecx
  long double v14; // st7
  int v15; // edi
  double v16; // st7
  float *v17; // eax
  double v18; // st7
  double v19; // st7
  double v20; // st7
  float *v21; // ecx
  double v22; // st6
  double v23; // st5
  double v24; // st7
  double v25; // rt1
  int v26; // ecx
  _BYTE *v27; // ecx
  float v28[2]; // [esp+14h] [ebp-20h] BYREF
  float v29; // [esp+1Ch] [ebp-18h]
  float v30; // [esp+20h] [ebp-14h] BYREF
  int v31; // [esp+24h] [ebp-10h]
  float v32; // [esp+28h] [ebp-Ch]
  float v33; // [esp+2Ch] [ebp-8h]
  char v34; // [esp+33h] [ebp-1h] BYREF

  v2 = this[1];
  if ( *(_BYTE *)(v2 + 3244) )
    goto LABEL_2;
  if ( 0.0 == *(float *)(v2 + 4136) )
  {
    if ( *(_BYTE *)(v2 + 447) < 2u )
    {
      if ( !sub_101C5260(v2) )
      {
LABEL_2:
        *(_DWORD *)(this[2] + 40) |= 2u;
        return 0;
      }
      if ( (*(_BYTE *)(this[2] + 40) & 2) != 0 )
        return 0;
      v6 = this[1];
      if ( *(_BYTE *)(v6 + 2273) )
      {
        if ( (*(_BYTE *)(v6 + 256) & 2) != 0 )
          return 0;
      }
      if ( *(float *)(v6 + 2280) > 0.0 )
        return 0;
      v7 = this[1];
      v8 = *(_DWORD *)(dword_106BB604 + 48) == 0;
      v31 = v7;
      if ( v8 || *(float *)(v6 + 5084) >= 20.0 )
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0);
        (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)this[1] + 1284))(
          this[2] + 152,
          *(_DWORD *)(this[1] + 4508),
          1.0,
          1);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B6E60 + 36))(dword_106B6E60, 2);
        v9 = 1.0;
        v10 = this[1];
        v11 = *(_DWORD *)(v10 + 4508);
        if ( v11 )
          v9 = *(float *)(v11 + 68);
        if ( byte_10627EF5 )
          v12 = 160.0;
        else
          v12 = sqrt((*(float *)(dword_106B6F0C + 44) + *(float *)(dword_106B6F0C + 44)) * 21.0);
        v8 = *(_BYTE *)(v10 + 2273) == 0;
        v13 = this[2];
        v30 = *(float *)(v13 + 72);
        if ( !v8 || (*(_BYTE *)(v10 + 256) & 2) != 0 )
          v14 = v9 * v12;
        else
          v14 = v9 * v12 + *(float *)(v13 + 72);
        *(float *)(v13 + 72) = v14;
        if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
        {
          v15 = v13;
          sub_10422220(v13 + 12, v28);
          v29 = 0.0;
          off_10689714();
          if ( *(_BYTE *)(v15 + 164) || *(_BYTE *)(this[1] + 2272) )
            v16 = 0.1;
          else
            v16 = 0.5;
          v17 = (float *)this[2];
          v33 = fabs(v17[11] * v16);
          v18 = v16 * v17[14] + v17[14];
          v32 = v18;
          sub_10018D40(v17 + 16);
          v19 = v18 + v33;
          if ( v32 >= v19 )
            v20 = v33;
          else
            v20 = v33 - (v19 - v32);
          v21 = (float *)this[2];
          if ( v21[11] < 0.0 )
            v20 = v20 * -1.0;
          v7 = v31;
          v22 = v28[0] * v20;
          v23 = v20;
          v24 = v28[1] * v20;
          v25 = v23 * v29;
          v21[16] = v22 + v21[16];
          v21[17] = v24 + v21[17];
          v21[18] = v25 + v21[18];
        }
        sub_101592C0(this);
        *(float *)(this[2] + 124) = *(float *)(this[2] + 72) - v30 + *(float *)(this[2] + 124);
        *(float *)(this[2] + 100) = *(float *)(this[2] + 100) + 0.15000001;
        if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
        {
          v26 = this[1];
          v30 = 510.0;
          sub_1015B120((float *)(v26 + 2284), &v30);
          v27 = (_BYTE *)(this[1] + 2274);
          v34 = 1;
          sub_1015B150(v27, &v34);
        }
        if ( *(_DWORD *)(dword_106B394C + 48) && *(_BYTE *)(this[1] + 4184) )
          sub_101E37C0();
        sub_102DFF70(v7);
        *(_DWORD *)(this[2] + 40) |= 2u;
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0);
      if ( sub_100E87E0((_BYTE *)this[1]) == 32 )
      {
        *(float *)(this[2] + 72) = 100.0;
      }
      else if ( sub_100E87E0((_BYTE *)this[1]) == 16 )
      {
        *(float *)(this[2] + 72) = 80.0;
      }
      v5 = this[1];
      if ( *(float *)(v5 + 4156) <= 0.0 )
      {
        *(float *)(v5 + 4156) = 1000.0;
        sub_10158170(this);
      }
      return 0;
    }
  }
  else
  {
    *(float *)(v2 + 4136) = *(float *)(v2 + 4136) - *(float *)(dword_106B31C8 + 16);
    v4 = this[1];
    if ( *(float *)(v4 + 4136) < 0.0 )
      *(float *)(v4 + 4136) = 0.0;
    return 0;
  }
}
