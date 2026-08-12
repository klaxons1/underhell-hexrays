char __thiscall sub_100D9020(void *this, int a2)
{
  char result; // al
  float *v4; // ecx
  int v5; // edx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  int v9; // edi
  float *v10; // ecx
  double v11; // st5
  double v12; // rt0
  int v13; // eax
  int v14; // eax
  int v15; // edx
  float v16; // ebx
  double v17; // st6
  double v18; // st5
  double v19; // st5
  double v20; // rt1
  double v21; // st7
  double v22; // st5
  double v23; // st6
  float v24; // [esp+4h] [ebp-24h]
  _BYTE v25[12]; // [esp+18h] [ebp-10h] BYREF
  int v26; // [esp+24h] [ebp-4h]
  int v27; // [esp+30h] [ebp+8h]
  int v28; // [esp+30h] [ebp+8h]

  if ( !a2 || !*(_BYTE *)a2 )
    return 0;
  *(_DWORD *)(a2 + 144) = *(_DWORD *)(dword_106B31C8 + 24);
  v4 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 648))(this, v25);
  if ( *v4 == *(float *)(a2 + 104) && v4[1] == *(float *)(a2 + 108) && v4[2] == *(float *)(a2 + 112) )
  {
    v5 = *(_DWORD *)(a2 + 36);
    v6 = 1.0;
    v7 = 1.0;
    v8 = 0.0;
    v9 = a2 + 100;
    v10 = (float *)(a2 + 36);
    v27 = *(_DWORD *)(a2 + 100) - v5;
    if ( v27 > 0 )
    {
      v26 = *(_DWORD *)(dword_106B31C8 + 24) - v5;
      v11 = (double)v26 / (double)v27;
      if ( v11 <= 1.0 )
      {
        if ( v11 < 0.0 )
          v11 = 0.0;
      }
      else
      {
        v11 = 1.0;
      }
      v12 = v11;
      v8 = 0.0;
      v7 = v12;
    }
    v13 = *(_DWORD *)(a2 + 4);
    if ( v13 && v13 < v5 )
    {
      if ( *(_DWORD *)(dword_106977F4 + 48) )
      {
        v24 = v7;
        sub_10423A50(a2 + 8, a2 + 40, a2 + 104, v24, a2 + 148);
        return 1;
      }
      else
      {
        v14 = *(_DWORD *)(a2 + 68);
        if ( v14 <= v5
          || ((v15 = *(_DWORD *)(dword_106B31C8 + 24), v15 <= v14)
            ? (float *)(v9 = a2 + 68)
            : (v10 = (float *)(a2 + 68)),
              v16 = *v10,
              v28 = *(_DWORD *)v9 - *(_DWORD *)v10,
              v28 <= 0) )
        {
          v6 = v7;
        }
        else
        {
          v17 = v8;
          v26 = v15 - LODWORD(v16);
          v18 = (double)(v15 - LODWORD(v16)) / (double)v28;
          if ( v18 <= 1.0 )
          {
            v6 = v18;
            if ( v17 > v18 )
              v6 = v17;
          }
        }
        result = 1;
        v19 = *(float *)(v9 + 8) - v10[2];
        v20 = *(float *)(v9 + 12) - v10[3];
        *(float *)(a2 + 148) = (*(float *)(v9 + 4) - v10[1]) * v6 + v10[1];
        *(float *)(a2 + 152) = v19 * v6 + v10[2];
        *(float *)(a2 + 156) = v6 * v20 + v10[3];
      }
    }
    else
    {
      v21 = v7;
      result = 1;
      v22 = *(float *)(a2 + 108) - *(float *)(a2 + 44);
      v23 = *(float *)(a2 + 112) - *(float *)(a2 + 48);
      *(float *)(a2 + 148) = (*(float *)(a2 + 104) - *(float *)(a2 + 40)) * v21 + *(float *)(a2 + 40);
      *(float *)(a2 + 152) = v22 * v21 + *(float *)(a2 + 44);
      *(float *)(a2 + 156) = v21 * v23 + *(float *)(a2 + 48);
    }
  }
  else
  {
    *(_BYTE *)a2 = 0;
    return 0;
  }
  return result;
}
