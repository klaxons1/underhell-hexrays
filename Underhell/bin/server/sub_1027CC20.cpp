int __usercall sub_1027CC20@<eax>(int a1@<ecx>, int a2@<ebx>, double a3@<st0>)
{
  int result; // eax
  int v5; // esi
  int v6; // ecx
  int *v7; // ecx
  int v8; // eax
  float *v9; // edx
  int *v10; // ecx
  int v11; // ebx
  double v12; // st7
  int v13; // ebx
  double v14; // st7
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int *v23; // ecx
  float *v24; // esi
  float v25; // ecx
  double v26; // st7
  int *v27; // ecx
  int v28; // [esp+34h] [ebp-5Ch]
  int v29; // [esp+34h] [ebp-5Ch]
  float v30; // [esp+34h] [ebp-5Ch]
  float v31; // [esp+34h] [ebp-5Ch]
  int v32[3]; // [esp+44h] [ebp-4Ch] BYREF
  float v33[3]; // [esp+50h] [ebp-40h] BYREF
  int v34[3]; // [esp+5Ch] [ebp-34h] BYREF
  float v35[3]; // [esp+68h] [ebp-28h] BYREF
  float v36; // [esp+74h] [ebp-1Ch] BYREF
  float v37; // [esp+78h] [ebp-18h]
  int v38; // [esp+7Ch] [ebp-14h]
  float v39; // [esp+80h] [ebp-10h]
  float *v40; // [esp+84h] [ebp-Ch]
  float v41; // [esp+88h] [ebp-8h]
  int v42; // [esp+8Ch] [ebp-4h] BYREF

  *(_BYTE *)(a1 + 1412) = 0;
  result = sub_100D1940((_DWORD *)a1);
  v5 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 944))(a1, 182, a2);
      sub_100D18C0(a1);
      v6 = *(_DWORD *)(v5 + 1672);
      v41 = a3 + *(float *)(dword_106B31C8 + 12);
      if ( v6 != LODWORD(v41) )
      {
        if ( *(_BYTE *)(v5 + 84) )
        {
          *(_BYTE *)(v5 + 88) |= 1u;
        }
        else
        {
          v7 = *(int **)(v5 + 24);
          if ( v7 )
            sub_100194B0(v7, 1672);
        }
        *(float *)(v5 + 1672) = v41;
      }
      v8 = *(_DWORD *)(a1 + 1136);
      v9 = (float *)(a1 + 1136);
      v40 = (float *)(a1 + 1136);
      if ( v8 != *(_DWORD *)(v5 + 1672) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v10 = *(int **)(a1 + 24);
          if ( v10 )
          {
            sub_100194B0(v10, 1136);
            v9 = v40;
          }
        }
        *v9 = *(float *)(v5 + 1672);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 1116))(v5);
      *(float *)(v5 + 4172) = *(float *)(dword_106B31C8 + 12) + 0.5;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 4, 0.0);
      sub_101E3110((void *)v5, 6u, 0, 4u);
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 968))(v5, v32);
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 1504))(v5, v35, 1.0);
      *(float *)v34 = v35[0] * 1000.0;
      *(float *)&v34[1] = v35[1] * 1000.0;
      *(float *)&v34[2] = 1000.0 * v35[2];
      sub_103D5E20(
        (int)v32,
        (int)v34,
        *(float *)(dword_106D12F4 + 44),
        *(float *)(dword_106D1384 + 44),
        *(float *)(dword_106D133C + 44),
        v5);
      v42 = 1090519039;
      sub_102600B0((int *)v5, &v42, 0.1, 0.0, 1);
      v11 = *(_DWORD *)dword_106B31E4;
      v28 = (int)*(float *)(sub_100D0CC0((__int16 *)a1) + 12);
      v12 = *(float *)(sub_100D0CC0((__int16 *)a1) + 8);
      v41 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(v11 + 8))(dword_106B31E4, (int)v12, v28));
      v13 = *(_DWORD *)dword_106B31E4;
      v39 = (float)SLODWORD(v41);
      v29 = (int)*(float *)(sub_100D0CC0((__int16 *)a1) + 20);
      v14 = *(float *)(sub_100D0CC0((__int16 *)a1) + 16);
      v41 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(v13 + 8))(dword_106B31E4, (int)v14, v29));
      v33[0] = v39;
      v33[1] = (float)SLODWORD(v41);
      v33[2] = 0.0;
      sub_100F7A60((float *)v5, v33);
      v36 = *(float *)(v5 + 728);
      v37 = *(float *)(v5 + 732);
      v38 = *(_DWORD *)(v5 + 736);
      v15 = *(_DWORD *)dword_106B31E4;
      v30 = *(float *)(sub_100D0CC0((__int16 *)a1) + 28);
      v16 = sub_100D0CC0((__int16 *)a1);
      v41 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v15 + 4))(
              dword_106B31E4,
              *(float *)(v16 + 24),
              LODWORD(v30));
      v17 = *(_DWORD *)dword_106B31E4;
      v31 = *(float *)(sub_100D0CC0((__int16 *)a1) + 36);
      v18 = sub_100D0CC0((__int16 *)a1);
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v17 + 4))(
              dword_106B31E4,
              *(float *)(v18 + 32),
              LODWORD(v31));
      v39 = v19;
      if ( *(_BYTE *)(v5 + 2272) )
      {
        v20 = sub_100D0CC0((__int16 *)a1);
        v41 = *(float *)(v20 + 40) * v41;
        v21 = sub_100D0CC0((__int16 *)a1);
        v19 = *(float *)(v21 + 40) * v39;
      }
      v36 = v36 + v41;
      v37 = v37 + v19;
      if ( 0.0 != v41 || 0.0 != v19 )
        sub_101E1CC0(v5, &v36, 0);
      sub_100CF490((char *)v5, 1, *(_DWORD *)(a1 + 1196));
      v22 = *(_DWORD *)(a1 + 1132);
      v41 = *(float *)(dword_106B31C8 + 12) + 0.5;
      if ( v22 != LODWORD(v41) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v23 = *(int **)(a1 + 24);
          if ( v23 )
            sub_100194B0(v23, 1132);
        }
        *(float *)(a1 + 1132) = v41;
      }
      result = dword_106B31C8;
      v24 = v40;
      v25 = *v40;
      v41 = *(float *)(dword_106B31C8 + 12) + 1.0;
      if ( LODWORD(v25) != LODWORD(v41) )
      {
        result = (int)(v40 - 284);
        if ( *((_BYTE *)v40 - 1052) )
        {
          v26 = v41;
          *(_BYTE *)(result + 88) |= 1u;
          *v24 = v26;
        }
        else
        {
          v27 = *(int **)(result + 24);
          if ( v27 )
            result = sub_100194B0(v27, 1136);
          *v24 = v41;
        }
      }
    }
  }
  return result;
}
