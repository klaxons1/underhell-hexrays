float *__thiscall sub_100C90A0(int this, float *a2, int a3)
{
  char v5; // al
  float v6; // edx
  int v7; // edi
  unsigned int v8; // eax
  double v9; // st7
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  int v13; // esi
  double v14; // st6
  double v15; // st7
  float *result; // eax
  float v17; // edx
  float v18; // ecx
  double v19; // st7
  float v20; // edx
  float v21; // eax
  double v22; // st7
  double v23; // st6
  float v24; // edx
  float v25; // ecx
  int v26; // ecx
  int v27; // edx
  float v28; // [esp+28h] [ebp-Ch] BYREF
  float v29; // [esp+2Ch] [ebp-8h]
  float v30; // [esp+30h] [ebp-4h]
  float v31; // [esp+40h] [ebp+Ch]

  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B3CDC + 76))(dword_106B3CDC, *(_DWORD *)(a3 + 64));
  v28 = *(float *)(a3 + 4);
  v6 = *(float *)(a3 + 12);
  v29 = *(float *)(a3 + 8);
  v30 = v6;
  if ( v28 == flt_106F1CA8 && v29 == flt_106F1CAC && v30 == flt_106F1CB0 && !v5 )
  {
    if ( *(_DWORD *)(a3 + 40) == -1
      || off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != *(_DWORD *)(a3 + 40) >> 12 )
    {
      v7 = 0;
    }
    else
    {
      v7 = off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1];
    }
    if ( v7
      || ((v8 = *(_DWORD *)(a3 + 44), v8 == -1) || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v8 >> 12
        ? (v7 = 0)
        : (v7 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1]),
          v7) )
    {
      v9 = *(float *)(a3 + 52) * 75.0 * 4.0;
      v31 = v9;
      if ( (*(_BYTE *)(a3 + 64) & 0x40) != 0 )
      {
        v10 = sub_10023450((float *)this);
        v11 = *(float *)(this + 720) - *(float *)(v7 + 720);
        v12 = v10[2] + *(float *)(this + 724) - *(float *)(v7 + 724);
        v28 = *(float *)(this + 716) - *(float *)(v7 + 716);
        v29 = v11;
        v30 = v12;
        off_10689714();
        v28 = v28 * 1.375;
        v29 = v29 * 1.375;
        v30 = 1.375 * v30;
      }
      else
      {
        if ( this == v7 )
        {
          v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -1.0,
                  1.0);
          v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -1.0,
                  1.0);
          v30 = 0.0;
          v9 = 1000.0;
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 1000.0, 2000.0);
LABEL_25:
          result = a2;
          *a2 = v28 * v9;
          a2[1] = v29 * v9;
          a2[2] = v9 * v30;
          return result;
        }
        if ( *(_BYTE *)(v7 + 306) == 6 )
        {
          v13 = *(_DWORD *)(this + 424);
          if ( !v13 )
            v13 = *(_DWORD *)(v7 + 424);
          (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v13 + 204))(v13, &v28, 0);
          (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 116))(v13);
          goto LABEL_25;
        }
        v14 = *(float *)(this + 720) - *(float *)(v7 + 720);
        v15 = *(float *)(this + 724) - *(float *)(v7 + 724);
        v28 = *(float *)(this + 716) - *(float *)(v7 + 716);
        v29 = v14;
        v30 = v15;
        off_10689714();
      }
      v9 = v31;
      goto LABEL_25;
    }
    result = a2;
    v17 = flt_106F1CAC;
    *a2 = flt_106F1CA8;
    v18 = flt_106F1CB0;
    a2[1] = v17;
    a2[2] = v18;
  }
  else if ( (*(_BYTE *)(a3 + 64) & 0x40) != 0 )
  {
    v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.85000002,
            1.15);
    v20 = *(float *)(a3 + 8);
    v21 = *(float *)(a3 + 12);
    v28 = *(float *)(a3 + 4);
    v30 = v21;
    v28 = v28 * v19;
    v29 = v20 * v19;
    if ( v21 <= 0.0 )
    {
      v23 = v19;
      v22 = v21;
    }
    else
    {
      v22 = v21;
      v23 = 1.15;
    }
    result = a2;
    v24 = v29;
    *a2 = v28;
    v30 = v22 * v23;
    v25 = v30;
    a2[1] = v24;
    a2[2] = v25;
  }
  else
  {
    result = a2;
    v26 = *(_DWORD *)(a3 + 8);
    *a2 = *(float *)(a3 + 4);
    v27 = *(_DWORD *)(a3 + 12);
    *((_DWORD *)a2 + 1) = v26;
    *((_DWORD *)a2 + 2) = v27;
  }
  return result;
}
