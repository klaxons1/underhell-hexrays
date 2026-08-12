void __thiscall sub_101615C0(int this, float **a2, float *a3, float *a4, float a5, float a6, float a7)
{
  int v8; // eax
  double v9; // st7
  int v10; // ecx
  int v11; // edx
  float v12; // [esp+8h] [ebp-1Ch]
  int v13[3]; // [esp+18h] [ebp-Ch] BYREF

  v8 = *(_DWORD *)(this + 8);
  v9 = *(float *)(this + 44);
  v10 = *(_DWORD *)(this + 12);
  v11 = *(_DWORD *)(this + 16);
  v13[0] = v8;
  v13[1] = v10;
  v12 = v9;
  v13[2] = v11;
  sub_100E9120(a3, (float *)(this + 20), (float *)(this + 32), v12, (float *)v13);
  if ( !*(_BYTE *)(this + 76) )
    sub_100E9120(a3, (float *)(this + 48), (float *)(this + 60), *(float *)(this + 72), (float *)v13);
  sub_100E9090((float *)v13);
  sub_10161350(a2, a4, (float *)v13, a5, a6, &flt_10459240, a7);
}
