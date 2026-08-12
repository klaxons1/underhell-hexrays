void __thiscall sub_101BF7D0(int this, int a2, float *a3, int a4)
{
  unsigned int v5; // eax
  int v6; // eax
  int v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !*(_BYTE *)(this + 2160) && *(_DWORD *)(a4 + 68) )
  {
    *(float *)v7 = -*a3;
    *(float *)&v7[1] = -a3[1];
    *(float *)&v7[2] = -a3[2] - 5.0;
    off_10689714();
    v5 = *(_DWORD *)(a2 + 44);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    sub_101BE8E0(this, a2, v6, (int)v7);
  }
  sub_100EAC20((int *)this, a2, a3, (float *)a4);
}
