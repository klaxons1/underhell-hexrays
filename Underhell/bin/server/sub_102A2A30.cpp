char __thiscall sub_102A2A30(_DWORD *this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  float *v10; // eax
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  int v14; // edi
  long double v15; // st7
  float *v16; // eax
  int v17; // eax
  int v18; // eax
  float v20[3]; // [esp+8h] [ebp-44h] BYREF
  float v21[3]; // [esp+14h] [ebp-38h] BYREF
  float v22; // [esp+20h] [ebp-2Ch]
  float v23; // [esp+24h] [ebp-28h]
  float v24; // [esp+28h] [ebp-24h]
  float v25; // [esp+2Ch] [ebp-20h] BYREF
  float v26[2]; // [esp+30h] [ebp-1Ch] BYREF
  float v27; // [esp+38h] [ebp-14h]
  float *v28; // [esp+3Ch] [ebp-10h]
  float *v29; // [esp+40h] [ebp-Ch]
  float v30; // [esp+44h] [ebp-8h]
  float v31; // [esp+48h] [ebp-4h]

  v3 = this[17];
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v4[1] != v3 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v5 + 528))(v5, 0, v21, 0);
  v6 = this[17];
  if ( v6 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  v30 = sub_10111020((float *)(v7 + 320));
  v8 = this[17];
  if ( v8 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9);
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v22 = v11;
  v23 = v12;
  v24 = v13;
  v14 = 0;
  v28 = &v25;
  v29 = v26;
  v31 = atan2(v21[1], v21[0]);
  v27 = v30 * 0.0;
  while ( 1 )
  {
    v15 = sin(v31);
    v16 = v29;
    *v28 = cos(v31);
    *v16 = v15;
    v17 = this[1];
    v25 = v25 * v30 + v22;
    v26[0] = v30 * v26[0] + v23;
    v26[1] = v27 + v24;
    v18 = sub_1008D680(*(_DWORD *)(v17 + 2596), v14, (int)this, &v25);
    if ( v18 != -1 )
      break;
LABEL_17:
    if ( ++v14 > 7 )
      return 0;
  }
  sub_10084FD0((_DWORD *)dword_106935D8, v20, *(_DWORD *)(this[1] + 1676), v18);
  if ( !sub_102A2980(this, v20) )
  {
    v31 = v31 + 0.78539819;
    goto LABEL_17;
  }
  *a2 = v20[0];
  a2[1] = v20[1];
  a2[2] = v20[2];
  return 1;
}
