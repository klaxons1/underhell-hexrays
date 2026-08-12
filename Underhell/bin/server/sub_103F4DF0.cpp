int __userpurge sub_103F4DF0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, _DWORD *a4, int a5)
{
  float *v8; // eax
  int v9; // eax
  int *v10; // ecx
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st5
  int (__thiscall *v15)(int, _DWORD *); // edx
  int v16; // ecx
  _DWORD v18[20]; // [esp+14h] [ebp-80h] BYREF
  __int16 v19; // [esp+64h] [ebp-30h]
  char v20; // [esp+67h] [ebp-2Dh]
  __int16 v21; // [esp+68h] [ebp-2Ch]
  _BYTE v22[12]; // [esp+6Ch] [ebp-28h] BYREF
  _BYTE v23[12]; // [esp+78h] [ebp-1Ch] BYREF
  float v24; // [esp+84h] [ebp-10h] BYREF
  float v25; // [esp+88h] [ebp-Ch]
  float v26; // [esp+8Ch] [ebp-8h]
  int v27; // [esp+9Ch] [ebp+8h]
  int v28; // [esp+A0h] [ebp+Ch]

  if ( *a4 != 3004 )
    return sub_100CFE60((_DWORD *)a1, (int)a4, a5);
  v8 = (float *)(*(int (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)a5 + 968))(a5, v23, a3, a2);
  v24 = *v8;
  v25 = v8[1];
  v26 = v8[2];
  v27 = sub_100D7680(a5);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 3, 0.0);
  (*(void (__thiscall **)(int))(*(_DWORD *)a5 + 1116))(a5);
  v9 = *(_DWORD *)(a1 + 1200) - 1;
  v28 = v9;
  if ( *(_DWORD *)(a1 + 1200) != v9 )
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
        sub_100194B0(v10, 1200);
        v9 = v28;
      }
    }
    *(_DWORD *)(a1 + 1200) = v9;
  }
  v11 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v27 + 2104))(v27, v22, &v24);
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = *(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a5 + 432);
  *(float *)&v18[17] = 1.0;
  v16 = *(_DWORD *)(a1 + 1192);
  *(float *)&v18[1] = v24;
  v18[11] = v16;
  *(float *)&v18[2] = v25;
  *(float *)&v18[3] = v26;
  v18[19] = 0;
  *(float *)&v18[4] = v12;
  v21 = 0;
  v20 = 0;
  v18[0] = 1;
  *(float *)&v18[5] = v13;
  memset(&v18[12], 0, 20);
  *(float *)&v18[6] = v14;
  v18[18] = 0;
  *(float *)&v18[7] = flt_106F1CA8;
  v19 = 1;
  *(float *)&v18[8] = flt_106F1CAC;
  *(float *)&v18[9] = flt_106F1CB0;
  *(float *)&v18[10] = 56755.84;
  return v15(a5, v18);
}
