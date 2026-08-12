char __thiscall sub_10090E70(_DWORD *this, int a2, _DWORD *a3, float a4, char a5, float *a6)
{
  double v6; // st7
  double v8; // st6
  float *v9; // eax
  int v10; // esi
  BOOL v11; // eax
  double v12; // st7
  float *v13; // eax
  char v14; // bl
  double v15; // st6
  char result; // al
  double v17; // st7
  double v18; // st5
  double v19; // st6
  double v20; // st4
  double v21; // st2
  double v22; // st1
  double v23; // st4
  double v24; // st2
  double v25; // st3
  int v26; // edi
  float v27; // [esp+0h] [ebp-64h]
  float v28; // [esp+0h] [ebp-64h]
  _DWORD v29[2]; // [esp+14h] [ebp-50h] BYREF
  float v30[3]; // [esp+1Ch] [ebp-48h] BYREF
  int v31; // [esp+28h] [ebp-3Ch]
  int v32; // [esp+2Ch] [ebp-38h]
  float v33; // [esp+30h] [ebp-34h]
  float v34[2]; // [esp+34h] [ebp-30h] BYREF
  int v35; // [esp+3Ch] [ebp-28h]
  int v36; // [esp+40h] [ebp-24h]
  int v37; // [esp+44h] [ebp-20h] BYREF
  float v38; // [esp+48h] [ebp-1Ch]
  float v39; // [esp+50h] [ebp-14h] BYREF
  float v40; // [esp+54h] [ebp-10h]
  float v41; // [esp+58h] [ebp-Ch]
  float v42; // [esp+5Ch] [ebp-8h] BYREF
  char v43; // [esp+63h] [ebp-1h]

  v6 = 0.0;
  v42 = 0.0;
  if ( (int)this[22] <= 0 )
  {
    if ( *(_DWORD *)(a2 + 48) == 2 )
    {
      v26 = *this;
      *a6 = *(float *)a2 - *(float *)(*this + 716);
      a6[1] = *(float *)(a2 + 4) - *(float *)(v26 + 720);
      a6[2] = *(float *)(a2 + 8) - *(float *)(v26 + 724);
      off_10689714();
      return 1;
    }
    else
    {
      *a6 = *(float *)(a2 + 12);
      a6[1] = *(float *)(a2 + 16);
      result = 1;
      a6[2] = *(float *)(a2 + 20);
    }
  }
  else
  {
    if ( !*((_BYTE *)this + 16)
      || *((float *)this + 1) != *(float *)a2
      || *((float *)this + 2) != *(float *)(a2 + 4)
      || (v8 = *(float *)(a2 + 8), v43 = 0, *((float *)this + 3) != v8) )
    {
      v43 = 1;
    }
    if ( (*(_DWORD *)(*this + 236) & 0x4000000) != 0 )
    {
      v9 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 576))(*this);
      sub_1007D1F0(this + 19, v9);
      v6 = 0.0;
    }
    v30[0] = v6;
    v30[1] = v6;
    v32 = 7;
    v33 = v6;
    v36 = 0;
    v34[0] = v6;
    v10 = 1;
    v34[1] = v6;
    v35 = -1;
    *(float *)&v29[1] = 1.0;
    v29[0] = 0;
    v30[2] = NAN;
    v27 = sub_10265030(a2 + 12);
    v31 = 0;
    sub_100908B0(v30, v27, a4);
    v11 = *a3 != -2 && *a3 == -3;
    v31 |= v11;
    if ( a5 && !v43 )
    {
      v33 = 1.0;
      v10 = 2;
      v32 = 6;
      v12 = *((float *)this + 5) - 180.0;
      v35 = -1;
      v36 = 0;
      v28 = v12;
      sub_100908B0(v34, v28, 180.0);
    }
    if ( !sub_1007D430(this + 19, (int)v29, v10, &v42) )
      return 0;
    v13 = (float *)sub_102650F0((int)&v37, v42);
    *a6 = *v13;
    a6[1] = v13[1];
    a6[2] = v13[2];
    if ( *(_DWORD *)(a2 + 48) == 2 )
      sub_10090DA0(this, (float *)a2, SLODWORD(v42), a6);
    v14 = v43;
    if ( v43 )
      goto LABEL_24;
    v15 = v42 - *((float *)this + 5);
    if ( v15 < 0.0 )
      v15 = v15 + 360.0;
    if ( v15 <= 165.0 || v15 >= 195.0 )
    {
LABEL_24:
      *((float *)this + 5) = v42;
      *((float *)this + 6) = *a6;
      *((float *)this + 7) = a6[1];
      *((float *)this + 8) = a6[2];
      (*(void (__thiscall **)(_DWORD, float *))(*(_DWORD *)*this + 536))(*this, &v39);
      if ( v39 != flt_106F1CA8 || v40 != flt_106F1CAC || v41 != flt_106F1CB0 )
      {
        off_10689714();
        v17 = *a6 * 0.80000001;
        v18 = a6[1] * 0.80000001;
        v19 = 0.80000001 * a6[2];
        if ( v14 )
        {
          v23 = v39 * 0.2;
          v24 = v40 * 0.2;
          v25 = 0.2 * v41;
        }
        else
        {
          v20 = *((float *)this + 6) * 0.1;
          v21 = *((float *)this + 7) * 0.1;
          v22 = *((float *)this + 8) * 0.1;
          *(float *)&v37 = v39 * 0.1;
          v38 = v40 * 0.1;
          v23 = v20 + *(float *)&v37;
          v24 = v21 + v38;
          v25 = 0.1 * v41 + v22;
        }
        *a6 = v17 + v23;
        a6[1] = v18 + v24;
        a6[2] = v19 + v25;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
