void __thiscall sub_10119290(int this)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // eax
  double v5; // st6
  double v6; // st7
  double v7; // st5
  double v8; // st7
  int (__thiscall *v9)(int, _BYTE *); // edx
  double v10; // st6
  double v11; // st5
  float *v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edi
  float v17; // [esp+8h] [ebp-6Ch]
  int v18[4]; // [esp+1Ch] [ebp-58h] BYREF
  int v19[4]; // [esp+2Ch] [ebp-48h] BYREF
  int v20; // [esp+3Ch] [ebp-38h] BYREF
  _BYTE v21[12]; // [esp+40h] [ebp-34h] BYREF
  float v22[3]; // [esp+4Ch] [ebp-28h] BYREF
  float v23[3]; // [esp+58h] [ebp-1Ch] BYREF
  float v24; // [esp+64h] [ebp-10h] BYREF
  float v25; // [esp+68h] [ebp-Ch]
  float v26; // [esp+6Ch] [ebp-8h]
  float v27; // [esp+70h] [ebp-4h]

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    v2 = sub_1025FB50(1);
  else
    v2 = sub_10261B20();
  v3 = v2;
  if ( !v2 )
    return;
  if ( *(_DWORD *)(this + 1152) == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 2] != *(_DWORD *)(this + 1152) >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 1152) & 0xFFF) + 1]
    || (v4 = *(_DWORD *)(this + 1156), v4 == -1)
    || off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 2] != v4 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 1156) & 0xFFF) + 1] )
  {
LABEL_25:
    sub_10118E20(this);
    *(_BYTE *)(this + 1204) = 0;
    return;
  }
  v5 = *(float *)(this + 1164) - *(float *)(this + 1272);
  if ( v5 > 2.0 )
    v5 = 2.0;
  v6 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 1164)) / v5;
  v7 = 0.0;
  if ( v6 <= 1.0 )
  {
    if ( v6 >= 0.0 )
      v7 = v6;
    v8 = 0.0;
  }
  else
  {
    v8 = 0.0;
    v7 = 1.0;
  }
  v27 = 1.0 - v7;
  if ( 1.0 - v7 <= v8 )
  {
    v15 = sub_1026A890(this + 1156);
    v16 = v15;
    if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
      sub_100DAE60(v15);
    sub_101E1CC0(v16 + 704, 0);
    goto LABEL_25;
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v3 + 504))(v3, v23);
  v9 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 504);
  v10 = *(float *)(this + 1172) - v23[1];
  v11 = *(float *)(this + 1176);
  v24 = (*(float *)(this + 1168) - v23[0]) * v27;
  v25 = v10 * v27;
  v26 = v27 * (v11 - v23[2]);
  v12 = (float *)v9(v3, v21);
  v22[0] = *v12 + v24;
  v22[1] = v12[1] + v25;
  v22[2] = v12[2] + v26;
  v13 = sub_1026A890(this + 1156);
  sub_100E0D20(v13, v22);
  if ( sub_1026A890(this + 1140) )
  {
    sub_10423260(this + 1180, &v20);
    sub_10423260(this + 1192, v19);
    v17 = 1.0 - v27;
    sub_104251E0((int)v19, (int)&v20, v17, (int)v18);
    sub_104252C0(v18, &v24);
    v14 = sub_1026A890(this + 1156);
    sub_100E0EA0(v14, &v24);
  }
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), off_10615804);
}
