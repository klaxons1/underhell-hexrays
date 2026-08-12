int __thiscall sub_101B0B60(int this)
{
  int v2; // edi
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  int v16; // eax
  int v17; // esi
  _DWORD v19[44]; // [esp+Ch] [ebp-204h] BYREF
  char v20; // [esp+BCh] [ebp-154h]
  int v21; // [esp+C0h] [ebp-150h]
  int v22; // [esp+C4h] [ebp-14Ch]
  char v23; // [esp+C8h] [ebp-148h]
  int v24[3]; // [esp+CCh] [ebp-144h] BYREF
  char v25; // [esp+D8h] [ebp-138h]
  int v26; // [esp+DCh] [ebp-134h]
  int v27; // [esp+E0h] [ebp-130h]
  int v28; // [esp+E4h] [ebp-12Ch]
  int v29; // [esp+E8h] [ebp-128h]
  int v30; // [esp+ECh] [ebp-124h]
  char v31; // [esp+FCh] [ebp-114h]
  _DWORD v32[41]; // [esp+100h] [ebp-110h] BYREF
  int v33; // [esp+1A4h] [ebp-6Ch]
  int v34; // [esp+1ACh] [ebp-64h]
  int v35; // [esp+1B0h] [ebp-60h]
  float *v36; // [esp+1B8h] [ebp-58h]
  float *v37; // [esp+1C0h] [ebp-50h]
  int *v38; // [esp+1E0h] [ebp-30h]
  int v39; // [esp+1F4h] [ebp-1Ch]
  int v40; // [esp+1F8h] [ebp-18h]
  int v41; // [esp+1FCh] [ebp-14h]
  int v42; // [esp+200h] [ebp-10h]
  int v43; // [esp+204h] [ebp-Ch]
  float v44; // [esp+208h] [ebp-8h]
  float v45; // [esp+20Ch] [ebp-4h]

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v40 = v2;
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v3 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 224))(
         v2,
         1,
         0,
         0,
         *(_DWORD *)(this + 316));
  sub_10016C20((int)v19);
  v21 = v3;
  v23 = 1;
  v22 = 7;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 40))(v3, 2);
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v21 + 68))(v21, 4, 6, v19);
  v29 = v19[39];
  v26 = v3 + 4;
  v28 = 0;
  v27 = 6;
  v31 = 0;
  v24[0] = v19[41];
  v25 = v20;
  v30 = 0;
  sub_10016990((int)v32, v3, 4, v19);
  v30 = 0;
  sub_10016A00(v32);
  v4 = *(unsigned __int8 *)(this + 311);
  v5 = *(unsigned __int8 *)(this + 310);
  v43 = *(unsigned __int8 *)(this + 309);
  v6 = *(unsigned __int8 *)(this + 312);
  v42 = v4;
  v39 = v5;
  v41 = v6;
  v45 = COERCE_FLOAT(sub_102374C0(this + 44));
  v44 = (float)SLODWORD(v45);
  v45 = (float)sub_102374F0(this + 44);
  v7 = (unsigned __int8)v42
     | (((unsigned __int8)v39 | (((unsigned __int8)v43 | ((unsigned __int8)v41 << 8)) << 8)) << 8);
  *v38 = v7;
  v8 = v37;
  *v37 = 0.0;
  v8[1] = 0.0;
  v9 = v36;
  *v36 = 0.0;
  v9[1] = 0.0;
  v9[2] = 0.0;
  sub_10016A80(v32);
  *v38 = v7;
  v10 = v37;
  *v37 = 1.0;
  v10[1] = 0.0;
  v11 = v36;
  *v36 = v44;
  v11[1] = 0.0;
  v11[2] = 0.0;
  sub_10016A80(v32);
  *v38 = v7;
  v12 = v37;
  *v37 = 1.0;
  v12[1] = 1.0;
  v13 = v36;
  *v36 = v44;
  v13[1] = v45;
  v13[2] = 0.0;
  sub_10016A80(v32);
  *v38 = v7;
  v14 = v37;
  *v37 = 0.0;
  v14[1] = 1.0;
  v15 = v36;
  *v36 = 0.0;
  v15[1] = v45;
  v15[2] = 0.0;
  sub_10016A80(v32);
  if ( v23 )
  {
    switch ( v22 )
    {
      case 4:
        v16 = 2 * v35 - 2;
        break;
      case 5:
        v16 = 2 * v35;
        break;
      case 6:
        v16 = 3 * v35 - 6;
        break;
      case 7:
        v16 = 6 * v35 / 4;
        break;
      case 8:
        v16 = 0;
        break;
      default:
        v16 = v35;
        break;
    }
    sub_10016B00(v24, v22, v16);
  }
  (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v21 + 80))(v21, v35, v28, v19);
  v26 = 0;
  v27 = 0;
  v34 = 0;
  v33 = 0;
  v32[19] = -1;
  v21 = 0;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, -1, 0);
  if ( v33 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v33 + 8))(v33) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v33 + 16))(v33);
  if ( v26 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 8))(v26) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 16))(v26);
  v17 = v40;
  (*(void (__thiscall **)(int))(*(_DWORD *)v40 + 12))(v40);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17);
}
