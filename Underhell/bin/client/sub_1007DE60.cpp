void __cdecl sub_1007DE60(int a1, float *a2, float *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // eax
  float *v7; // eax
  double v8; // st7
  float *v9; // ecx
  float *v10; // esi
  float *v11; // eax
  float v12; // [esp+8h] [ebp-74h]
  float v13; // [esp+8h] [ebp-74h]
  float v14; // [esp+8h] [ebp-74h]
  _BYTE v15[48]; // [esp+18h] [ebp-64h] BYREF
  float v16[3]; // [esp+48h] [ebp-34h] BYREF
  float v17[3]; // [esp+54h] [ebp-28h] BYREF
  float v18; // [esp+60h] [ebp-1Ch] BYREF
  float v19; // [esp+64h] [ebp-18h]
  float v20; // [esp+68h] [ebp-14h]
  float v21; // [esp+6Ch] [ebp-10h] BYREF
  float v22; // [esp+70h] [ebp-Ch]
  float v23; // [esp+74h] [ebp-8h]
  float v24; // [esp+78h] [ebp-4h]
  float v25; // [esp+84h] [ebp+8h]

  v3 = (**(int (__thiscall ***)(int))a1)(a1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3);
  v5 = v4;
  if ( v4 && sub_10037870(v4) && (v6 = sub_100378C0(v5)) != 0 )
  {
    sub_1007D610(v6 + 4, a2, a3);
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v5 + 4) + 80))(v5 + 4, &v21, &v18);
    v7 = (float *)sub_10034A00((char *)v5);
    v12 = v7[2] * v7[2] + *v7 * *v7 + v7[1] * v7[1];
    v24 = off_103EDFE0(v12);
    v13 = v22 * v22 + v21 * v21 + v23 * v23;
    v25 = off_103EDFE0(v13);
    v14 = v19 * v19 + v18 * v18 + v20 * v20;
    v8 = off_103EDFE0(v14);
    v9 = &v21;
    if ( v8 >= v25 )
      v9 = &v18;
    sub_10011670(v9);
    if ( v24 >= v8 )
      v8 = v24;
    *a2 = *a2 - v8;
    a2[1] = a2[1] - v8;
    a2[2] = a2[2] - v8;
    *a3 = *a3 + v8;
    a3[1] = a3[1] + v8;
    a3[2] = v8 + a3[2];
  }
  else
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a1 + 80))(a1, v16, v17);
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
    if ( *v10 == flt_1045924C && v10[1] == flt_10459250 && v10[2] == flt_10459254 )
    {
      *a2 = *v11 + v16[0];
      a2[1] = v11[1] + v16[1];
      a2[2] = v11[2] + v16[2];
      *a3 = *v11 + v17[0];
      a3[1] = v11[1] + v17[1];
      a3[2] = v11[2] + v17[2];
    }
    else
    {
      sub_101F0B70(v10, v11, v15);
      sub_101F1070(v15, v16, v17, a2, a3);
    }
  }
}
