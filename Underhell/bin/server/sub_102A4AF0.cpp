char __thiscall sub_102A4AF0(_DWORD *this, float *a2)
{
  int v3; // edi
  double v4; // st7
  int v5; // ebx
  double v6; // st6
  float *v7; // ecx
  double v8; // st2
  double v9; // st4
  double v10; // st2
  double v11; // st3
  double v12; // st4
  int v14; // edi
  int v15; // [esp+10h] [ebp-18h] BYREF
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch] BYREF
  int v19; // [esp+20h] [ebp-8h]
  int v20; // [esp+24h] [ebp-4h]

  v3 = 0;
  if ( (int)this[49] <= 0 )
    return 0;
  v4 = 12.0;
  v5 = 0;
  v6 = -12.0;
  while ( 1 )
  {
    v7 = (float *)(v5 + this[46]);
    if ( *(float *)(dword_106B31C8 + 12) - v7[3] > 3.0 )
    {
      if ( *(_DWORD *)(dword_106DB69C + 48) )
      {
        *(float *)&v18 = v4;
        v19 = v18;
        v20 = v18;
        *(float *)&v15 = v6;
        v16 = v15;
        v17 = v15;
        sub_1011BB20((int)v7, (int)&v15, (int)&v18, 255, 255, 0, 0, 2.0);
        v4 = 12.0;
        v6 = -12.0;
      }
      if ( this[49] - v3 - 1 > 0 )
      {
        memcpy((void *)(v5 + this[46]), (const void *)(v5 + this[46] + 16), 16 * (this[49] - v3 - 1));
        v4 = 12.0;
        v6 = -12.0;
      }
      --this[49];
      goto LABEL_10;
    }
    v8 = a2[1] - v7[1];
    v9 = v8 * v8;
    v10 = *a2 - *v7;
    v11 = v9;
    v12 = a2[2] - v7[2];
    if ( v10 * v10 + v11 + v12 * v12 < 1296.0 )
      break;
LABEL_10:
    ++v3;
    v5 += 16;
    if ( v3 >= this[49] )
      return 0;
  }
  if ( *(_DWORD *)(dword_106DB69C + 48) )
  {
    *(float *)&v15 = v4;
    v16 = v15;
    v17 = v15;
    v14 = this[46] + 16 * v3;
    *(float *)&v18 = v6;
    v19 = v18;
    v20 = v18;
    sub_1011BB20(v14, (int)&v18, (int)&v15, 255, 0, 0, 128, 2.0);
  }
  return 1;
}
