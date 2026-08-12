double __thiscall sub_10079510(_DWORD *this, float *a2)
{
  int v4; // ebx
  int v5; // ebx
  float *v6; // eax
  double v7; // st6
  double v8; // st4
  float v10; // [esp+Ch] [ebp-20h]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+20h] [ebp-Ch]
  int v15; // [esp+24h] [ebp-8h]
  float v16; // [esp+28h] [ebp-4h]
  int v17; // [esp+34h] [ebp+8h]
  int v18; // [esp+34h] [ebp+8h]

  v16 = 0.0;
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v4 = 0;
  if ( (int)this[20] > 0 )
  {
    v17 = 0;
    do
    {
      if ( sub_10074090((float *)(v17 + this[17])) )
      {
        ++v4;
        v17 += 36;
      }
      else
      {
        if ( this[20] - v4 - 1 > 0 )
          memcpy((void *)(v17 + this[17]), (const void *)(v17 + this[17] + 36), 36 * (this[20] - v4 - 1));
        --this[20];
      }
    }
    while ( v4 < this[20] );
  }
  v15 = 0;
  if ( (int)this[20] > 0 )
  {
    v18 = 0;
    do
    {
      v14 = sub_100740E0((float *)(v18 + this[17]));
      v5 = this[1];
      if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
        sub_100DAE60(this[1]);
      v6 = sub_10074190((float *)(v18 + this[17]));
      v11 = *v6 - *(float *)(v5 + 580);
      v12 = v6[1] - *(float *)(v5 + 584);
      v13 = v6[2] - *(float *)(v5 + 588);
      off_10689714();
      v7 = 1.0 - v14;
      v10 = v7 * a2[1];
      v8 = v13 * v14 + v7 * a2[2];
      *a2 = v11 * v14 + v7 * *a2;
      a2[1] = v12 * v14 + v10;
      a2[2] = v8;
      v16 = 1.0 - v7 * (1.0 - v16);
      off_10689714();
      v18 += 36;
      ++v15;
    }
    while ( v15 < this[20] );
  }
  return v16;
}
