void __thiscall sub_1021D6A0(int this, int a2, float a3, int a4)
{
  double v5; // st6
  double v6; // st7
  float *v8; // eax
  int v9; // ecx
  float v10; // ebx
  float v11; // ebp
  float v12; // edx
  double v13; // st7
  bool v14; // c3
  double v15; // st7
  int i; // ebx
  double v17; // st7
  float *v18; // eax
  float v19; // [esp+10h] [ebp-78h]
  float v20; // [esp+24h] [ebp-64h]
  float v21; // [esp+28h] [ebp-60h]
  float v22; // [esp+2Ch] [ebp-5Ch] BYREF
  float v23; // [esp+30h] [ebp-58h]
  float v24; // [esp+34h] [ebp-54h]
  float v25; // [esp+38h] [ebp-50h] BYREF
  float v26; // [esp+3Ch] [ebp-4Ch]
  float v27; // [esp+40h] [ebp-48h]
  float v28; // [esp+44h] [ebp-44h]
  float v29; // [esp+48h] [ebp-40h]
  float v30; // [esp+4Ch] [ebp-3Ch]
  _BYTE v31[44]; // [esp+50h] [ebp-38h] BYREF
  float v32; // [esp+7Ch] [ebp-Ch]
  int v33; // [esp+8Ch] [ebp+4h]

  v21 = *(float *)(this + 56);
  v20 = *(float *)(this + 60);
  if ( ((1 << *(_DWORD *)(this + 44)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 56) <= 1.0 )
    {
      if ( *(float *)(this + 56) >= 0.0 )
        v21 = *(float *)(this + 56);
      else
        v21 = 0.0;
      v5 = 1.0;
      v6 = 0.0;
    }
    else
    {
      v5 = 1.0;
      v6 = 0.0;
      v21 = 1.0;
    }
    if ( v5 >= *(float *)(this + 60) )
    {
      if ( v6 <= *(float *)(this + 60) )
        v20 = *(float *)(this + 60);
      else
        v20 = v6;
    }
    else
    {
      v20 = v5;
    }
  }
  v8 = (float *)(a2 + 68 * *(_DWORD *)(this + 64) + 88);
  v25 = *v8;
  v26 = v8[1];
  v9 = 17 * *(_DWORD *)(this + 68);
  v27 = v8[2];
  v10 = *(float *)(a2 + 4 * v9 + 88);
  v11 = *(float *)(a2 + 4 * v9 + 92);
  v12 = *(float *)(a2 + 4 * v9 + 96);
  v28 = v10;
  v29 = v11;
  v30 = v12;
  v19 = (v25 - v28) * (v25 - v28) + (v26 - v11) * (v26 - v11) + (v27 - v12) * (v27 - v12);
  v13 = off_103EDFE0(v19);
  *(float *)&v33 = v13;
  if ( *(_BYTE *)(this + 72) )
  {
    v14 = -1.0 == *(float *)(this + 208);
    v24 = v30;
    v22 = v10;
    v23 = v11;
    if ( !v14 && v13 > *(float *)(this + 208) )
    {
      off_103EDFEC(&v22);
      v15 = *(float *)(this + 208);
      v22 = v22 * v15 + v25;
      v23 = v23 * v15 + v26;
      v24 = v15 * v24 + v27;
    }
    (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)off_103EE614 + 60)
                                                                                   + 24))(
      *((_DWORD *)off_103EE614 + 60),
      &v25,
      &v22,
      33570945,
      0,
      *(_DWORD *)(this + 204),
      v31);
    if ( v32 != 1.0 )
      *(float *)&v33 = v32 * *(float *)(this + 212) * *(float *)&v33;
  }
  for ( i = 0; i < *(_DWORD *)(a2 + 40); *v18 = (v17 - *v18) * a3 + *v18 )
  {
    v17 = sub_100260E0(*(float *)&v33, *(float *)(this + 48), *(float *)(this + 52), v21, v20);
    if ( *(_BYTE *)(this + 216) )
      v17 = v17
          * *(float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6196)
                     + 4 * ((i & 3) + *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6452) * (i / 4)));
    v18 = (float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6068)
                  + 4 * ((i & 3) + *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6324) * (i / 4)));
    ++i;
  }
}
