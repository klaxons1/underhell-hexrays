void __thiscall sub_103EB310(int *this, int a2, float *a3, int a4)
{
  int v5[13]; // [esp+8h] [ebp-50h] BYREF
  float v6; // [esp+3Ch] [ebp-1Ch]

  sub_1001E4E0(v5, a2);
  if ( *(_DWORD *)(a4 + 80) != 1 && (*(_BYTE *)(a2 + 64) & 2) != 0 )
    v6 = v6 * 0.000099999997;
  sub_10267150(this, v5, a3, (float *)a4);
}
