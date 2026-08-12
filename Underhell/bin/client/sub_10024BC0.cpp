void __thiscall sub_10024BC0(float *this)
{
  int v2; // eax
  int v3; // edi
  double v4; // st7
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int (__thiscall *v8)(float *); // edx
  float *v9; // esi
  float *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st5
  int v14; // eax
  float *v15; // eax
  double v16; // st6
  int (__thiscall *v17)(float *); // edx
  double v18; // rt1
  float *v19; // eax
  int v20; // esi
  int v21; // edi
  float v22[2]; // [esp+4Ch] [ebp-70h] BYREF
  float v23; // [esp+54h] [ebp-68h]
  float v24[2]; // [esp+58h] [ebp-64h] BYREF
  float v25; // [esp+60h] [ebp-5Ch]
  float v26[3]; // [esp+64h] [ebp-58h] BYREF
  float v27[3]; // [esp+70h] [ebp-4Ch] BYREF
  float v28[3]; // [esp+7Ch] [ebp-40h] BYREF
  float v29; // [esp+88h] [ebp-34h]
  float v30; // [esp+8Ch] [ebp-30h]
  float v31; // [esp+90h] [ebp-2Ch]
  float v32; // [esp+94h] [ebp-28h]
  float v33; // [esp+98h] [ebp-24h]
  float v34; // [esp+9Ch] [ebp-20h]
  float v35; // [esp+A0h] [ebp-1Ch] BYREF
  float v36; // [esp+A4h] [ebp-18h]
  float v37; // [esp+A8h] [ebp-14h]
  float v38; // [esp+ACh] [ebp-10h] BYREF
  float v39; // [esp+B0h] [ebp-Ch]
  float v40; // [esp+B4h] [ebp-8h]
  float v41; // [esp+B8h] [ebp-4h]

  nullsub_4();
  v2 = sub_100422D0();
  v3 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BasePlayer `RTTI Type Descriptor',
         (int)&C_BaseHLPlayer `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    if ( *((float *)off_103DC81C + 3) < (double)this[835] )
    {
      v4 = this[835] - *((float *)off_103DC81C + 3);
      if ( v4 > 0.0 )
      {
        if ( v4 > 1.0 )
          v5 = 1.0;
        else
          v5 = 1.0 - (1.0 - v4);
        v6 = *((_DWORD *)this - 2);
        v41 = v5;
        (*(void (__thiscall **)(float *, float *, float *))(v6 + 80))(this - 2, v24, v22);
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 40))(v3);
        sub_101EE040(v7, 0, &v35, &v38);
        v8 = *(int (__thiscall **)(float *))(*((_DWORD *)this - 3) + 36);
        v9 = this - 3;
        v29 = v38 * v25;
        v30 = v39 * v25;
        v31 = v25 * v40;
        v32 = v35 * v24[0];
        v33 = v36 * v24[0];
        v34 = v24[0] * v37;
        v10 = (float *)v8(v9);
        v11 = v32 + *v10;
        v12 = v10[1] + v33;
        v13 = v10[2];
        v14 = *(_DWORD *)v9;
        v27[0] = v11 + v29;
        v27[1] = v12 + v30;
        v27[2] = v13 + v34 + v31;
        v32 = v38 * v25;
        v33 = v39 * v25;
        v34 = v25 * v40;
        v29 = v35 * v22[0];
        v30 = v36 * v22[0];
        v31 = v22[0] * v37;
        v15 = (float *)(*(int (__thiscall **)(float *))(v14 + 36))(v9);
        v16 = v15[1] + v30;
        v17 = *(int (__thiscall **)(float *))(*(_DWORD *)v9 + 36);
        v18 = v15[2] + v31;
        v28[0] = *v15 + v29 + v32;
        v28[1] = v16 + v33;
        v28[2] = v18 + v34;
        v29 = v38 * v23;
        v30 = v39 * v23;
        v31 = v23 * v40;
        v19 = (float *)v17(v9);
        v26[0] = *v19 + v29;
        v26[1] = v19[1] + v30;
        v26[2] = v19[2] + v31;
        v20 = (int)(0.0 * v41);
        v21 = (int)(v41 * 255.0);
        (*(void (__thiscall **)(int, float *, float *, int, int, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
          dword_1041316C,
          v27,
          v28,
          v20,
          v21,
          v20,
          1,
          0.050000001);
        (*(void (__stdcall **)(float *, float *, int, int, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
          v28,
          v26,
          v20,
          v21,
          v20,
          1,
          0.050000001);
        (*(void (__thiscall **)(int, float *, float *, int, int, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 12))(
          dword_1041316C,
          v26,
          v27,
          v20,
          v21,
          v20,
          1,
          0.050000001);
      }
    }
  }
}
