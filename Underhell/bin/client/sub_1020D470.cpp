int __thiscall sub_1020D470(int this, int a2)
{
  bool v3; // zf
  float v4; // edx
  float v5; // ecx
  float *v6; // esi
  float *v7; // edi
  float v8; // edx
  float v9; // ecx
  float v10; // edx
  float v11; // ecx
  int v12; // edx
  float v14[3]; // [esp+10h] [ebp-54h] BYREF
  float v15[3]; // [esp+1Ch] [ebp-48h] BYREF
  int v16[3]; // [esp+28h] [ebp-3Ch] BYREF
  int v17[12]; // [esp+34h] [ebp-30h] BYREF

  v3 = *(_BYTE *)(this + 72) == 0;
  *(float *)v16 = 0.0;
  v4 = *(float *)(this + 48);
  *(float *)&v16[1] = 0.0;
  v5 = *(float *)(this + 44);
  *(float *)&v16[2] = 0.0;
  v6 = (float *)(this + 44);
  v7 = (float *)(this + 56);
  v15[1] = v4;
  v8 = *(float *)(this + 56);
  v15[0] = v5;
  v9 = *(float *)(this + 52);
  v14[0] = v8;
  v10 = *(float *)(this + 64);
  v15[2] = v9;
  v11 = *(float *)(this + 60);
  v14[2] = v10;
  v12 = *(_DWORD *)(this + 68);
  v14[1] = v11;
  if ( v3 )
  {
    sub_101F8ED0(a2, v12, *(float *)(a2 + 36), (float *)v16);
  }
  else
  {
    sub_101F8FA0((char *)a2, v12, *(float *)(a2 + 36), (float *)v17);
    sub_101ED920(v6, (float *)v17, v15);
    sub_101ED920(v7, (float *)v17, v14);
  }
  return sub_10234A50(v16, &flt_1045924C, v15, v14, -16727872, 0);
}
