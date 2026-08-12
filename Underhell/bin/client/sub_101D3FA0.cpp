char __thiscall sub_101D3FA0(
        _DWORD *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6,
        int a7)
{
  unsigned int v7; // edx
  int v8; // ebx
  int v10; // edx
  unsigned int v11; // eax
  int v12; // esi
  double v13; // st7
  unsigned int v14; // esi
  unsigned int v16; // [esp+0h] [ebp-8h]
  _DWORD *v17; // [esp+4h] [ebp-4h]
  float *v18; // [esp+20h] [ebp+18h]
  unsigned int v19; // [esp+20h] [ebp+18h]

  v17 = this;
  if ( a2 >= this[1] || a3 >= this[2] )
    return 0;
  v7 = 0;
  v16 = 0;
  if ( a5 )
  {
    v8 = a6;
    do
    {
      if ( v7 + a3 >= this[2] )
        break;
      v10 = this[5] + 16 * a2 + (v7 + a3) * this[3];
      v11 = 0;
      if ( a4 < 4u )
      {
LABEL_12:
        if ( v11 < a4 )
        {
          v19 = v11 + a2;
          do
          {
            if ( v19 >= this[1] )
              break;
            v8 = a6;
            ++v19;
            v14 = v11 + v16 * a4;
            ++v11;
            v10 += 16;
            *(float *)(v10 + 4 * a7 - 16) = *(float *)(a6 + 4 * v14);
          }
          while ( v11 < a4 );
        }
      }
      else
      {
        while ( v11 + a2 < this[1] )
        {
          v12 = v16 * a4;
          v18 = (float *)(v8 + 4 * (v12 + v11));
          *(float *)(v10 + 4 * a7) = *v18;
          this = v17;
          if ( v11 + a2 + 1 >= v17[1]
            || (*(float *)(v10 + 4 * a7 + 16) = v18[1], v11 + a2 + 2 >= v17[1])
            || (*(float *)(v10 + 4 * a7 + 32) = *(float *)(a6 + 4 * (v12 + v11) + 8), this = v17, v11 + a2 + 3 >= v17[1]) )
          {
            v8 = a6;
            break;
          }
          v8 = a6;
          v13 = *(float *)(a6 + 4 * (v11 + v12) + 12);
          v11 += 4;
          *(float *)(v10 + 4 * a7 + 48) = v13;
          v10 += 64;
          if ( v11 >= (unsigned int)a4 - 3 )
            goto LABEL_12;
        }
      }
      v7 = ++v16;
    }
    while ( v16 < a5 );
  }
  return 1;
}
