int __thiscall sub_101452E0(int this, float a2, float *a3, float a4, char a5, float a6)
{
  double v7; // st7
  double v9; // st7
  int v10; // eax
  char v11; // bl
  int v12; // eax
  bool v13; // al
  double v14; // st7
  double v15; // st7
  long double v16; // st6
  bool v17; // c0
  bool v18; // c3
  double v19; // st6
  double v20; // st4
  double v21; // st5
  int result; // eax
  float v23; // [esp+4h] [ebp-20h]
  float v24; // [esp+14h] [ebp-10h]
  float v25; // [esp+14h] [ebp-10h]
  float v26; // [esp+20h] [ebp-4h]
  int v27; // [esp+30h] [ebp+Ch]
  float v28; // [esp+34h] [ebp+10h]
  float v29; // [esp+34h] [ebp+10h]
  float v30; // [esp+3Ch] [ebp+18h]

  if ( LOBYTE(a4) )
    v7 = -1.0;
  else
    v7 = 1.0;
  v26 = v7;
  v28 = sub_10134630(a2, a3[157], a3[158], a3[155], a3[156]);
  v9 = a2 * 17.6;
  *(float *)&v27 = v9;
  if ( v9 > a3[129] )
  {
    v24 = a3[156] * 0.5;
    v23 = v9;
    v28 = sub_10134630(v23, a3[129], a3[146], a3[156], v24);
  }
  v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 8))(*(_DWORD *)(this + 36));
  v11 = *(_BYTE *)(v10 + 40);
  v12 = *(_DWORD *)(v10 + 16);
  v13 = v12 != 100 && v12;
  if ( v11 )
    goto LABEL_14;
  if ( v13 && a3[147] * a3[129] < *(float *)&v27 )
  {
    v11 = 1;
LABEL_14:
    v14 = a3[164];
LABEL_17:
    v28 = v14 * v28;
    goto LABEL_18;
  }
  if ( LOBYTE(a6) )
  {
    v14 = a3[162];
    goto LABEL_17;
  }
LABEL_18:
  v15 = sub_10134630(a2, a3[157], a3[158], a3[153], a3[154]);
  v16 = fabs(v15);
  v17 = v28 < v16;
  v18 = v28 == v16;
  v19 = v28;
  if ( !v17 && !v18 )
  {
    v20 = v26 >= 0.0 ? 1.0 : -1.0;
    v21 = *(float *)(this + 16) >= 0.0 ? 1.0 : -1.0;
    v30 = v21;
    v29 = v20;
    if ( v30 != v29 )
      v15 = v19;
  }
  if ( v11 )
  {
    v15 = v15 * a3[165];
  }
  else if ( a5 )
  {
    v15 = v15 * a3[161];
  }
  v25 = v15 * *(float *)(dword_106B31C8 + 16);
  result = sub_10424B10(v26, *(float *)(this + 16), v25);
  *(float *)(this + 16) = v26;
  *(_BYTE *)(this + 33) = 0;
  return result;
}
