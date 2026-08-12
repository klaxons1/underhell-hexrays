void __thiscall sub_100AFE60(int this, float *a2, char a3)
{
  double v4; // st7
  float *v5; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st7
  double v10; // st6
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st6
  double v15; // st7
  double v16; // st7
  bool v17; // c0
  bool v18; // c3
  _BYTE v19[44]; // [esp+4h] [ebp-88h] BYREF
  float v20; // [esp+30h] [ebp-5Ch]
  char v21; // [esp+46h] [ebp-46h]
  float v22[3]; // [esp+58h] [ebp-34h] BYREF
  float v23; // [esp+64h] [ebp-28h] BYREF
  float v24; // [esp+68h] [ebp-24h]
  float v25; // [esp+6Ch] [ebp-20h]
  float v26; // [esp+70h] [ebp-1Ch]
  float v27; // [esp+74h] [ebp-18h]
  float v28; // [esp+78h] [ebp-14h]
  __int16 v29; // [esp+7Ch] [ebp-10h]
  float v30; // [esp+80h] [ebp-Ch]
  float v31; // [esp+84h] [ebp-8h]
  float v32; // [esp+88h] [ebp-4h]
  int savedregs; // [esp+8Ch] [ebp+0h] BYREF

  if ( a3 )
  {
    if ( *(_BYTE *)(this + 152) )
      return;
    *(_BYTE *)(this + 152) = 1;
  }
  else if ( *(_BYTE *)(this + 152) )
  {
    *(_BYTE *)(this + 152) = 0;
  }
  if ( !sub_1005A760() )
  {
    if ( *(_BYTE *)(this + 32) )
    {
      v30 = *a2 * 56755.84;
      v31 = a2[1] * 56755.84;
      v32 = 56755.84 * a2[2];
      v11 = (float *)sub_101422C0();
      v22[0] = *v11 + v30;
      v22[1] = v11[1] + v31;
      v22[2] = v11[2] + v32;
      v12 = (float *)sub_101422C0();
      sub_1000FCE0((int)&savedregs, this, v12, v22, 1, 0, 0, (int)v19);
      v13 = 1.0;
      if ( v20 >= 1.0 || (v21 & 4) != 0 )
      {
LABEL_23:
        if ( !*(_DWORD *)(dword_1042F8D4 + 48) )
        {
          v14 = *((float *)off_103DC81C + 4) / *(float *)(dword_1042F884 + 44) + *(float *)(this + 148);
          *(float *)(this + 148) = v14;
          if ( v14 < v13 )
            goto LABEL_25;
        }
        goto LABEL_30;
      }
    }
    else
    {
      v23 = *(float *)(this + 4);
      v24 = *(float *)(this + 8);
      v15 = *(float *)(this + 12);
      v29 = 1;
      v25 = v15;
      v26 = *(float *)(this + 140);
      v27 = 1.0;
      v28 = 0.0625;
      v16 = sub_1005BF10(&v23, (int *)(this + 160));
      v17 = v16 > 1.0;
      v18 = 1.0 == v16;
      v13 = 1.0;
      if ( v17 || v18 )
        goto LABEL_23;
    }
    if ( *(_DWORD *)(dword_1042F8D4 + 48) )
    {
      *(float *)(this + 148) = 0.0;
      return;
    }
    v13 = *(float *)(this + 148) - *((float *)off_103DC81C + 4) / *(float *)(dword_1042F884 + 44);
    *(float *)(this + 148) = v13;
    v14 = 0.0;
    if ( v13 <= 0.0 )
    {
LABEL_25:
      *(float *)(this + 148) = v14;
      return;
    }
LABEL_30:
    *(float *)(this + 148) = v13;
    return;
  }
  if ( *(_BYTE *)(this + 32) )
  {
    v4 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 52))(dword_10439968) + 72) * 0.99900001;
    v30 = *(float *)(this + 20) * v4;
    v31 = *(float *)(this + 24) * v4;
    v32 = v4 * *(float *)(this + 28);
    v5 = (float *)sub_101422C0();
    v6 = v5[1] + v31;
    v7 = v5[2] + v32;
    if ( !*(_DWORD *)(this + 136) || 0.0 == *(float *)(this + 52) || *(float *)(this + 56) == 0.0 )
      v8 = 1.0;
    else
      v8 = *(float *)(this + 52) / *(float *)(this + 56);
    v23 = *v5 + v30;
    v24 = v6;
    v29 = 257;
    v25 = v7;
    v26 = *(float *)(this + 140);
    v27 = v8;
    v28 = 0.0625;
    *(float *)(this + 148) = sub_1005BF10(&v23, (int *)(this + 160)) * *(float *)(this + 36);
  }
  else
  {
    if ( !*(_DWORD *)(this + 136) || 0.0 == *(float *)(this + 52) || *(float *)(this + 56) == 0.0 )
      v9 = 1.0;
    else
      v9 = *(float *)(this + 52) / *(float *)(this + 56);
    v23 = *(float *)(this + 4);
    v24 = *(float *)(this + 8);
    v10 = *(float *)(this + 12);
    v29 = 1;
    v25 = v10;
    v26 = *(float *)(this + 140);
    v27 = v9;
    v28 = 0.0625;
    *(float *)(this + 148) = sub_1005BF10(&v23, (int *)(this + 160));
  }
}
