char __thiscall sub_10029FB0(int this, float *a2, float *a3)
{
  float v4; // esi
  int v6; // ebx
  unsigned __int16 *v7; // eax
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  _DWORD v16[128]; // [esp+8h] [ebp-218h] BYREF
  float v17; // [esp+208h] [ebp-18h] BYREF
  float v18; // [esp+20Ch] [ebp-14h]
  float v19; // [esp+210h] [ebp-10h]
  float v20; // [esp+214h] [ebp-Ch] BYREF
  float v21; // [esp+218h] [ebp-8h]
  float v22; // [esp+21Ch] [ebp-4h]
  int v23; // [esp+228h] [ebp+8h]
  int v24; // [esp+22Ch] [ebp+Ch]

  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v4 = *(float *)(this + 1940);
  if ( v4 == 0.0 || !*(_DWORD *)LODWORD(v4) )
    return 0;
  v6 = *(_DWORD *)LODWORD(v4) + *(_DWORD *)(*(_DWORD *)LODWORD(v4) + 176) + 12 * *(_DWORD *)(this + 1204);
  if ( !v6 || !*(_DWORD *)(v6 + 4) )
    return 0;
  v7 = (unsigned __int16 *)sub_100285F0((float *)this, v4);
  sub_1001E360(v7, v16, *(_DWORD *)(*(_DWORD *)LODWORD(v4) + 156));
  *a2 = 3.4028235e38;
  a2[1] = 3.4028235e38;
  a2[2] = 3.4028235e38;
  v24 = 0;
  *a3 = -3.4028235e38;
  a3[1] = -3.4028235e38;
  a3[2] = -3.4028235e38;
  if ( *(int *)(v6 + 4) > 0 )
  {
    v23 = 0;
    do
    {
      sub_101F1070(
        v16[*(_DWORD *)(v23 + *(_DWORD *)(v6 + 8) + v6)],
        v23 + *(_DWORD *)(v6 + 8) + v6 + 8,
        v23 + *(_DWORD *)(v6 + 8) + v6 + 20,
        &v17,
        &v20);
      v10 = v17;
      if ( v17 > (double)*a2 )
        v10 = *a2;
      *a2 = v10;
      v11 = v18;
      if ( v18 > (double)a2[1] )
        v11 = a2[1];
      a2[1] = v11;
      v12 = v19;
      if ( v19 > (double)a2[2] )
        v12 = a2[2];
      a2[2] = v12;
      v13 = v20;
      if ( v20 < (double)*a3 )
        v13 = *a3;
      *a3 = v13;
      v14 = v21;
      if ( v21 < (double)a3[1] )
        v14 = a3[1];
      a3[1] = v14;
      v15 = v22;
      if ( v22 < (double)a3[2] )
        v15 = a3[2];
      a3[2] = v15;
      v23 += 68;
      ++v24;
    }
    while ( v24 < *(_DWORD *)(v6 + 4) );
  }
  return 1;
}
