int __thiscall sub_1027D000(int *this, float *a2, char a3)
{
  int v5; // eax
  float *v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int (__thiscall *v11)(float *, _DWORD *); // edx
  int result; // eax
  int *v13; // esi
  int v14; // edi
  int *v15; // ecx
  _DWORD v16[20]; // [esp+28h] [ebp-7Ch] BYREF
  __int16 v17; // [esp+78h] [ebp-2Ch]
  char v18; // [esp+7Bh] [ebp-29h]
  __int16 v19; // [esp+7Ch] [ebp-28h]
  _BYTE v20[12]; // [esp+80h] [ebp-24h] BYREF
  float v21; // [esp+8Ch] [ebp-18h] BYREF
  float v22; // [esp+90h] [ebp-14h]
  float v23; // [esp+94h] [ebp-10h]
  float v24; // [esp+98h] [ebp-Ch] BYREF
  float v25; // [esp+9Ch] [ebp-8h]
  float v26; // [esp+A0h] [ebp-4h]
  int v27; // [esp+ACh] [ebp+8h]

  v27 = sub_100D7680((int)a2);
  if ( a3 )
  {
    v5 = sub_100BEF30((int)this, "muzzle");
    sub_100BCCA0(this, v5, (int)&v24, (int)v20);
    sub_10422220(v20, &v21);
  }
  else
  {
    v6 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)a2 + 968))(a2, v20);
    v24 = *v6;
    v25 = v6[1];
    v26 = v6[2];
    v7 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v27 + 2104))(v27, v20, &v24);
    v21 = *v7;
    v22 = v7[1];
    v23 = v7[2];
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 876))(this) )
    sub_102B0DF0(3);
  if ( ((_DWORD)a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 368))(a2);
  sub_1023D4B0(2097153, a2 + 145, 1500, 0.2, (int)a2, 4, v8);
  *(float *)&v16[17] = 1.0;
  v9 = this[298];
  v10 = *(_DWORD *)a2;
  *(float *)&v16[1] = v24;
  *(float *)&v16[2] = v25;
  v16[11] = v9;
  v11 = *(int (__thiscall **)(float *, _DWORD *))(v10 + 432);
  *(float *)&v16[3] = v26;
  *(float *)&v16[4] = v21;
  v16[19] = 0;
  *(float *)&v16[5] = v22;
  memset(&v16[13], 0, 16);
  v19 = 0;
  *(float *)&v16[6] = v23;
  v18 = 0;
  v16[0] = 1;
  *(float *)&v16[7] = flt_106F1CA8;
  v16[12] = 2;
  *(float *)&v16[8] = flt_106F1CAC;
  v16[18] = 0;
  *(float *)&v16[9] = flt_106F1CB0;
  v17 = 1;
  *(float *)&v16[10] = 56755.84;
  result = v11(a2, v16);
  v13 = this + 300;
  v14 = this[300] - 1;
  if ( *v13 != v14 )
  {
    result = (int)(v13 - 300);
    if ( *((_BYTE *)v13 - 1116) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v13 = v14;
    }
    else
    {
      v15 = *(int **)(result + 24);
      if ( v15 )
        result = sub_100194B0(v15, 1200);
      *v13 = v14;
    }
  }
  return result;
}
