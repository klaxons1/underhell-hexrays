int __userpurge sub_10314680@<eax>(int *a1@<ecx>, _DWORD *a2@<edi>, float *a3, float *a4)
{
  int v6; // ecx
  int (__thiscall *v7)(int *, float *, float *); // edx
  int v8; // ebx
  float *v9; // eax
  void (__thiscall *v10)(int *); // edx
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  double v14; // st6
  int v15; // ebx
  int result; // eax
  int v17; // ecx
  int (__thiscall *v18)(int *, _DWORD *); // edx
  int (__thiscall *v19)(int *); // eax
  int v20; // eax
  int (__thiscall *v21)(int *); // edx
  int (__thiscall *v22)(int *); // edx
  _DWORD v24[16]; // [esp+4h] [ebp-E4h] BYREF
  char v25[12]; // [esp+44h] [ebp-A4h] BYREF
  float v26[3]; // [esp+50h] [ebp-98h] BYREF
  float v27[3]; // [esp+5Ch] [ebp-8Ch] BYREF
  float v28[3]; // [esp+68h] [ebp-80h] BYREF
  float v29[3]; // [esp+74h] [ebp-74h] BYREF
  float v30; // [esp+80h] [ebp-68h]
  int v31; // [esp+84h] [ebp-64h]
  _DWORD v32[4]; // [esp+88h] [ebp-60h] BYREF
  float v33; // [esp+98h] [ebp-50h] BYREF
  float v34; // [esp+9Ch] [ebp-4Ch]
  float v35; // [esp+A0h] [ebp-48h]
  float v36; // [esp+A4h] [ebp-44h]
  float v37; // [esp+A8h] [ebp-40h]
  float v38; // [esp+ACh] [ebp-3Ch]
  float v39; // [esp+B0h] [ebp-38h]
  int v40; // [esp+B4h] [ebp-34h]
  int v41; // [esp+B8h] [ebp-30h]
  int v42; // [esp+BCh] [ebp-2Ch]
  int v43; // [esp+C0h] [ebp-28h]
  int v44; // [esp+C4h] [ebp-24h]
  int v45; // [esp+C8h] [ebp-20h]
  float v46; // [esp+CCh] [ebp-1Ch]
  int v47; // [esp+D0h] [ebp-18h]
  int v48; // [esp+D4h] [ebp-14h]
  __int16 v49; // [esp+D8h] [ebp-10h]
  char v50; // [esp+DBh] [ebp-Dh]
  __int16 v51; // [esp+DCh] [ebp-Ch]
  int v52; // [esp+E0h] [ebp-8h]
  int i; // [esp+E4h] [ebp-4h]
  int v54; // [esp+F0h] [ebp+8h]

  v46 = 1.0;
  v6 = a1[1017];
  *(float *)&v32[1] = *a3;
  v7 = *(int (__thiscall **)(int *, float *, float *))(*a1 + 2104);
  *(float *)&v32[2] = a3[1];
  *(float *)&v32[3] = a3[2];
  v8 = 0;
  v32[0] = 1;
  v36 = flt_106F1CA8;
  v49 = 1;
  v41 = 1;
  v37 = flt_106F1CAC;
  v38 = flt_106F1CB0;
  v40 = v6;
  v39 = 16384.0;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v45 = 0;
  v48 = 0;
  v42 = 0;
  v51 = 0;
  v50 = 0;
  v9 = (float *)v7(a1, v29, a3);
  v33 = *v9;
  v34 = v9[1];
  v10 = *(void (__thiscall **)(int *))(*a1 + 1116);
  v35 = v9[2];
  v45 = 8;
  v10(a1);
  sub_10422540(a4, v25);
  (*(void (__thiscall **)(int *, _DWORD *))(*a1 + 432))(a1, v32);
  v11 = sub_103144D0(a1, 16, (int)v24);
  v54 = v11;
  if ( v11 > 0 )
  {
    while ( 1 )
    {
      v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v11 - 1);
      v13 = v24[v8];
      v24[v8++] = v24[v12];
      v24[v12] = v13;
      if ( v8 >= v54 )
        break;
      v11 = v54;
    }
  }
  v14 = *(float *)(dword_106E34F4 + 44) * 0.5;
  i = a1[1028] - a1[1027];
  v30 = sin(v14 * 0.017444445);
  v31 = (int)((double)i / (double)a1[1022] + 0.5);
  v15 = 0;
  result = *(_DWORD *)(dword_106E3584 + 48) - 2;
  v52 = 0;
  for ( i = result; i >= 0; --i )
  {
    if ( v54 <= v15 )
    {
      if ( (*(int (__thiscall **)(int *, _DWORD *))(*a1 + 368))(a1, a2) && v52 < v31 )
      {
        v19 = *(int (__thiscall **)(int *))(*a1 + 368);
        v27[0] = 1.0;
        v27[1] = 1.0;
        v27[2] = 1.0;
        v29[0] = 0.0;
        v29[1] = 0.0;
        v29[2] = 0.0;
        v20 = v19(a1);
        sub_10111860(v20 + 320, v29, v27, &v33);
        v33 = v33 - *a3;
        v34 = v34 - a3[1];
        v35 = v35 - a3[2];
        off_10689714();
        v21 = *(int (__thiscall **)(int *))(*a1 + 432);
        v36 = flt_106F1CA8;
        a2 = v32;
        v37 = flt_106F1CAC;
        v45 = 8;
        v38 = flt_106F1CB0;
        v39 = 16384.0;
        result = v21(a1);
        ++v52;
      }
      else
      {
        v33 = *a4;
        a2 = v32;
        v34 = a4[1];
        v45 = 8;
        v22 = *(int (__thiscall **)(int *))(*a1 + 432);
        v35 = a4[2];
        v36 = v30;
        v37 = v30;
        v38 = v30;
        v39 = 8192.0;
        result = v22(a1);
      }
    }
    else
    {
      v26[0] = 0.75;
      v26[1] = 0.75;
      v26[2] = 0.75;
      v17 = v24[v15];
      v28[0] = 0.25;
      v28[1] = 0.25;
      v28[2] = 0.25;
      sub_10111860(v17 + 320, v28, v26, &v33);
      v33 = v33 - *a3;
      v34 = v34 - a3[1];
      v35 = v35 - a3[2];
      off_10689714();
      v18 = *(int (__thiscall **)(int *, _DWORD *))(*a1 + 432);
      v36 = flt_106F1CA8;
      v37 = flt_106F1CAC;
      v45 = 8;
      v38 = flt_106F1CB0;
      v39 = 16384.0;
      result = v18(a1, v32);
      ++v15;
    }
  }
  return result;
}
