void __cdecl sub_100A6100(int a1)
{
  int v1; // ebx
  float v2; // edx
  float v3; // eax
  int v4; // edi
  float v5[3]; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v6[12]; // [esp+18h] [ebp-54h] BYREF
  float v7[3]; // [esp+24h] [ebp-48h] BYREF
  float v8[3]; // [esp+30h] [ebp-3Ch] BYREF
  float v9[3]; // [esp+3Ch] [ebp-30h] BYREF
  float v10[3]; // [esp+48h] [ebp-24h] BYREF
  float v11; // [esp+54h] [ebp-18h] BYREF
  float v12; // [esp+58h] [ebp-14h]
  float v13; // [esp+5Ch] [ebp-10h]
  float v14; // [esp+60h] [ebp-Ch] BYREF
  float v15; // [esp+64h] [ebp-8h]
  float v16; // [esp+68h] [ebp-4h]
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  v1 = sub_100422D0();
  if ( v1 )
  {
    sub_100A5ED0(&v14, a1);
    v2 = *(float *)(a1 + 4);
    v3 = *(float *)(a1 + 8);
    v11 = *(float *)a1;
    v12 = v2;
    v13 = v3;
    v4 = sub_1009B7D0((int *)a1);
    if ( sub_1009B7F0((int *)a1) && sub_1009B7F0((int *)a1) == *(_DWORD *)(v1 + 80) )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v7);
      sub_101EE040(v7, v5, v9, v6);
      v14 = v9[0] * 4.0 + *(float *)(a1 + 12);
      v15 = v9[1] * 4.0 + *(float *)(a1 + 16);
      v16 = 4.0 * v9[2] + *(float *)(a1 + 20) - 0.5;
    }
    v10[0] = v11 - v14;
    v10[1] = v12 - v15;
    v10[2] = v13 - v16;
    off_103EDFEC();
    sub_101EE190(v10, v8);
    sub_100E9200(*(_DWORD *)(a1 + 84), v14, v15, v16, v11, v12, v13, v8[0], v8[1], v8[2], v4);
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      sub_1008DF90((int)&savedregs, &v14, &v11, 1);
  }
}
