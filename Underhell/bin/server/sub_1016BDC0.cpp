void __thiscall sub_1016BDC0(_DWORD *this)
{
  int *v2; // ecx
  int v3; // edx
  int v4; // edx
  float *v5; // esi
  int v6; // [esp+18h] [ebp-8h]
  int v7; // [esp+1Ch] [ebp-4h]

  v2 = (int *)this[8];
  if ( v2 )
  {
    sub_1016BA00(v2);
    v7 = 0;
    if ( (int)this[12] > 0 )
    {
      v3 = 0;
      v6 = 0;
      do
      {
        v4 = this[9] + v3;
        if ( ((1 << (*(_DWORD *)v4 & 0x1F)) & *(_DWORD *)(this[5] + 4 * (*(int *)v4 >> 5))) == 0 )
          sub_1016BA40((_DWORD *)this[8], *(_DWORD *)v4, *(float *)(v4 + 4), 6.0, 0);
        v3 = v6 + 16;
        ++v7;
        v6 += 16;
      }
      while ( v7 < this[12] );
    }
    v5 = (float *)this[7];
    if ( v5 )
      sub_1016B8F0(v5);
  }
}
