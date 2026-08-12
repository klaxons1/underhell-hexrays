bool __thiscall sub_1007A2B0(_DWORD *this, float *a2, int a3, float a4, float a5, float *a6)
{
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  int *v11; // ecx
  int v12; // edx
  int v13; // esi
  char v14; // bl
  float *v15; // eax
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  float v22; // [esp+0h] [ebp-94h]
  _BYTE v23[12]; // [esp+10h] [ebp-84h] BYREF
  float v24; // [esp+1Ch] [ebp-78h]
  float v25; // [esp+20h] [ebp-74h]
  float v26; // [esp+24h] [ebp-70h]
  float v27; // [esp+3Ch] [ebp-58h]
  char v28; // [esp+46h] [ebp-4Eh]
  char v29; // [esp+47h] [ebp-4Dh]
  _BYTE *v30; // [esp+5Ch] [ebp-38h]
  float v31[3]; // [esp+64h] [ebp-30h] BYREF
  float v32[3]; // [esp+70h] [ebp-24h] BYREF
  float v33[2]; // [esp+7Ch] [ebp-18h] BYREF
  float v34; // [esp+84h] [ebp-10h]
  float v35[2]; // [esp+88h] [ebp-Ch] BYREF
  float v36; // [esp+90h] [ebp-4h]
  int savedregs; // [esp+94h] [ebp+0h] BYREF

  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
  v8 = *v7;
  v9 = v7[1];
  v10 = v7[2];
  v35[0] = v8;
  v11 = (int *)(this[1] + 320);
  v35[1] = v9;
  v12 = *v11;
  v36 = v10;
  v13 = (*(int (__thiscall **)(int *))(v12 + 8))(v11);
  v32[0] = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
  v32[1] = *(float *)(v13 + 4);
  v32[2] = v36;
  v33[0] = *a2;
  v33[1] = a2[1];
  v34 = a2[2] + a4 + flt_1060857C;
  v31[0] = *a2;
  v31[1] = a2[1];
  v31[2] = a2[2] + a5;
  sub_10079F00((int)this, (int)&savedregs, (int)this, (int)a2, v33, v31, v35, v32, a3, (int)v23);
  v14 = 0;
  if ( v29 )
  {
    if ( v30 && (v30[306] == 6 || (*(unsigned __int8 (**)(void))(*(_DWORD *)v30 + 284))()) )
    {
      v15 = (float *)this[1];
      v16 = a2[1] - v15[180];
      v17 = v16 * v16;
      v18 = *a2 - v15[179];
      v19 = v17;
      v20 = a2[2] - v15[181];
      v22 = v18 * v18 + v19 + v20 * v20;
      if ( off_10689708(v22) < 0.1 )
        v14 = 1;
    }
    v34 = a2[2] + flt_1060857C;
    sub_10079F00((int)this, (int)&savedregs, (int)this, (int)a2, v33, v31, v35, v32, a3, (int)v23);
  }
  if ( 1.0 == v27 || v28 || v14 && v29 )
  {
    *a6 = *a2;
    a6[1] = a2[1];
    a6[2] = a2[2];
    return v14 != 0;
  }
  else
  {
    *a6 = v24;
    a6[1] = v25;
    a6[2] = v26;
    return 1;
  }
}
