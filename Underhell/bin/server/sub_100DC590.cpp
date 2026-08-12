int __thiscall sub_100DC590(int this, int a2)
{
  unsigned int v3; // ecx
  float *v4; // eax
  unsigned int v5; // ecx
  float *v6; // edi
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  char v11; // al
  float *v12; // eax
  int v13; // eax
  float *v14; // eax
  double v15; // st6
  double v16; // st7
  float *v17; // edi
  double v18; // st7
  int *v19; // edi
  int v20; // ebx
  float v22[3]; // [esp+4h] [ebp-20h] BYREF
  float v23; // [esp+10h] [ebp-14h]
  float v24; // [esp+14h] [ebp-10h]
  float v25; // [esp+18h] [ebp-Ch]
  float v26; // [esp+1Ch] [ebp-8h]
  float v27; // [esp+20h] [ebp-4h]

  if ( !*(_DWORD *)(this + 24) || !*(_BYTE *)(this + 225) )
    return 0;
  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 != -1
    && (v4 = (float *)&off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1],
        v5 = v3 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v5)
    && *(_DWORD *)v4 )
  {
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v5 )
      v27 = *v4;
    else
      v27 = 0.0;
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    v7 = (float *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v27) + 576))(COERCE_FLOAT(LODWORD(v27)));
    v8 = *v7 - *v6;
    v9 = v7[1] - v6[1];
    v10 = v7[2] - v6[2];
  }
  else
  {
    v8 = 1.0;
    v10 = 0.0;
    v9 = 0.0;
  }
  flt_106B4F40 = v8;
  flt_106B4F44 = v9;
  flt_106B4F48 = v10;
  off_10689714();
  if ( *(int *)(this + 252) >= 0 )
  {
    if ( *(_BYTE *)(this + 306) == 6 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 600))(this, a2);
    }
    else if ( sub_100232D0((_DWORD *)a2) )
    {
      v11 = *(_BYTE *)(this + 306);
      if ( (v11 == 2 || v11 == 3) && (*(_BYTE *)(sub_1001E870((_DWORD *)a2) + 356) & 8) == 0 )
      {
        v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
        v23 = *v12;
        v24 = v12[1];
        v25 = v12[2];
        v13 = sub_100232D0((_DWORD *)a2);
        v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
        v15 = v14[1];
        v16 = v14[2];
        v23 = v23 - *v14;
        v24 = v24 - v15;
        v25 = v25 - v16;
        off_10689714();
        v26 = *(float *)(a2 + 52);
        v17 = sub_10023450((float *)this) + 1;
        v27 = *v17 * *sub_10023450((float *)this);
        v18 = 73728.0 / (sub_10023450((float *)this)[2] * v27) * v26 * 5.0;
        if ( v18 > 1000.0 )
          v18 = 1000.0;
        v22[0] = v23 * v18;
        v22[1] = v24 * v18;
        v22[2] = v18 * v25;
        sub_100EA150(v22);
      }
    }
  }
  if ( *(_BYTE *)(this + 225) == 1 )
    return 1;
  v19 = (int *)(this + 220);
  v20 = *(_DWORD *)(this + 220) - (int)*(float *)(a2 + 52);
  if ( *(_DWORD *)(this + 220) != v20 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v19 = v20;
  }
  if ( *v19 > 0 )
    return 1;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 268))(this, a2);
  return 0;
}
