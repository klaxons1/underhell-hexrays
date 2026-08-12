char __userpurge sub_1033E520@<al>(int a1@<ecx>, int a2@<edi>, char a3)
{
  char result; // al
  int v5; // edi
  int v6; // eax
  float *v7; // eax
  int v8; // edx
  double v9; // st7
  int (__thiscall *v10)(int, int); // eax
  int v11; // ecx
  float *v12; // eax
  void (__thiscall *v13)(int, int *); // edx
  double v14; // st6
  double v15; // rt1
  void *v16; // eax
  double v17; // st7
  _BYTE v19[44]; // [esp+4h] [ebp-84h] BYREF
  float v20; // [esp+30h] [ebp-58h]
  float v21[3]; // [esp+58h] [ebp-30h] BYREF
  int v22[3]; // [esp+64h] [ebp-24h] BYREF
  float v23; // [esp+70h] [ebp-18h] BYREF
  float v24; // [esp+74h] [ebp-14h]
  float v25; // [esp+78h] [ebp-10h]
  float v26; // [esp+7Ch] [ebp-Ch] BYREF
  float v27; // [esp+80h] [ebp-8h]
  float v28; // [esp+84h] [ebp-4h]
  int savedregs; // [esp+88h] [ebp+0h] BYREF

  if ( !*(_BYTE *)(a1 + 4960)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 2168))(a1)
    || *(float *)(a1 + 4228) > (double)*(float *)(dword_106B31C8 + 12)
    || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    || *(float *)(a1 + 4216) > (double)*(float *)(dword_106B31C8 + 12)
    || *(int *)(a1 + 4268) < 1 )
  {
    return 0;
  }
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 284))(v5)
    && (v6 = sub_100D7680(v5), (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 1528))(v6, 0)) )
  {
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 532))(v5);
    v8 = *(_DWORD *)a1;
    v26 = *v7 * 0.75;
    v27 = v7[1] * 0.75;
    v9 = 0.75 * v7[2];
    v10 = *(int (__thiscall **)(int, int))(v8 + 1868);
    v28 = v9;
    v11 = v10(a1, v5);
    if ( a3 )
      v12 = (float *)sub_10077560(v11, a2);
    else
      v12 = (float *)sub_100775F0(v11, a2);
    v13 = *(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 504);
    v14 = v12[1] + v27;
    v15 = v12[2] + v28;
    v26 = *v12 + v26;
    v27 = v14;
    v28 = v15;
    v23 = -12.0;
    v24 = -12.0;
    v25 = -12.0;
    v21[0] = 12.0;
    v21[1] = 12.0;
    v21[2] = 12.0;
    v13(a1, v22);
    if ( sub_100CF460((_DWORD *)a1) )
    {
      v16 = (void *)sub_100CF460((_DWORD *)a1);
      sub_100BF1B0(v16, "muzzle", (int)v22, 0, 0, 0);
    }
    sub_100231A0((int)&savedregs, a1, (float *)v22, &v26, &v23, v21, 1174421507, a1, 0, (int)v19);
    v23 = *(float *)v22 - v26;
    v24 = *(float *)&v22[1] - v27;
    v17 = *(float *)&v22[2] - v28;
    v25 = v17;
    sub_100D7A40(&v23);
    if ( v20 >= 0.65 && v17 * v20 > 128.0 )
    {
      *(float *)(a1 + 4964) = v26;
      result = 1;
      *(float *)(a1 + 4968) = v27;
      *(float *)(a1 + 4972) = v28;
      return result;
    }
    *(float *)(a1 + 4964) = flt_106F1CA8;
    *(float *)(a1 + 4968) = flt_106F1CAC;
    *(float *)(a1 + 4972) = flt_106F1CB0;
    *(float *)(a1 + 4216) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
  return 0;
}
