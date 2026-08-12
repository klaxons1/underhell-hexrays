void __thiscall sub_10353CF0(int this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  int v11; // edi
  int v12; // edx
  _DWORD *v13; // ebx
  int v14; // edi
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // ebx
  float v18; // [esp+0h] [ebp-6Ch]
  float v19; // [esp+0h] [ebp-6Ch]
  float v20; // [esp+4h] [ebp-68h]
  float v21; // [esp+4h] [ebp-68h]
  float v22; // [esp+4h] [ebp-68h]
  float v23; // [esp+8h] [ebp-64h]
  float v24; // [esp+8h] [ebp-64h]
  int v25[3]; // [esp+18h] [ebp-54h] BYREF
  float v26; // [esp+24h] [ebp-48h] BYREF
  float v27; // [esp+28h] [ebp-44h]
  float v28; // [esp+2Ch] [ebp-40h]
  float v29[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v30; // [esp+3Ch] [ebp-30h]
  float v31; // [esp+40h] [ebp-2Ch]
  float v32; // [esp+44h] [ebp-28h]
  float v33; // [esp+48h] [ebp-24h]
  float v34; // [esp+4Ch] [ebp-20h]
  float v35; // [esp+50h] [ebp-1Ch]
  int v36; // [esp+54h] [ebp-18h] BYREF
  float v37; // [esp+58h] [ebp-14h]
  float v38; // [esp+5Ch] [ebp-10h]
  int v39; // [esp+60h] [ebp-Ch]
  float v40; // [esp+64h] [ebp-8h]
  float v41; // [esp+68h] [ebp-4h]

  v40 = sub_100BE820(this, dword_106E68B8);
  v41 = sub_100BE820(this, dword_106E68BC);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    goto LABEL_6;
  sub_100BEFA0((void *)this, "muzzle", (int)&v36, (int)v25);
  v2 = (float *)sub_10352A60((_DWORD *)this, &v26);
  v3 = *v2;
  v33 = *v2;
  v4 = v2[1];
  v34 = v2[1];
  v5 = v2[2];
  v35 = v2[2];
  v30 = v3 - *(float *)&v36;
  v31 = v4 - v37;
  v32 = v5 - v38;
  off_10689714();
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10422220(this + 704, v29);
  if ( v29[1] * v31 + v30 * v29[0] + v29[2] * v32 > 0.30000001 )
  {
    v26 = v33 - *(float *)&v36;
    v27 = v34 - v37;
    v28 = v35 - v38;
    v6 = sub_10029300((float *)this, &v26);
    v20 = v6;
    sub_10424C10(v20, *(float *)&v25[1]);
    v7 = v6 * 0.9 + v40;
    v18 = v7;
    sub_10424B10(v18, v40, 5.0);
    v40 = v7;
    v26 = v33 - *(float *)&v36;
    v27 = v34 - v37;
    v28 = v35 - v38;
    v8 = sub_10265080(&v26);
    v21 = v8;
    sub_10424C10(v21, *(float *)v25);
    v23 = 5.0;
    v22 = v41;
    v9 = v8 * 0.9 + v41;
  }
  else
  {
LABEL_6:
    v10 = *(float *)(this + 492);
    v24 = *(float *)(this + 4160) * 20.0;
    sub_10424B10(*(float *)(this + 492), v40, v24);
    v40 = v10;
    v9 = *(float *)(this + 488);
    v23 = *(float *)(this + 4160) * 20.0;
    v22 = v41;
  }
  v19 = v9;
  sub_10424B10(v19, v22, v23);
  v11 = dword_10700AC8;
  v41 = v9;
  v12 = *(_DWORD *)dword_10700AC8;
  v39 = dword_106E68BC;
  (*(void (__thiscall **)(int))(v12 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v13 = *(_DWORD **)(this + 1100);
  if ( !v13 || !*v13 )
    v13 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  sub_100BE7D0((_DWORD *)this, (int)v13, v39, v41);
  v14 = dword_10700AC8;
  v15 = *(_DWORD *)dword_10700AC8;
  v39 = dword_106E68B8;
  (*(void (__thiscall **)(int))(v15 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v16 = *(_DWORD **)(this + 1100);
  if ( v16 && *v16 )
    v17 = *(_DWORD *)(this + 1100);
  else
    v17 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
  sub_100BE7D0((_DWORD *)this, v17, v39, v40);
}
