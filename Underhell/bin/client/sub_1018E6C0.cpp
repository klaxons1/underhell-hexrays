int __thiscall sub_1018E6C0(_BYTE *this, int a2)
{
  float *v3; // esi
  char *v4; // eax
  int v5; // edi
  int v7; // [esp+8h] [ebp-18h] BYREF
  float v8; // [esp+Ch] [ebp-14h]
  float v9; // [esp+10h] [ebp-10h]
  float v10[3]; // [esp+14h] [ebp-Ch] BYREF

  v3 = (float *)(this - 4);
  v4 = sub_10034AE0(this - 4);
  v7 = *(_DWORD *)v4;
  v8 = *((float *)v4 + 1);
  v9 = *((float *)v4 + 2);
  v10[2] = v9;
  v10[0] = 0.0;
  v10[1] = v8;
  sub_10034B10(v3, v10);
  v5 = sub_10046070(this, (int)v3, a2);
  sub_10034B10(v3, (float *)&v7);
  return v5;
}
