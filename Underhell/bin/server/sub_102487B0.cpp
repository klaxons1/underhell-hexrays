int __thiscall sub_102487B0(int this, int a2, int a3, float *a4, float *a5, float a6, int a7, int a8, int a9)
{
  int v11; // [esp+10h] [ebp-Ch] BYREF
  float v12; // [esp+14h] [ebp-8h]
  float v13; // [esp+18h] [ebp-4h]

  *(_DWORD *)(this + 40) = -1;
  *(_DWORD *)(this + 44) = -1;
  *(_DWORD *)(this + 48) = -1;
  *(float *)&v11 = flt_106F1CA8;
  v12 = flt_106F1CAC;
  v13 = flt_106F1CB0;
  if ( a9 )
  {
    v11 = *(int *)a9;
    v12 = *(float *)(a9 + 4);
    v13 = *(float *)(a9 + 8);
  }
  sub_10247DF0((float *)this, a2, a3, 0, a4, a5, (float *)&v11, a6, a7, a8);
  return this;
}
