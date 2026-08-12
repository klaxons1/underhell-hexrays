float *__thiscall sub_1003EEC0(int this, float *a2, int *a3)
{
  float *result; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // eax
  double v15; // st7
  int v16; // eax
  int v17; // eax
  double v18; // st7
  double v19; // st4
  double v20; // rt1
  double v21; // st4
  double v22; // rt2
  double v23; // st4
  int v24; // ebx
  int v25; // eax
  double v26; // st7
  float *v27; // ebx
  double v28; // st7
  long double v29; // st6
  double v30; // st4
  long double v31; // st4
  long double v32; // st5
  _DWORD *v33; // eax
  int v34; // ebx
  int v35; // edi
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  float v39; // [esp+8h] [ebp-70h]
  _BYTE v40[48]; // [esp+18h] [ebp-60h] BYREF
  float v41; // [esp+48h] [ebp-30h] BYREF
  float v42; // [esp+4Ch] [ebp-2Ch]
  float v43; // [esp+50h] [ebp-28h]
  float v44; // [esp+54h] [ebp-24h] BYREF
  float v45; // [esp+58h] [ebp-20h]
  float v46; // [esp+5Ch] [ebp-1Ch]
  int v47; // [esp+60h] [ebp-18h] BYREF
  int v48; // [esp+64h] [ebp-14h]
  int v49; // [esp+68h] [ebp-10h]
  float v50; // [esp+6Ch] [ebp-Ch] BYREF
  float v51; // [esp+70h] [ebp-8h]
  float v52; // [esp+74h] [ebp-4h]
  float v53; // [esp+84h] [ebp+Ch]

  if ( !a3 )
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
    return result;
  }
  v6 = *(_BYTE *)(this + 2640) == 0;
  v7 = *(_DWORD *)(this + 2064);
  v8 = *(_DWORD *)(this + 2068);
  v9 = *(_DWORD *)(this + 2072);
  v47 = v7;
  v48 = v8;
  v49 = v9;
  if ( v6 )
  {
    *(_BYTE *)(this + 2640) = 1;
    *(_DWORD *)(this + 2632) = sub_1003ECC0((_DWORD *)this, "eyes_updown");
    *(_DWORD *)(this + 2636) = sub_1003ECC0((_DWORD *)this, "eyes_rightleft");
    v10 = *(_DWORD *)(this + 2632);
    if ( v10 != -1 )
    {
      v11 = *a3 + *(_DWORD *)(*a3 + 272) + 20 * v10;
      *(_DWORD *)(v11 + 8) = sub_1003E4D0("eyes_updown");
    }
    v12 = *(_DWORD *)(this + 2636);
    if ( v12 != -1 )
    {
      v13 = *a3 + *(_DWORD *)(*a3 + 272) + 20 * v12;
      *(_DWORD *)(v13 + 8) = sub_1003E4D0("eyes_rightleft");
    }
  }
  v14 = *(_DWORD *)(this + 1232);
  if ( v14 > 0 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)(this + 4) + 144))(this + 4, v14, v40) )
    {
      result = a2;
      *a2 = 0.0;
      a2[1] = 0.0;
      a2[2] = 0.0;
      return result;
    }
    sub_101ED8C0(&v47, v40, &v50);
    v15 = 6.0;
    if ( v50 >= 6.0 )
      v15 = v50;
    else
      v50 = 6.0;
    v39 = v15 * v15 + v51 * v51 + v52 * v52;
    v53 = off_103EDFE0(v39);
    off_103EDFEC();
    v16 = *(_DWORD *)(this + 2632);
    v44 = 0.0;
    v45 = 0.0;
    v46 = 0.0;
    if ( v16 != -1 )
      v44 = flt_10405E78[*(_DWORD *)(*(_DWORD *)(*a3 + 272) + 20 * v16 + *a3 + 8)];
    v17 = *(_DWORD *)(this + 2636);
    if ( v17 != -1 )
      v45 = flt_10405E78[*(_DWORD *)(*(_DWORD *)(*a3 + 272) + 20 * v17 + *a3 + 8)];
    sub_101EDFB0(&v44, &v41);
    v18 = v50;
    v19 = 0.0 * (v18 * v18);
    v41 = v19;
    v20 = v19;
    v21 = v42 * (v18 * v18);
    v42 = v21;
    v22 = v21;
    v23 = v18 * v18 * v43;
    v43 = v23;
    v50 = v50 + v20;
    v51 = v22 + v51;
    v52 = v23 + v52;
    off_103EDFEC();
    v24 = *a3;
    v25 = *(_DWORD *)(v24 + 400);
    if ( !v25 || (v26 = *(float *)(v25 + v24 + 12), v27 = (float *)(v25 + v24 + 12), 0.0 == v26) )
      v28 = 0.866;
    else
      v28 = *v27;
    if ( v50 >= v28 )
    {
      v28 = v50;
      v32 = v52;
      v29 = v51;
    }
    else
    {
      v29 = v51;
      v30 = v52;
      if ( v30 * v30 + v29 * v29 <= 0.0 )
      {
        v32 = v52;
        v28 = 1.0;
      }
      else
      {
        v31 = sqrt((1.0 - v28 * v28) / (v29 * v29 + v30 * v30));
        v29 = v29 * v31;
        v32 = v52 * v31;
      }
    }
    v50 = v28 * v53;
    v51 = v29 * v53;
    v52 = v32 * v53;
    sub_101ED860(&v50, v40, &v47);
  }
  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v33 = *(_DWORD **)(this + 1940);
  if ( v33 && *v33 )
    v34 = *(_DWORD *)(this + 1940);
  else
    v34 = 0;
  v35 = *(_DWORD *)dword_10413160;
  v36 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)(this + 4) + 44))(this + 4, &v47);
  (*(void (__thiscall **)(int, int, int))(v35 + 8))(dword_10413160, v34, v36);
  result = a2;
  v37 = v48;
  *(_DWORD *)a2 = v47;
  v38 = v49;
  *((_DWORD *)a2 + 1) = v37;
  *((_DWORD *)a2 + 2) = v38;
  return result;
}
