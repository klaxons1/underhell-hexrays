float *__thiscall sub_100B2B50(int this, float *a2, float *a3, float *a4)
{
  bool v5; // zf
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st7
  double v11; // st5
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // st7
  double v16; // st6
  double v17; // st6
  double v18; // st7
  double v19; // st7
  float *result; // eax
  float v21; // [esp+0h] [ebp-58h]
  float v22; // [esp+4h] [ebp-54h]
  _BYTE v23[12]; // [esp+Ch] [ebp-4Ch] BYREF
  int v24[3]; // [esp+18h] [ebp-40h] BYREF
  float v25[3]; // [esp+24h] [ebp-34h] BYREF
  float v26[3]; // [esp+30h] [ebp-28h] BYREF
  float v27; // [esp+3Ch] [ebp-1Ch]
  int v28; // [esp+40h] [ebp-18h]
  int v29; // [esp+44h] [ebp-14h]
  float v30; // [esp+48h] [ebp-10h]
  float v31; // [esp+4Ch] [ebp-Ch]
  float v32; // [esp+50h] [ebp-8h]
  float v33; // [esp+54h] [ebp-4h]

  if ( dword_1042F990 )
    v5 = *(_DWORD *)(*(_DWORD *)(dword_1042F990 + 28) + 48) == 0;
  else
    v5 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C) == 0;
  if ( !v5 )
  {
    v6 = *(float *)(dword_104347AC + 44);
    v33 = *(float *)(dword_104347AC + 44);
    v32 = v6 * *(float *)(dword_1043483C + 44);
    sub_101EE040(this + 164, v25, v26, v23);
    v7 = v33;
    if ( (*(_DWORD *)(this + 188) & 0x20000) != 0 )
    {
      v7 = v7 * 0.5;
      v33 = v7;
    }
    v30 = *(float *)(this + 176) * v7;
    v31 = v7 * *(float *)(this + 180);
    off_103EDFEC();
    off_103EDFEC();
    v27 = v25[0] * v30 + v26[0] * v31;
    *(float *)&v28 = v26[1] * v31 + v25[1] * v30;
    *(float *)&v29 = v30 * v25[2] + v31 * v26[2] + *(float *)(this + 184) * v33;
    v24[2] = v29;
    *(float *)v24 = v27;
    v24[1] = v28;
    v8 = off_103EDFEC();
    v9 = v32;
    if ( v32 >= v8 )
    {
      v14 = v8;
      v13 = *(float *)&v29;
      v9 = v14;
      v12 = *(float *)&v28;
      v11 = v27;
    }
    else
    {
      v10 = v9 / v8;
      v11 = v27 * v10;
      v12 = *(float *)&v28 * v10;
      v13 = v10 * *(float *)&v29;
    }
    if ( *(float *)(dword_10434764 + 44) <= 0.0 )
    {
      *(float *)(this + 236) = v11;
      *(float *)(this + 240) = v12;
    }
    else
    {
      v21 = v9;
      sub_100B2040((float *)this, (float *)v24, v21, *(float *)(dword_10434764 + 44));
      v22 = *(float *)(this + 240) * *(float *)(this + 240)
          + *(float *)(this + 236) * *(float *)(this + 236)
          + *(float *)(this + 244) * *(float *)(this + 244);
      v15 = off_103EDFE0(v22);
      if ( v15 >= 1.0 )
      {
        v16 = v32 * 0.25;
        if ( v16 <= v15 )
          v16 = v15;
        v17 = v15 - v16 * *(float *)(dword_10434A7C + 44) * *((float *)off_103DC81C + 4);
        if ( v17 < 0.0 )
          v17 = 0.0;
        v18 = v17 / v15;
        *(float *)(this + 236) = *(float *)(this + 236) * v18;
        *(float *)(this + 240) = *(float *)(this + 240) * v18;
        v13 = v18 * *(float *)(this + 244);
      }
      else
      {
        v13 = 0.0;
        *(float *)(this + 236) = 0.0;
        *(float *)(this + 240) = 0.0;
      }
    }
    *(float *)(this + 244) = v13;
    v19 = *((float *)off_103DC81C + 4);
    *(float *)(this + 16) = *(float *)(this + 236) * v19 + *(float *)(this + 16);
    *(float *)(this + 20) = *(float *)(this + 240) * v19 + *(float *)(this + 20);
    *(float *)(this + 24) = v19 * *(float *)(this + 244) + *(float *)(this + 24);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, this + 28);
    if ( *(float *)(dword_10434764 + 44) < 0.0 )
    {
      *(float *)(this + 236) = 0.0;
      *(float *)(this + 240) = 0.0;
      *(float *)(this + 244) = 0.0;
    }
  }
  *a2 = *(float *)(this + 16);
  a2[1] = *(float *)(this + 20);
  a2[2] = *(float *)(this + 24);
  result = a3;
  *a3 = *(float *)(this + 28);
  a3[1] = *(float *)(this + 32);
  a3[2] = *(float *)(this + 36);
  *a4 = *(float *)(this + 48);
  return result;
}
