void __thiscall sub_1036B8C0(unsigned int *this, int a2, int a3, int a4)
{
  unsigned int v5; // eax
  float v6; // ecx
  float v7; // edx
  int v8[20]; // [esp+8h] [ebp-68h] BYREF
  float v9[3]; // [esp+58h] [ebp-18h] BYREF
  float v10; // [esp+64h] [ebp-Ch]
  float v11; // [esp+68h] [ebp-8h]
  float v12; // [esp+6Ch] [ebp-4h]

  sub_1001E4E0(v8, a2);
  if ( (*(_DWORD *)(a2 + 64) & 0x800000) != 0 )
  {
    if ( !this[629]
      || (v5 = this[672], v5 == -1)
      || off_1061BE18[4 * (this[672] & 0xFFF) + 2] != v5 >> 12
      || !off_1061BE18[4 * (this[672] & 0xFFF) + 1] )
    {
      v6 = *(float *)(a2 + 8);
      v7 = *(float *)(a2 + 12);
      v10 = *(float *)(a2 + 4);
      v11 = v6;
      v12 = v7;
      v9[0] = v10 * 1000.0;
      v9[1] = v6 * 1000.0;
      v9[2] = 1000.0 * v7;
      *(float *)&v8[13] = (double)(int)this[54] * 0.33333334;
      if ( (double)(int)this[55] <= *(float *)(a2 + 52) )
      {
        v10 = *(float *)(a2 + 4);
        v11 = v6;
        v12 = v7;
        *(float *)&v8[1] = v10 * 3000.0;
        *(float *)&v8[2] = v6 * 3000.0;
        *(float *)&v8[3] = 3000.0 * v7;
      }
      (*(void (__thiscall **)(unsigned int *, int *))(*this + 1624))(this, v8);
      sub_101C73D0(this, 0);
      sub_100EA150((int)this, v9);
    }
  }
  sub_100360A0(this, (int)v8, a3, a4);
}
