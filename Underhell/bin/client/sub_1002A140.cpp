char __thiscall sub_1002A140(int this, float *a2, float *a3)
{
  float v4; // edi
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  unsigned __int16 *v8; // eax
  _DWORD *v11; // esi
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  _DWORD v19[128]; // [esp+8h] [ebp-27Ch] BYREF
  _BYTE v20[48]; // [esp+208h] [ebp-7Ch] BYREF
  _BYTE v21[48]; // [esp+238h] [ebp-4Ch] BYREF
  float v22; // [esp+268h] [ebp-1Ch] BYREF
  float v23; // [esp+26Ch] [ebp-18h]
  float v24; // [esp+270h] [ebp-14h]
  float v25; // [esp+274h] [ebp-10h] BYREF
  float v26; // [esp+278h] [ebp-Ch]
  float v27; // [esp+27Ch] [ebp-8h]
  int v28; // [esp+280h] [ebp-4h]
  int v29; // [esp+28Ch] [ebp+8h]
  int v30; // [esp+290h] [ebp+Ch]

  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v4 = *(float *)(this + 1940);
  if ( v4 == 0.0 )
    return 0;
  if ( !*(_DWORD *)LODWORD(v4) )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)LODWORD(v4) + 176) + 12 * *(_DWORD *)(this + 1204);
  v6 = *(_DWORD *)LODWORD(v4) + v5 == 0;
  v7 = *(_DWORD *)LODWORD(v4) + v5;
  v28 = v7;
  if ( v6 || !*(_DWORD *)(v7 + 4) )
    return 0;
  v8 = (unsigned __int16 *)sub_100285F0((float *)this, v4);
  sub_1001E360(v8, v19, *(_DWORD *)(*(_DWORD *)LODWORD(v4) + 156));
  *a2 = 3.4028235e38;
  a2[1] = 3.4028235e38;
  a2[2] = 3.4028235e38;
  *a3 = -3.4028235e38;
  a3[1] = -3.4028235e38;
  a3[2] = -3.4028235e38;
  sub_10037F50(this);
  sub_101F0AB0(this + 660, v21);
  v30 = 0;
  if ( *(int *)(v28 + 4) > 0 )
  {
    v29 = 0;
    do
    {
      v11 = (_DWORD *)(*(_DWORD *)(v28 + 8) + v28 + v29);
      sub_101EDC00(v21, v19[*v11], v20);
      sub_101F1070(v20, v11 + 2, v11 + 5, &v22, &v25);
      v12 = v22;
      if ( v22 > (double)*a2 )
        v12 = *a2;
      *a2 = v12;
      v13 = v23;
      if ( v23 > (double)a2[1] )
        v13 = a2[1];
      a2[1] = v13;
      v14 = v24;
      if ( v24 > (double)a2[2] )
        v14 = a2[2];
      a2[2] = v14;
      v15 = v25;
      if ( v25 < (double)*a3 )
        v15 = *a3;
      *a3 = v15;
      v16 = v26;
      if ( v26 < (double)a3[1] )
        v16 = a3[1];
      a3[1] = v16;
      v17 = v27;
      if ( v27 < (double)a3[2] )
        v17 = a3[2];
      a3[2] = v17;
      v29 += 68;
      ++v30;
    }
    while ( v30 < *(_DWORD *)(v28 + 4) );
  }
  return 1;
}
