int __usercall sub_1007FDA0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  unsigned __int8 (__thiscall *v4)(int, int *); // edx
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  float v8; // ecx
  float v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  const char *v13; // edi
  const char *v14; // eax
  float *v15; // eax
  _BYTE v16[180]; // [esp+4h] [ebp-D8h] BYREF
  float v17[3]; // [esp+B8h] [ebp-24h] BYREF
  float v18; // [esp+C4h] [ebp-18h]
  float v19; // [esp+C8h] [ebp-14h]
  float v20; // [esp+CCh] [ebp-10h]
  float v21; // [esp+D0h] [ebp-Ch]
  int v22; // [esp+D4h] [ebp-8h]
  int v23; // [esp+D8h] [ebp-4h] BYREF

  if ( !sub_1007E9C0((_DWORD *)a1) )
    return -4;
  v4 = *(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)a1 + 72);
  v23 = -4;
  if ( v4(a1, &v23) )
    return v23;
  v18 = ((double (__thiscall *)(_DWORD, int))*(_DWORD *)(**(_DWORD **)(a1 + 4) + 720))(*(_DWORD *)(a1 + 4), a2);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(v5 + 2372);
  v7 = *(_DWORD *)(v5 + 252) >> 11;
  v22 = *(_DWORD *)(v5 + 908);
  if ( (v7 & 1) != 0 )
    sub_100DAE60(v5);
  v8 = *(float *)(v5 + 588);
  v9 = *(float *)(v5 + 580);
  v20 = *(float *)(v5 + 584);
  v10 = *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8);
  v21 = v8;
  v11 = *(_DWORD *)(a1 + 4);
  v19 = v9;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 1416))(v11, v10);
  if ( *(_BYTE *)(a1 + 56)
    && ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 4) + 720))(*(_DWORD *)(a1 + 4)) <= 0.0 )
  {
    v12 = *(_DWORD *)(a1 + 4);
    if ( *(_DWORD *)(v12 + 2372) == 2 )
      return 0;
    v13 = *(const char **)(v12 + 92);
    if ( !v13 )
      v13 = String;
    v14 = (const char *)sub_100BE1F0(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 908));
    DevMsg("%s moving with speed <= 0 (%s)\n", v13, v14);
  }
  memset(v16, 0, sizeof(v16));
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 68))(a1, v16);
  v23 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 64))(a1, v16);
  if ( !v23 && v18 < 0.01 )
  {
    v15 = (float *)sub_1004BF30((_DWORD *)a1);
    v17[0] = *v15 - v19;
    v17[1] = v15[1] - v20;
    v17[2] = v15[2] - v21;
    if ( sub_100D7A40(v17) < 0.01 )
    {
      sub_100C1170(v22);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 1416))(*(_DWORD *)(a1 + 4), v6);
    }
  }
  return v23;
}
