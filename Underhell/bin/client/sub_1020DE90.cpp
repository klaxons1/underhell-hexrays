void __thiscall sub_1020DE90(int this, int a2, int a3, int a4, int a5, int a6)
{
  double v7; // st6
  double v8; // st7
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  double v13; // st6
  int v14; // ecx
  bool v15; // zf
  int v16; // eax
  int v17; // ecx
  double v18; // st5
  double v19; // st4
  bool v20; // c0
  bool v21; // c3
  double v22; // st6
  double v23; // st7
  int v24; // ebp
  float *v25; // edi
  double v26; // st7
  float v27; // [esp+0h] [ebp-2Ch]
  float v28; // [esp+24h] [ebp-8h]
  float v29; // [esp+28h] [ebp-4h]

  v29 = *(float *)(this + 60);
  v28 = *(float *)(this + 64);
  if ( ((1 << *(_DWORD *)(this + 48)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 60) <= 1.0 )
    {
      if ( *(float *)(this + 60) >= 0.0 )
        v29 = *(float *)(this + 60);
      else
        v29 = 0.0;
      v7 = 1.0;
      v8 = 0.0;
    }
    else
    {
      v7 = 1.0;
      v8 = 0.0;
      v29 = 1.0;
    }
    if ( v7 >= *(float *)(this + 64) )
    {
      if ( v8 <= *(float *)(this + 64) )
        v8 = *(float *)(this + 64);
    }
    else
    {
      v8 = v7;
    }
    v28 = v8;
  }
  if ( a4 )
  {
    v9 = a3;
    while ( 1 )
    {
      --a4;
      v10 = v9 / 4;
      v11 = v9 / 4 * *(_DWORD *)(a2 + 6356);
      v12 = v9 & 3;
      v13 = *(float *)(*(_DWORD *)(a2 + 6100) + 4 * (v12 + v11));
      v14 = *(_DWORD *)(this + 44);
      v15 = ((1 << v14) & 0x4800) == 0;
      v16 = *(_DWORD *)(a2 + 4 * v14 + 6324);
      v17 = *(_DWORD *)(a2 + 4 * v14 + 6068);
      v18 = v15 ? *(float *)(v17 + 4 * (v12 + v10 * v16)) : (double)*(int *)(v17 + 4 * (v12 + v10 * v16));
      if ( *(float *)(this + 68) > v13 )
      {
        v22 = v18;
      }
      else
      {
        v19 = *(float *)(this + 72);
        v20 = v19 < v13;
        v21 = v19 == v13;
        v22 = v18;
        if ( !v20 && !v21 )
          break;
      }
      if ( -1.0 == *(float *)(this + 68) )
        break;
      v23 = v22;
      if ( -1.0 == *(float *)(this + 72) )
        goto LABEL_21;
LABEL_32:
      v9 = ++a3;
      if ( !a4 )
        return;
    }
    v23 = v22;
LABEL_21:
    if ( !*(_BYTE *)(this + 77) || v23 >= *(float *)(this + 52) && v23 <= *(float *)(this + 56) )
    {
      v24 = *(_DWORD *)(this + 48);
      v25 = (float *)(*(_DWORD *)(a2 + 4 * v24 + 6068) + 4 * (v12 + v10 * *(_DWORD *)(a2 + 4 * v24 + 6324)));
      v27 = v23;
      v26 = sub_100260E0(v27, *(float *)(this + 52), *(float *)(this + 56), v29, v28);
      if ( *(_BYTE *)(this + 76) )
        v26 = v26 * *v25;
      if ( ((1 << v24) & 0x4800) != 0 )
        v26 = (double)(int)v26;
      *v25 = v26;
    }
    goto LABEL_32;
  }
}
