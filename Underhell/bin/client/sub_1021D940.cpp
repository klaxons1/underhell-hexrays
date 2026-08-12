float *__thiscall sub_1021D940(int this, _DWORD *a2, float a3, int a4)
{
  double v5; // st6
  double v6; // st7
  float *result; // eax
  int v9; // ebp
  bool v10; // cc
  int v11; // ebx
  int v12; // eax
  int v13; // ebp
  float *v14; // eax
  double v15; // st6
  double v16; // st5
  double v17; // st7
  double v18; // st7
  bool v19; // c3
  double v20; // st7
  double v21; // st7
  float *v22; // eax
  float v23; // [esp+18h] [ebp-8Ch]
  float v24; // [esp+28h] [ebp-7Ch]
  float v25; // [esp+3Ch] [ebp-68h]
  float v26; // [esp+40h] [ebp-64h]
  float v27; // [esp+44h] [ebp-60h]
  float v28; // [esp+48h] [ebp-5Ch] BYREF
  float v29; // [esp+4Ch] [ebp-58h]
  float v30; // [esp+50h] [ebp-54h]
  float v31; // [esp+54h] [ebp-50h] BYREF
  float v32; // [esp+58h] [ebp-4Ch]
  float v33; // [esp+5Ch] [ebp-48h]
  float v34; // [esp+60h] [ebp-44h]
  float v35; // [esp+64h] [ebp-40h]
  float v36; // [esp+68h] [ebp-3Ch]
  _BYTE v37[44]; // [esp+6Ch] [ebp-38h] BYREF
  float v38; // [esp+98h] [ebp-Ch]
  int v39; // [esp+A8h] [ebp+4h]

  v26 = *(float *)(this + 56);
  v25 = *(float *)(this + 60);
  if ( ((1 << *(_DWORD *)(this + 44)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 56) <= 1.0 )
    {
      if ( *(float *)(this + 56) >= 0.0 )
        v26 = *(float *)(this + 56);
      else
        v26 = 0.0;
      v5 = 1.0;
      v6 = 0.0;
    }
    else
    {
      v5 = 1.0;
      v6 = 0.0;
      v26 = 1.0;
    }
    if ( v5 >= *(float *)(this + 60) )
    {
      if ( v6 <= *(float *)(this + 60) )
        v25 = *(float *)(this + 60);
      else
        v25 = v6;
    }
    else
    {
      v25 = v5;
    }
  }
  result = (float *)&a2[17 * *(_DWORD *)(this + 64) + 22];
  v31 = *result;
  v9 = 0;
  v10 = a2[10] <= 0;
  v32 = result[1];
  v33 = result[2];
  v39 = 0;
  if ( !v10 )
  {
    while ( 1 )
    {
      v11 = v9 / 4;
      v12 = v9 / 4 * a2[1581];
      v13 = v9 & 3;
      v14 = (float *)(a2[1517] + 4 * (v13 + v12));
      v15 = v14[4];
      v16 = *v14;
      v17 = v14[8];
      v34 = *v14;
      v35 = v15;
      v36 = v17;
      v24 = (v32 - v15) * (v32 - v15) + (v33 - v17) * (v33 - v17) + (v31 - v16) * (v31 - v16);
      v18 = off_103EDFE0(v24);
      v27 = v18;
      if ( !*(_BYTE *)(this + 217) || v18 >= *(float *)(this + 48) && v18 <= *(float *)(this + 52) )
      {
        if ( *(_BYTE *)(this + 72) )
        {
          v19 = -1.0 == *(float *)(this + 208);
          v29 = v35;
          v28 = v34;
          v30 = v36;
          if ( !v19 && v18 > *(float *)(this + 208) )
          {
            off_103EDFEC(&v28);
            v20 = *(float *)(this + 208);
            v28 = v28 * v20 + v31;
            v29 = v29 * v20 + v32;
            v30 = v20 * v30 + v33;
          }
          (*(void (__thiscall **)(_DWORD, float *, float *, int, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)off_103EE614
                                                                                            + 60)
                                                                                         + 24))(
            *((_DWORD *)off_103EE614 + 60),
            &v31,
            &v28,
            33570945,
            0,
            *(_DWORD *)(this + 204),
            v37);
          if ( v38 == 1.0 )
            v18 = v27;
          else
            v18 = v38 * *(float *)(this + 212) * v27;
        }
        v23 = v18;
        v21 = sub_100260E0(v23, *(float *)(this + 48), *(float *)(this + 52), v26, v25);
        if ( *(_BYTE *)(this + 216) )
          v21 = v21
              * *(float *)(a2[*(_DWORD *)(this + 44) + 1549] + 4 * (v13 + v11 * a2[*(_DWORD *)(this + 44) + 1613]));
        v22 = (float *)(a2[*(_DWORD *)(this + 44) + 1517] + 4 * (v13 + v11 * a2[*(_DWORD *)(this + 44) + 1581]));
        *v22 = (v21 - *v22) * a3 + *v22;
      }
      result = (float *)++v39;
      if ( v39 >= a2[10] )
        break;
      v9 = v39;
    }
  }
  return result;
}
