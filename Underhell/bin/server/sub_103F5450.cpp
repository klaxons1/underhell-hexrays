int __usercall sub_103F5450@<eax>(int a1@<ecx>, int a2@<ebx>, double a3@<st0>)
{
  int result; // eax
  float *v5; // esi
  int v6; // ecx
  int *v7; // ecx
  int v8; // eax
  float *v9; // edx
  int *v10; // ecx
  float v11; // eax
  int v12; // edx
  double v13; // st7
  int (__thiscall *v14)(int, int, int); // eax
  int v15; // ecx
  int *v16; // ecx
  float *v17; // esi
  float v18; // ecx
  double v19; // st7
  int *v20; // ecx
  int v21[3]; // [esp+34h] [ebp-4Ch] BYREF
  float v22[3]; // [esp+40h] [ebp-40h] BYREF
  int v23[3]; // [esp+4Ch] [ebp-34h] BYREF
  float v24[3]; // [esp+58h] [ebp-28h] BYREF
  float v25; // [esp+64h] [ebp-1Ch] BYREF
  float v26; // [esp+68h] [ebp-18h]
  float v27; // [esp+6Ch] [ebp-14h]
  float v28; // [esp+70h] [ebp-10h]
  float *v29; // [esp+74h] [ebp-Ch]
  float v30; // [esp+78h] [ebp-8h]
  int v31; // [esp+7Ch] [ebp-4h] BYREF

  *(_BYTE *)(a1 + 1404) = 0;
  result = sub_100D1940((_DWORD *)a1);
  v5 = (float *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 944))(a1, 182, a2);
      sub_100D18C0(a1);
      v6 = *((_DWORD *)v5 + 418);
      v30 = a3 + *(float *)(dword_106B31C8 + 12);
      if ( v6 != LODWORD(v30) )
      {
        if ( *((_BYTE *)v5 + 84) )
        {
          *((_BYTE *)v5 + 88) |= 1u;
        }
        else
        {
          v7 = (int *)*((_DWORD *)v5 + 6);
          if ( v7 )
            sub_100194B0(v7, 1672);
        }
        v5[418] = v30;
      }
      v8 = *(_DWORD *)(a1 + 1136);
      v9 = (float *)(a1 + 1136);
      v29 = (float *)(a1 + 1136);
      if ( v8 != *((_DWORD *)v5 + 418) )
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
            v9 = v29;
          }
        }
        *v9 = v5[418];
      }
      (*(void (__thiscall **)(float *))(*(_DWORD *)v5 + 1116))(v5);
      v5[1043] = *(float *)(dword_106B31C8 + 12) + 0.5;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 4, 0.0);
      sub_101E3110(v5, 6u, 0, 4u);
      (*(void (__thiscall **)(float *, int *))(*(_DWORD *)v5 + 968))(v5, v21);
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v5 + 1504))(v5, v24, 1.0);
      *(float *)v23 = v24[0] * 1000.0;
      *(float *)&v23[1] = v24[1] * 1000.0;
      *(float *)&v23[2] = 1000.0 * v24[2];
      sub_103D5E20(
        (float *)v21,
        (float *)v23,
        *(float *)(dword_106EF244 + 44),
        *(float *)(dword_106EF2D4 + 44),
        *(float *)(dword_106EF28C + 44),
        (int)v5);
      v31 = 1090519039;
      sub_102600B0((int *)v5, &v31, 0.1, 0.0, 1);
      v25 = v5[182];
      v26 = v5[183];
      v27 = v5[184];
      v30 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -4, 4));
      v25 = (double)SLODWORD(v30) + v25;
      v30 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -4, 4));
      v26 = (double)SLODWORD(v30) + v26;
      v27 = 0.0;
      sub_101E1CC0((int)v5, &v25, 0);
      v11 = COERCE_FLOAT((*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -8, -12));
      v12 = *(_DWORD *)dword_106B31E4;
      v30 = v11;
      v13 = (double)SLODWORD(v11);
      v14 = *(int (__thiscall **)(int, int, int))(v12 + 8);
      v28 = v13;
      v30 = COERCE_FLOAT(v14(dword_106B31E4, 1, 2));
      v22[0] = v28;
      v22[1] = (float)SLODWORD(v30);
      v22[2] = 0.0;
      sub_100F7A60(v5, v22);
      sub_100CF490((char *)v5, 1, *(_DWORD *)(a1 + 1196));
      v15 = *(_DWORD *)(a1 + 1132);
      v30 = *(float *)(dword_106B31C8 + 12) + 0.5;
      if ( v15 != LODWORD(v30) )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v16 = *(int **)(a1 + 24);
          if ( v16 )
            sub_100194B0(v16, 1132);
        }
        *(float *)(a1 + 1132) = v30;
      }
      result = dword_106B31C8;
      v17 = v29;
      v18 = *v29;
      v30 = *(float *)(dword_106B31C8 + 12) + 1.0;
      if ( LODWORD(v18) != LODWORD(v30) )
      {
        result = (int)(v29 - 284);
        if ( *((_BYTE *)v29 - 1052) )
        {
          v19 = v30;
          *(_BYTE *)(result + 88) |= 1u;
          *v17 = v19;
        }
        else
        {
          v20 = *(int **)(result + 24);
          if ( v20 )
            result = sub_100194B0(v20, 1136);
          *v17 = v30;
        }
      }
    }
  }
  return result;
}
