void __thiscall sub_101A7F40(float *this)
{
  float *v2; // ebx
  float *v3; // edi
  double v4; // st6
  double v5; // st7
  int v6; // eax
  float v7; // edx
  float v8; // ecx
  float v9; // eax
  int v10; // edi
  double v11; // st7
  float v12; // [esp+0h] [ebp-30h]
  float v13; // [esp+4h] [ebp-2Ch]
  int v14; // [esp+14h] [ebp-1Ch] BYREF
  float v15; // [esp+18h] [ebp-18h]
  float v16; // [esp+1Ch] [ebp-14h]
  int v17; // [esp+20h] [ebp-10h] BYREF
  float v18; // [esp+24h] [ebp-Ch]
  float v19; // [esp+28h] [ebp-8h]
  int v20; // [esp+2Ch] [ebp-4h]

  v2 = this + 5;
  v3 = this + 14;
  v4 = this[9] - this[6];
  v5 = this[10] - this[7];
  this[14] = this[8] - this[5];
  this[15] = v4;
  this[16] = v5;
  off_10689714();
  *((_BYTE *)this + 72) = 5;
  this[17] = *v3 * this[8] + this[9] * v3[1] + this[10] * v3[2];
  *((_BYTE *)this + 73) = sub_10421FD0(v3);
  *(float *)&v14 = 32.0;
  v15 = 32.0;
  v16 = 32.0;
  *(float *)&v17 = -32.0;
  v18 = -32.0;
  v19 = -32.0;
  v6 = sub_10422010(&v17, &v14, v3);
  v7 = *v2;
  v8 = v2[2];
  this[1] = 0.0;
  *(_DWORD *)this = v6;
  v9 = v2[1];
  v10 = 1;
  *(float *)&v17 = v7;
  v18 = v9;
  v19 = v8;
  v20 = 1;
  do
  {
    v12 = (double)v20 * 0.1;
    sub_10423440((int)(this + 2), (int)v2, (int)(this + 8), (int)(this + 11), v12, (int)&v14);
    v13 = (*(float *)&v14 - *(float *)&v17) * (*(float *)&v14 - *(float *)&v17)
        + (v15 - v18) * (v15 - v18)
        + (v16 - v19) * (v16 - v19);
    v11 = off_10689708(v13) + this[1];
    v20 = ++v10;
    this[1] = v11;
    v17 = v14;
    v18 = v15;
    v19 = v16;
  }
  while ( v10 <= 10 );
}
