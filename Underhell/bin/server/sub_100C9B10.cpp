int __thiscall sub_100C9B10(_BYTE *this, float *a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  const char *v9; // ecx
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  double v15; // st7
  float v16; // eax
  float v17; // ecx
  int v18; // esi
  float v20; // [esp+1Ch] [ebp-1ACh]
  _DWORD v21[64]; // [esp+2Ch] [ebp-19Ch] BYREF
  char v22[44]; // [esp+12Ch] [ebp-9Ch] BYREF
  float v23; // [esp+158h] [ebp-70h]
  char v24; // [esp+163h] [ebp-65h]
  float v25; // [esp+180h] [ebp-48h] BYREF
  float v26; // [esp+184h] [ebp-44h]
  float v27; // [esp+188h] [ebp-40h]
  float v28[3]; // [esp+18Ch] [ebp-3Ch] BYREF
  float v29[3]; // [esp+198h] [ebp-30h] BYREF
  float v30[3]; // [esp+1A4h] [ebp-24h] BYREF
  int v31; // [esp+1B0h] [ebp-18h]
  float v32[3]; // [esp+1B4h] [ebp-14h] BYREF
  float v33; // [esp+1C0h] [ebp-8h]
  int v34; // [esp+1C4h] [ebp-4h]
  float v35; // [esp+1D0h] [ebp+8h]

  v3 = 0;
  v4 = *((_DWORD *)this + 63) >> 11;
  v34 = 0;
  if ( (v4 & 1) != 0 )
    sub_100DAE60(this);
  v5 = *((_DWORD *)this + 63) >> 11;
  v28[0] = *((float *)this + 145) - *a2;
  v28[1] = *((float *)this + 146) - a2[1];
  v28[2] = *((float *)this + 147) - a2[2];
  if ( (v5 & 1) != 0 )
    sub_100DAE60(this);
  v30[0] = *((float *)this + 145) + *a2;
  v30[1] = *((float *)this + 146) + a2[1];
  v30[2] = *((float *)this + 147) + a2[2];
  v6 = sub_100D08E0(v21, 64, v28, v30);
  v33 = 1000000.0;
  v31 = v6;
  if ( v6 <= 0 )
    return 0;
  do
  {
    v7 = v21[v3];
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v7 + 540))(v7, &v25, 0);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1200))(v7) )
      goto LABEL_32;
    if ( v26 * v26 + v25 * v25 + v27 * v27 > 1.0 )
      goto LABEL_32;
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 948))(this, v7) )
      goto LABEL_32;
    if ( (unsigned __int8)sub_100D17A0(this) )
      goto LABEL_32;
    if ( sub_100CF460(this) )
    {
      v8 = sub_100CF460(this);
      v9 = *(const char **)(v7 + 92);
      if ( *(const char **)(v8 + 92) == v9 || v9 == "weapon_crowbar" || (unsigned __int8)sub_100D6240("weapon_crowbar") )
        goto LABEL_32;
    }
    v10 = *(float *)(v7 + 720) - *((float *)this + 180);
    v11 = v10 * v10;
    v12 = *(float *)(v7 + 716) - *((float *)this + 179);
    v13 = v11;
    v14 = *(float *)(v7 + 724) - *((float *)this + 181);
    v20 = v12 * v12 + v13 + v14 * v14;
    v15 = off_10689708(v20);
    v35 = v15;
    if ( (*(_DWORD *)(v7 + 248) & 2) != 0 )
    {
      v15 = v15 * 0.5;
      v35 = v15;
    }
    if ( v34 )
    {
      if ( *(char **)(v7 + 92) != "weapon_ar2" )
      {
        if ( !(unsigned __int8)sub_100D6240("weapon_ar2") )
        {
LABEL_21:
          if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1364))(v7) & 0x6000) == 0 || v33 < (double)v35 )
            goto LABEL_32;
          goto LABEL_23;
        }
        v15 = v35;
      }
      v35 = v15 * 0.5;
      goto LABEL_21;
    }
LABEL_23:
    if ( !sub_100C81F0((int)this, (_DWORD *)v7) )
      goto LABEL_39;
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    v16 = *(float *)(v7 + 584);
    v17 = *(float *)(v7 + 588);
    v32[0] = *(float *)(v7 + 580);
    v29[0] = v32[0];
    v32[1] = v16;
    v29[1] = v16;
    v32[2] = v17;
    v29[2] = v17 + 1.0;
    sub_10265A60(this, v32, v29, 33570827, v7, 0, v22);
    if ( !v24 && v23 >= 1.0 )
    {
LABEL_39:
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, int, int, _DWORD))(*(_DWORD *)this + 548))(this, v7, 16449, 0)
        && (!this[1668] || (unsigned __int8)sub_100D0E00(v7)) )
      {
        v34 = v7;
        v33 = v35;
      }
    }
LABEL_32:
    ++v3;
  }
  while ( v3 < v31 );
  v18 = v34;
  if ( v34 )
    sub_100D14A0(2.0, (int)this);
  return v18;
}
