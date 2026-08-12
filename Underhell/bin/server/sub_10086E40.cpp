void __userpurge sub_10086E40(int a1@<ebp>, int a2, int a3)
{
  int v3; // esi
  float v4; // edx
  float v5; // eax
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  float v9[22]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v10[12]; // [esp+7Ch] [ebp-A4h] BYREF
  float v11[10]; // [esp+88h] [ebp-98h] BYREF
  char v12; // [esp+B3h] [ebp-6Dh]
  int v13; // [esp+D4h] [ebp-4Ch] BYREF
  float v14[3]; // [esp+E0h] [ebp-40h] BYREF
  float v15[3]; // [esp+ECh] [ebp-34h] BYREF
  float v16[2]; // [esp+F8h] [ebp-28h] BYREF
  float v17; // [esp+100h] [ebp-20h]
  float v18; // [esp+104h] [ebp-1Ch] BYREF
  float v19; // [esp+108h] [ebp-18h]
  float v20; // [esp+10Ch] [ebp-14h]
  float *v21; // [esp+110h] [ebp-10h]
  int v22; // [esp+114h] [ebp-Ch]
  void *v23; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v22 = a1;
  v23 = retaddr;
  if ( (*(_DWORD *)(a3 + 64) & 0x4000) == 0 )
  {
    v3 = 0;
    v21 = (float *)(a3 + 16);
    do
    {
      v4 = *(float *)(a3 + 8);
      v5 = *(float *)(a3 + 12);
      v18 = *(float *)(a3 + 4);
      v19 = v4;
      v20 = v5;
      v6 = (float *)sub_10073710(v3);
      v16[0] = *v6;
      v16[1] = v6[1];
      v17 = v6[2];
      v7 = (float *)sub_10073730(v3);
      v15[0] = *v7;
      v15[1] = v7[1];
      v15[2] = v17;
      v8 = v20 + 0.1 - v17;
      v20 = v8;
      v14[0] = v18;
      v14[1] = v19;
      v14[2] = v8 - 384.0;
      sub_1001F200(v9, &v18, v14, v16, v15);
      sub_10265570(0, 0);
      (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v9,
        147467,
        &v13,
        v10);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v10, (int)v11, 255, 255, 0, 1, -1.0);
      if ( v12 )
        *v21 = 0.1 - v17;
      else
        *v21 = v11[2] - *(float *)(a3 + 12) + 0.1;
      ++v21;
      ++v3;
    }
    while ( v3 < 10 );
  }
}
