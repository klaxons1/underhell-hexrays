void __thiscall sub_1020F990(int this, int a2, int a3, int a4, int a5, int a6)
{
  double v7; // st6
  double v8; // st7
  float *v10; // eax
  int v11; // ebx
  int v12; // ebp
  float *v13; // eax
  double v14; // st6
  double v15; // st5
  double v16; // st7
  double v17; // st7
  bool v18; // c3
  double v19; // st7
  double v20; // st7
  float v21; // [esp+18h] [ebp-88h]
  float v22; // [esp+28h] [ebp-78h]
  float v23; // [esp+3Ch] [ebp-64h]
  float v24; // [esp+40h] [ebp-60h]
  float v25; // [esp+44h] [ebp-5Ch] BYREF
  float v26; // [esp+48h] [ebp-58h]
  float v27; // [esp+4Ch] [ebp-54h]
  float v28; // [esp+50h] [ebp-50h] BYREF
  float v29; // [esp+54h] [ebp-4Ch]
  float i; // [esp+58h] [ebp-48h]
  float v31; // [esp+5Ch] [ebp-44h]
  float v32; // [esp+60h] [ebp-40h]
  float v33; // [esp+64h] [ebp-3Ch]
  _BYTE v34[44]; // [esp+68h] [ebp-38h] BYREF
  float v35; // [esp+94h] [ebp-Ch]
  float v36; // [esp+A4h] [ebp+4h]

  v24 = *(float *)(this + 56);
  v23 = *(float *)(this + 60);
  if ( ((1 << *(_DWORD *)(this + 44)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 56) <= 1.0 )
    {
      if ( *(float *)(this + 56) >= 0.0 )
        v24 = *(float *)(this + 56);
      else
        v24 = 0.0;
      v7 = 1.0;
      v8 = 0.0;
    }
    else
    {
      v7 = 1.0;
      v8 = 0.0;
      v24 = 1.0;
    }
    if ( v7 >= *(float *)(this + 60) )
    {
      if ( v8 <= *(float *)(this + 60) )
        v23 = *(float *)(this + 60);
      else
        v23 = v8;
    }
    else
    {
      v23 = v7;
    }
  }
  v10 = (float *)(a2 + 68 * *(_DWORD *)(this + 64) + 88);
  v28 = *v10;
  v29 = v10[1];
  for ( i = v10[2]; a4; ++a3 )
  {
    v11 = a3 / 4;
    v12 = a3 & 3;
    v13 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v12 + a3 / 4 * *(_DWORD *)(a2 + 6324)));
    --a4;
    v14 = v13[4];
    v15 = *v13;
    v16 = v13[8];
    v31 = *v13;
    v32 = v14;
    v33 = v16;
    v22 = (v29 - v14) * (v29 - v14) + (i - v16) * (i - v16) + (v28 - v15) * (v28 - v15);
    v17 = off_103EDFE0(v22);
    v36 = v17;
    if ( !*(_BYTE *)(this + 213) || v17 >= *(float *)(this + 48) && v17 <= *(float *)(this + 52) )
    {
      if ( *(_BYTE *)(this + 68) )
      {
        v18 = -1.0 == *(float *)(this + 204);
        v26 = v32;
        v25 = v31;
        v27 = v33;
        if ( !v18 && v17 > *(float *)(this + 204) )
        {
          off_103EDFEC(&v25);
          v19 = *(float *)(this + 204);
          v25 = v25 * v19 + v28;
          v26 = v26 * v19 + v29;
          v27 = v19 * v27 + i;
        }
        (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)off_103EE614 + 60)
                                                                                       + 24))(
          *((_DWORD *)off_103EE614 + 60),
          &v28,
          &v25,
          33570945,
          0,
          *(_DWORD *)(this + 200),
          v34);
        if ( v35 == 1.0 )
          v17 = v36;
        else
          v17 = v35 * *(float *)(this + 208) * v36;
      }
      v21 = v17;
      v20 = sub_100260E0(v21, *(float *)(this + 48), *(float *)(this + 52), v24, v23);
      if ( *(_BYTE *)(this + 212) )
        v20 = v20
            * *(float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6068)
                       + 4 * (v12 + v11 * *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6324)));
      *(float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6068)
               + 4 * (v12 + v11 * *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6324))) = v20;
    }
  }
}
