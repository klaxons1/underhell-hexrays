int __thiscall sub_1008ED60(
        _DWORD *this,
        int a2,
        float *a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        float a10,
        float a11)
{
  double v13; // st7
  double v14; // st6
  double v15; // st6
  double v16; // st6
  double v17; // st7
  double v18; // st5
  double v19; // st6
  double v20; // st7
  double v21; // st7
  void *v22; // eax
  char v23; // cl
  _DWORD *v24; // ecx
  int result; // eax
  float v26; // [esp+24h] [ebp-8Ch]
  int v27; // [esp+28h] [ebp-88h]
  float v28; // [esp+28h] [ebp-88h]
  float v29; // [esp+2Ch] [ebp-84h]
  int v30; // [esp+2Ch] [ebp-84h]
  int v31[14]; // [esp+3Ch] [ebp-74h] BYREF
  int v32[14]; // [esp+74h] [ebp-3Ch] BYREF
  _DWORD *v33; // [esp+ACh] [ebp-4h]
  float v34; // [esp+BCh] [ebp+Ch]
  int v35; // [esp+C0h] [ebp+10h]
  bool v36; // [esp+C3h] [ebp+13h]

  v13 = *a4 - *a3;
  v14 = a4[1];
  v33 = this;
  v15 = v14 - a3[1];
  if ( a2 )
  {
    v18 = v15 * v15;
    v19 = a4[2] - a3[2];
    v17 = v13 * v13 + v18;
    v16 = v19 * v19;
  }
  else
  {
    v16 = v15 * v15;
    v17 = v13 * v13;
  }
  v29 = v17 + v16;
  v20 = off_10689708(v29);
  if ( v20 < 0.0625 )
  {
LABEL_22:
    v22 = (void *)sub_1042FCC0(48);
    if ( v22 )
    {
      v30 = a7;
      v27 = a6;
      return sub_100B9A20(v22, (int)a4, a9, a2, v27, v30);
    }
    return 0;
  }
  v36 = ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v33[1] + 1672))(v33[1]) & 0x80) == 0;
  v34 = v20;
  if ( a11 < (double)v34 )
    return 0;
  memset(v32, 0, sizeof(v32));
  v21 = (double)(v36 ? 0x64 : 0);
  *(float *)&v35 = v21;
  v26 = v21;
  sub_1007C550(*(_DWORD **)(v33[1] + 2600), a2, a3, a4, ~(a8 << 19) & 0x2000000 | 0x2400B, a5, v26, 0, (float *)v32);
  if ( v32[0] >= 0 || (v23 = a8, (a8 & 0x100) != 0) && (a6 & 8) != 0 && (v21 = a10, a10 >= (double)*(float *)&v32[9]) )
  {
    v22 = (void *)sub_1042FCC0(48);
    if ( v22 )
    {
      v30 = a7;
      v27 = a6;
      return sub_100B9A20(v22, (int)a4, a9, a2, v27, v30);
    }
    return 0;
  }
  if ( (a8 & 0x20) == 0 )
  {
LABEL_18:
    if ( v32[0] == -3 && (v23 & 0x10) != 0 )
    {
      memset(v31, 0, sizeof(v31));
      sub_1007C550(*(_DWORD **)(v33[1] + 2600), a2, a3, a4, 147467, a5, *(float *)&v35, 0, (float *)v31);
      if ( v31[0] >= 0 && sub_1008E800(v33, (int)a3, (int)a4, v32[7]) )
        goto LABEL_22;
    }
    return 0;
  }
  if ( sub_1008D650((_DWORD **)v33) && (v24 = (_DWORD *)v33[1], v24[581] != 4) && !sub_100697A0(v24, 62, 0)
    || (sub_10079A70(a2, a3, a4),
        v28 = v21 - *(float *)&v32[9],
        (result = (*(int (__thiscall **)(_DWORD *, float *, float *, int, int, int, _DWORD, _DWORD, int))(*v33 + 28))(
                    v33,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    LODWORD(a9),
                    LODWORD(v28),
                    a2)) == 0) )
  {
    v23 = a8;
    goto LABEL_18;
  }
  return result;
}
