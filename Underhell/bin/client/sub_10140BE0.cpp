int __usercall sub_10140BE0@<eax>(
        int *a1@<eax>,
        int a2@<edx>,
        int a3@<ebx>,
        int a4@<edi>,
        int a5,
        int a6,
        int a7,
        float a8,
        float a9)
{
  int result; // eax
  int v11; // edi
  int v12; // ebx
  double v13; // st7
  double v14; // st6
  double v15; // st5
  bool v16; // c0
  bool v17; // c3
  double v18; // st5
  double v19; // st7
  int v20; // edx
  int v21; // edi
  float *v22; // eax
  int v23; // edi
  int v24; // ebx
  int v25; // edx
  int (__thiscall *v26)(int *, _DWORD *); // edx
  double v27; // [esp+30h] [ebp-6Ch]
  double v28; // [esp+38h] [ebp-64h]
  double v29; // [esp+50h] [ebp-4Ch]
  float v30; // [esp+54h] [ebp-48h]
  float v31; // [esp+58h] [ebp-44h]
  double v32; // [esp+58h] [ebp-44h]
  float v33; // [esp+5Ch] [ebp-40h]
  int v34; // [esp+7Ch] [ebp-20h] BYREF
  _DWORD v35[3]; // [esp+80h] [ebp-1Ch] BYREF
  float v36; // [esp+8Ch] [ebp-10h] BYREF
  float v37; // [esp+90h] [ebp-Ch] BYREF
  float v38; // [esp+94h] [ebp-8h]
  float v39; // [esp+98h] [ebp-4h]

  result = dword_1043AAAC;
  if ( *(_DWORD *)(dword_1043AAAC + 48) || *(_DWORD *)(dword_1043AC5C + 48) )
  {
    if ( !byte_1043A8C0 )
    {
      v34 = a2;
      v35[1] = a6;
      v35[2] = a7;
      v35[0] = a5;
      v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a4, a3);
      if ( v11 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
      v12 = sub_101163A0(0);
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v11 + 32))(v11, &v37, &v36);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 12))(v12);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 16))(v12);
      (*(void (__thiscall **)(int, int, _DWORD, int *, _DWORD))(*(_DWORD *)v11 + 444))(v11, v12, 0, &v34, 0);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 72))(v11, v12, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
      byte_1043A8C0 = 1;
    }
    sub_1013FC40(dword_1043B1E0);
    result = dword_1043AAAC;
    if ( *(_DWORD *)(dword_1043AAAC + 48) || *(_DWORD *)(dword_1043AC5C + 48) )
    {
      v13 = sub_1013FDA0((int)dword_1043B1E0, 0.0);
      v38 = v13;
      v14 = a9;
      if ( a9 >= v13 )
        v15 = v13;
      else
        v15 = a9;
      v16 = a8 < v15;
      v17 = a8 == v15;
      v18 = a8;
      if ( v16 || v17 )
      {
        v18 = a9;
        if ( a9 >= v13 )
        {
          v14 = a9;
          v18 = v13;
          v19 = a8;
        }
        else
        {
          v19 = a8;
          v14 = a9;
        }
      }
      else
      {
        v19 = a8;
      }
      if ( v18 < 0.001 )
        v18 = 0.001;
      if ( *(_DWORD *)(dword_1043AAAC + 48) )
      {
        v33 = v14;
        v31 = v19;
        v30 = v18;
        sub_1013EB00((int)a1, v30, v31, v33);
      }
      result = dword_1043AB84;
      if ( *(_DWORD *)(dword_1043AB84 + 48) || *(_DWORD *)(dword_1043AC5C + 48) )
      {
        if ( *(_DWORD *)(dword_1043B094 + 48) )
        {
          v38 = *(float *)(dword_1043ACA4 + 44);
          v23 = *(_DWORD *)(dword_1043B0DC + 48);
          v39 = *(float *)(dword_1043B0DC + 44);
          v24 = *(_DWORD *)dword_1041315C;
          v25 = *a1;
          v37 = *(float *)(dword_1043B124 + 44);
          v26 = *(int (__thiscall **)(int *, _DWORD *))(v25 + 612);
          v36 = *(float *)(dword_1043B124 + 44);
          v32 = *(float *)v26(a1, v35);
          v29 = v38;
          v28 = sub_1013FDA0((int)dword_1043B1E0, COERCE_FLOAT(1));
          v27 = sub_1013E5D0((char *)dword_1043B1E0, v37, v39) * 100.0;
          return (*(int (**)(int, int, const char *, ...))(v24 + 116))(
                   dword_1041315C,
                   19,
                   "%.2f%% of pixels above %d%% target @ %4.2f%%  Target Scalar = %4.2f  Min/Max( %4.2f, %4.2f )  Final S"
                   "calar: %4.2f  Actual: %4.2f",
                   v36,
                   v23,
                   v27,
                   v28,
                   a8,
                   a9,
                   v29,
                   v32);
        }
        else
        {
          v20 = *a1;
          v39 = *(float *)(dword_1043ACA4 + 44);
          v21 = *(_DWORD *)dword_1041315C;
          v22 = (float *)(*(int (__thiscall **)(int *, _DWORD *))(v20 + 612))(a1, v35);
          return (*(int (**)(int, int, const char *, ...))(v21 + 116))(
                   dword_1041315C,
                   19,
                   "(Original algorithm) Target Scalar = %4.2f  Min/Max( %4.2f, %4.2f )  Final Scalar: %4.2f  Actual: %4.2f",
                   v38,
                   a8,
                   a9,
                   v39,
                   *v22);
        }
      }
    }
  }
  return result;
}
