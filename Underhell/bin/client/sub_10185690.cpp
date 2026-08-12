void __thiscall sub_10185690(float *this)
{
  double v2; // st7
  float *v3; // esi
  int v4; // edx
  float *v5; // eax
  int v6; // ecx
  double v7; // st7
  float *v8; // eax
  float *v9; // eax
  char v10[8]; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+Ch] [ebp-4h]

  if ( this[1594] >= (double)this[1595] )
  {
    v2 = this[1594] + 1.0;
    v3 = this + 103;
    v11 = 17;
    this[1595] = v2;
    do
    {
      if ( *((int *)v3 - 19) > 1 && *((int *)v3 - 18) > 0 )
      {
        v4 = 3;
        v5 = v3 + 46;
        v6 = 5;
        do
        {
          v7 = *(v5 - 1);
          v5 -= 16;
          --v4;
          v5[17] = v7;
          v5[18] = v5[16];
          v5[15] = v5[13];
          v5[16] = v5[14];
          v5[13] = v5[11];
          v5[14] = v5[12];
          v5[11] = v5[9];
          v5[12] = v5[10];
          v5[9] = v5[7];
          v5[10] = v5[8];
          v5[7] = v5[5];
          v5[8] = v5[6];
          v5[5] = v5[3];
          v5[6] = v5[4];
          v5[3] = v5[1];
          v5[4] = v5[2];
        }
        while ( v4 );
        v8 = v3;
        do
        {
          --v6;
          *(v8 - 1) = *(v8 - 3);
          v8 -= 2;
          v8[2] = *v8;
        }
        while ( v6 > 0 );
        v9 = (float *)(*(int (__thiscall **)(float *, char *, float *))(*(_DWORD *)this + 116))(this, v10, v3 - 17);
        *(v3 - 11) = *v9;
        *(v3 - 10) = v9[1];
      }
      v3 += 80;
      --v11;
    }
    while ( v11 );
  }
}
