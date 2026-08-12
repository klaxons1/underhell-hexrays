void __thiscall sub_10091CE0(int *this, int a2, float a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  int v7; // esi
  int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  double v11; // st7
  int v12; // edi
  int v13; // eax
  double v14; // st6
  double v15; // st5
  double v16; // st7
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // esi
  double v20; // st7
  int v21; // edi
  double v22; // st6
  double v23; // st5
  double v24; // st7
  _DWORD *v25; // eax
  float v26; // [esp+18h] [ebp-58h]
  float v27; // [esp+20h] [ebp-50h]
  float v28; // [esp+20h] [ebp-50h]
  float v29; // [esp+20h] [ebp-50h]
  float v30; // [esp+20h] [ebp-50h]
  float v31; // [esp+20h] [ebp-50h]
  float v32; // [esp+30h] [ebp-40h] BYREF
  float v33; // [esp+34h] [ebp-3Ch]
  float v34; // [esp+38h] [ebp-38h]
  float v35; // [esp+3Ch] [ebp-34h] BYREF
  float v36; // [esp+40h] [ebp-30h]
  float v37; // [esp+44h] [ebp-2Ch]
  float v38; // [esp+48h] [ebp-28h] BYREF
  float v39; // [esp+4Ch] [ebp-24h]
  float v40; // [esp+50h] [ebp-20h]
  float v41; // [esp+54h] [ebp-1Ch] BYREF
  float v42; // [esp+58h] [ebp-18h]
  float v43; // [esp+5Ch] [ebp-14h]
  float v44; // [esp+60h] [ebp-10h]
  int v45; // [esp+64h] [ebp-Ch]
  float v46; // [esp+68h] [ebp-8h]
  int i; // [esp+6Ch] [ebp-4h]
  int v48; // [esp+78h] [ebp+8h]

  v4 = sub_1002A680(&dword_10690DF8);
  v5 = *this;
  v45 = v4;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v5 + 320) + 60))(v5 + 320, &v38, &v41);
  v27 = (v38 - v41) * (v38 - v41) + (v39 - v42) * (v39 - v42);
  v6 = 0;
  v46 = off_10689708(v27) * 0.5;
  for ( i = 0; v6 < sub_1016BFB0(&dword_10690DF8); v6 = i )
  {
    v7 = *(_DWORD *)(v45 + 4 * v6);
    if ( v7 != *this && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 264))(v7) )
    {
      v8 = *(_DWORD *)(a2 + 60);
      if ( !v8
        || ((v9 = *(_DWORD *)(v8 + 16), v9 == -1) || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12
          ? (v10 = 0)
          : (v10 = off_1061BE18[4 * (v9 & 0xFFF) + 1]),
            v7 != v10) )
      {
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v7 + 320) + 60))(v7 + 320, &v35, &v32);
        if ( v43 + 12.0 > v37 && v40 - 12.0 < v34 )
        {
          v28 = (v35 - v32) * (v35 - v32) + (v36 - v33) * (v36 - v33);
          v11 = off_10689708(v28);
          v12 = *this;
          v13 = *(_DWORD *)(*this + 252) >> 11;
          v44 = v11 * 0.5;
          if ( (v13 & 1) != 0 )
            sub_100DAE60(v12);
          if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
            sub_100DAE60(v7);
          v14 = *(float *)(v7 + 584) - *(float *)(v12 + 584);
          v15 = *(float *)(v7 + 580) - *(float *)(v12 + 580);
          v29 = v15 * v15 + v14 * v14;
          v16 = off_10689708(v29);
          if ( v46 + a3 > v16 - v44 )
          {
            v26 = v44;
            v17 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
            sub_10091870(this, v17, v26, v7, 3);
          }
        }
      }
    }
    ++i;
  }
  v18 = sub_1025FB50(1);
  v19 = v18;
  if ( v18 )
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v18 + 320) + 60))(v18 + 320, &v32, &v35);
    if ( v43 + 12.0 > v34 && v40 - 12.0 < v37 )
    {
      v30 = (v32 - v35) * (v32 - v35) + (v33 - v36) * (v33 - v36);
      v20 = off_10689708(v30);
      v21 = *this;
      *(float *)&v48 = v20;
      if ( (*(_DWORD *)(*this + 252) & 0x800) != 0 )
        sub_100DAE60(v21);
      if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
        sub_100DAE60(v19);
      v22 = *(float *)(v19 + 584) - *(float *)(v21 + 584);
      v23 = *(float *)(v19 + 580) - *(float *)(v21 + 580);
      v31 = v23 * v23 + v22 * v22;
      v24 = off_10689708(v31) - *(float *)&v48;
      if ( v46 + a3 > v24 )
      {
        v25 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19);
        sub_10091870(this, v25, *(float *)&v48, v19, 3);
      }
    }
  }
}
