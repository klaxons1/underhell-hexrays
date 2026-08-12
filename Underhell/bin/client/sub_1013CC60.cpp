int __usercall sub_1013CC60@<eax>(int result@<eax>, int a2@<edi>, int a3, int a4, float a5)
{
  int v5; // esi
  double v6; // st7
  int v7; // edi
  int v8; // esi
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  int v17; // eax
  _DWORD *v18[44]; // [esp+8h] [ebp-200h] BYREF
  char v19; // [esp+B8h] [ebp-150h]
  int v20; // [esp+BCh] [ebp-14Ch]
  int v21; // [esp+C0h] [ebp-148h]
  char v22; // [esp+C4h] [ebp-144h]
  _DWORD *v23; // [esp+C8h] [ebp-140h] BYREF
  char v24; // [esp+D4h] [ebp-134h]
  int v25; // [esp+D8h] [ebp-130h]
  int v26; // [esp+DCh] [ebp-12Ch]
  int v27; // [esp+E0h] [ebp-128h]
  _DWORD *v28; // [esp+E4h] [ebp-124h]
  int v29; // [esp+E8h] [ebp-120h]
  char v30; // [esp+F8h] [ebp-110h]
  _DWORD v31[44]; // [esp+FCh] [ebp-10Ch] BYREF
  int v32; // [esp+1ACh] [ebp-5Ch]
  float *v33; // [esp+1B4h] [ebp-54h]
  float *v34; // [esp+1BCh] [ebp-4Ch]
  float v35; // [esp+1F0h] [ebp-18h]
  float v36; // [esp+1F4h] [ebp-14h]
  float v37; // [esp+1F8h] [ebp-10h]
  float v38; // [esp+1FCh] [ebp-Ch]
  float v39; // [esp+200h] [ebp-8h]
  float v40; // [esp+204h] [ebp-4h]
  float v41; // [esp+218h] [ebp+10h]
  float v42; // [esp+218h] [ebp+10h]
  float v43; // [esp+218h] [ebp+10h]

  v5 = result;
  if ( LOBYTE(a5) )
  {
    v38 = 1.0;
    v6 = 0.0;
  }
  else
  {
    v38 = 0.0;
    v6 = 1.0;
  }
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
    if ( !(_BYTE)result )
    {
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
      if ( v7 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 36))(v7, v5, 0);
      v8 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 224))(v7, 1, 0, 0, 0);
      v37 = *(float *)(dword_1043A414 + 44);
      v39 = *(float *)(dword_1043A414 + 44);
      sub_10016C20((int)v18);
      v20 = v8;
      v22 = 1;
      v21 = 7;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 40))(v8, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v20 + 68))(v20, 4, 6, v18);
      v28 = v18[39];
      v25 = v8 + 4;
      v24 = v19;
      v27 = 0;
      v26 = 6;
      v30 = 0;
      v23 = v18[41];
      v29 = 0;
      sub_10016990((int)v31, v8, 4, v18);
      v29 = 0;
      sub_10016A00(v31);
      v9 = v33;
      v35 = (double)a3 * v37;
      *v33 = v35;
      v36 = (double)a4 * v39;
      v9[1] = v36;
      v9[2] = 0.0;
      v10 = v34;
      *v34 = 0.001953125;
      v41 = v6;
      v40 = v41 + 0.001953125;
      v10[1] = v40;
      sub_10016A80(v31);
      v11 = v33;
      v42 = (double)(a3 + 1) * v37;
      *v33 = v42;
      v11[1] = v36;
      v11[2] = 0.0;
      v12 = v34;
      *v34 = 1.0019531;
      v12[1] = v40;
      sub_10016A80(v31);
      v13 = v33;
      *v33 = v42;
      v43 = (double)(a4 + 1) * v39;
      v13[1] = v43;
      v13[2] = 0.0;
      v14 = v34;
      *v34 = 1.0019531;
      v40 = v38 + 0.001953125;
      v14[1] = v40;
      sub_10016A80(v31);
      v15 = v33;
      *v33 = v35;
      v15[1] = v43;
      v15[2] = 0.0;
      v16 = v34;
      *v34 = 0.001953125;
      v16[1] = v40;
      sub_10016A80(v31);
      if ( v22 )
      {
        switch ( v21 )
        {
          case 4:
            v17 = 2 * v32 - 2;
            break;
          case 5:
            v17 = 2 * v32;
            break;
          case 6:
            v17 = 3 * v32 - 6;
            break;
          case 7:
            v17 = 6 * v32 / 4;
            break;
          case 8:
            v17 = 0;
            break;
          default:
            v17 = v32;
            break;
        }
        sub_10016B00(&v23, v21, v17);
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v20 + 80))(v20, v32, v27);
      v25 = 0;
      v26 = 0;
      v31[43] = 0;
      v31[41] = 0;
      v31[19] = -1;
      v20 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v8 + 48))(v8, -1, 0);
      sub_10016BC0(v18);
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
    }
  }
  return result;
}
