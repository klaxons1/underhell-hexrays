BOOL __thiscall sub_1007C550(_DWORD *this, int a2, float *a3, float *a4, int a5, int a6, float a7, char a8, float *a9)
{
  float *v9; // esi
  double v11; // st7
  double v12; // st6
  double v13; // st6
  double v14; // st7
  double v15; // st5
  double v16; // st6
  double v17; // st7
  _DWORD *v18; // ecx
  float *v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  double v23; // st6
  double v24; // st5
  double v25; // st7
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // ecx
  _DWORD *v29; // eax
  float v31; // [esp+8h] [ebp-ACh]
  float v32; // [esp+8h] [ebp-ACh]
  char v33[44]; // [esp+18h] [ebp-9Ch] BYREF
  float v34; // [esp+44h] [ebp-70h]
  _BYTE v35[56]; // [esp+6Ch] [ebp-48h] BYREF
  char v36[12]; // [esp+A4h] [ebp-10h] BYREF
  _DWORD *v37; // [esp+B0h] [ebp-4h]
  int savedregs; // [esp+B4h] [ebp+0h] BYREF
  char v39; // [esp+C4h] [ebp+10h]

  v37 = this;
  memset(v35, 0, sizeof(v35));
  v9 = a9;
  if ( !a9 )
    v9 = (float *)v35;
  v11 = *a4 - *a3;
  v12 = a4[1] - a3[1];
  if ( a2 )
  {
    v15 = v12 * v12;
    v16 = a4[2] - a3[2];
    v14 = v11 * v11 + v15;
    v13 = v16 * v16;
  }
  else
  {
    v13 = v12 * v12;
    v14 = v11 * v11;
  }
  v31 = v14 + v13;
  v9[8] = off_10689708(v31);
  v9[9] = 0.0;
  v9[7] = 0.0;
  v9[4] = flt_106F1CA8;
  v9[5] = flt_106F1CAC;
  v9[6] = flt_106F1CB0;
  *v9 = 0.0;
  v9[1] = *a3;
  v9[2] = a3[1];
  v17 = a3[2];
  v9[3] = a3[2];
  switch ( a2 )
  {
    case 0:
      v39 = 0;
      if ( (a8 & 1) != 0 )
        v39 = 4;
      if ( (a8 & 2) != 0 )
        v39 |= 8u;
      v18 = v37;
      if ( *(_DWORD *)(dword_106932C4 + 48) && (*(_DWORD *)(v37[1] + 236) & 0x1000) != 0 )
        v39 |= 8u;
      if ( (a8 & 4) != 0 )
        *((_BYTE *)v37 + 8) = 1;
      if ( (a8 & 8) == 0 )
        goto LABEL_19;
      v19 = (float *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)v18[1] + 504))(v18[1], v36);
      sub_10079E50((int)v37, (int)&savedregs, (int)v9, v19, a4, a5, 1, (int)v33);
      if ( v34 <= 0.99 )
      {
        v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
        if ( v20 && (v21 = *(_DWORD *)(v20 + 12)) != 0 )
          v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 20))(v21);
        else
          v22 = 0;
        *((_DWORD *)v9 + 7) = v22;
        v9[4] = flt_106F1CA8;
        v9[5] = flt_106F1CAC;
        v9[6] = flt_106F1CB0;
        *v9 = NAN;
        v23 = a4[1] - a3[1];
        v24 = *a4 - *a3;
        v32 = v24 * v24 + v23 * v23;
        v25 = off_10689708(v32);
        v26 = v37;
        v9[9] = v25;
        *((_BYTE *)v26 + 8) = 0;
      }
      else
      {
        v18 = v37;
LABEL_19:
        sub_1007C370((int)v18, a3, (int)a4, a5, a6, v39, a7, (int)v9);
        *((_BYTE *)v37 + 8) = 0;
      }
LABEL_29:
      if ( *(int *)v9 < 0 )
      {
        v27 = *((_DWORD *)v9 + 7);
        if ( v27 )
        {
          if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                 dword_106B31D0,
                 *(_DWORD *)(v27 + 24)) )
          {
            v28 = *((_DWORD *)v9 + 7);
            if ( v28 )
            {
              v29 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 8))(v28);
              v37[4] = *v29;
              return *(_DWORD *)v9 >= 0;
            }
            v37[4] = -1;
          }
        }
      }
      return *(_DWORD *)v9 >= 0;
    case 1:
      sub_1007B0B0(v37, *(float *)&a3, *(float *)&a4, a5, a6, (int)v9);
      goto LABEL_29;
    case 2:
      sub_1007A080(v37, a3, a4, a5, a6, (int)v9);
      goto LABEL_29;
    case 3:
      sub_1007A1A0(v37, a3, a4, a6, (int)v9);
      goto LABEL_29;
    default:
      *v9 = NAN;
      sub_10079A70(a2, a3, a4);
      v9[9] = v17;
      goto LABEL_29;
  }
}
