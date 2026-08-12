void __thiscall sub_10024AE0(void *this, int a2)
{
  int v3; // eax
  double v4; // st7
  int v5; // ecx
  double v6; // st7
  double v7; // st7
  int v8; // edx
  double v9; // st7
  double v10; // st7
  int v11; // edi
  int v12; // edx
  _DWORD *v13; // ebx
  int v14; // edi
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // ebx
  float v18; // [esp+4h] [ebp-20h]
  float v19; // [esp+4h] [ebp-20h]
  float v20; // [esp+4h] [ebp-20h]
  float v21; // [esp+4h] [ebp-20h]
  float v22; // [esp+8h] [ebp-1Ch]
  float v23; // [esp+10h] [ebp-14h] BYREF
  float v24; // [esp+14h] [ebp-10h]
  int v25; // [esp+1Ch] [ebp-8h]
  int v26; // [esp+20h] [ebp-4h]
  float v27; // [esp+2Ch] [ebp+8h]
  float v28; // [esp+2Ch] [ebp+8h]

  sub_10422540(a2, &v23);
  v27 = sub_100BE820(*((_DWORD *)this + 545));
  *(float *)&v26 = sub_100BE820(*((_DWORD *)this + 546));
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  v22 = 20.0;
  v4 = v23;
  if ( v3 )
  {
    sub_10424B50(v23, v27, v22);
    v18 = v4;
    sub_10424C10(v18, v27);
    v5 = *((_DWORD *)this + 63) >> 11;
    *(float *)&v25 = v4 * 0.8 + v27;
    if ( (v5 & 1) != 0 )
      sub_100DAE60(this);
    v6 = v24;
    sub_10424C10(v24, *((float *)this + 177));
    v19 = v6;
    sub_10424C10(v19, *(float *)&v26);
    v7 = v6 + *(float *)&v26;
  }
  else
  {
    sub_10424B50(v23, v27, v22);
    v20 = v4;
    sub_10424C10(v20, v27);
    v8 = *((_DWORD *)this + 63) >> 11;
    *(float *)&v25 = v4 * 0.6 + v27;
    if ( (v8 & 1) != 0 )
      sub_100DAE60(this);
    v9 = v24;
    sub_10424C10(v24, *((float *)this + 177));
    v21 = v9;
    sub_10424C10(v21, *(float *)&v26);
    v7 = v9 * 0.6 + *(float *)&v26;
  }
  v28 = v7;
  v10 = *(float *)&v25;
  sub_10424CA0(*(float *)&v25);
  *(float *)&v25 = v10;
  sub_10424CA0(v28);
  v11 = dword_10700AC8;
  v12 = *(_DWORD *)dword_10700AC8;
  v26 = *((int *)this + 545);
  (*(void (__thiscall **)(int))(v12 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
    sub_100BD750(this);
  v13 = (_DWORD *)*((_DWORD *)this + 275);
  if ( !v13 || !*v13 )
    v13 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  sub_100BE7D0((int)v13, v26, *(float *)&v25);
  v14 = dword_10700AC8;
  v15 = *(_DWORD *)dword_10700AC8;
  v25 = *((int *)this + 546);
  (*(void (__thiscall **)(int))(v15 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
    sub_100BD750(this);
  v16 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v16 && *v16 )
    v17 = *((_DWORD *)this + 275);
  else
    v17 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
  sub_100BE7D0(v17, v25, v28);
  if ( fabs(v28) >= 20.0 )
  {
    if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
      sub_100DAE60(this);
    *((float *)this + 636) = *((float *)this + 177);
  }
  else
  {
    *((float *)this + 636) = v24;
  }
}
