void *__thiscall sub_10032920(unsigned __int16 *this, float a2, void *Src, char a4)
{
  unsigned __int16 *v4; // esi
  int v5; // eax
  int v6; // ecx
  unsigned __int16 v7; // dx
  int v8; // ecx
  int v9; // eax
  unsigned __int16 *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v29; // [esp+0h] [ebp-8h]
  int v31; // [esp+18h] [ebp+10h]

  v4 = this;
  if ( a4 )
  {
    if ( this[8] )
    {
      do
      {
        v5 = v4[7];
        v6 = v4[6];
        if ( v5 >= v6 )
          v5 -= v6;
        if ( *(float *)(*((_DWORD *)v4 + 2) + 36 * v5) + 0.000099999997 <= a2 )
          break;
        v7 = v4[8];
        if ( v7 )
        {
          v8 = v4[6];
          v9 = v4[7] + 1;
          if ( v9 >= v8 )
            LOWORD(v9) = v9 - v8;
          v4[7] = v9;
          v4[8] = v7 - 1;
        }
      }
      while ( v4[8] );
    }
    v10 = v4 + 4;
    sub_10032630(v4 + 4, v4[8] + 1);
    v11 = v4[6];
    v12 = v4[7];
    ++v4[8];
    v13 = v12 + v11 - 1;
    if ( v13 >= v11 )
      LOWORD(v13) = v13 - v11;
    v4[7] = v13;
    v14 = 0;
  }
  else
  {
    v10 = this + 4;
    sub_10032630(this + 4, this[8] + 1);
    v15 = v4[6];
    v16 = v4[7];
    ++v4[8];
    v17 = v16 + v15 - 1;
    if ( v17 >= v15 )
      LOWORD(v17) = v17 - v15;
    v4[7] = v17;
    v18 = 1;
    v14 = 0;
    v31 = 0;
    if ( v4[8] > 1u )
    {
      while ( 1 )
      {
        v19 = v10[2];
        v20 = v18 + v10[3];
        v29 = v20;
        if ( v20 >= v19 )
          v20 -= v19;
        if ( a2 >= (double)*(float *)(*(_DWORD *)v10 + 36 * v20) )
          break;
        v21 = v29;
        if ( v29 >= v19 )
          v21 = v29 - v19;
        v22 = v31 + v10[3];
        if ( v22 >= v19 )
          v22 -= v19;
        qmemcpy((void *)(*(_DWORD *)v10 + 36 * v22), (const void *)(*(_DWORD *)v10 + 36 * v21), 0x24u);
        v4 = this;
        v14 = v18++;
        v31 = v14;
        if ( v18 >= this[8] )
          goto LABEL_27;
      }
      v14 = v31;
    }
  }
LABEL_27:
  v23 = v14 + v10[3];
  v24 = v10[2];
  if ( v23 >= v24 )
    v23 -= v24;
  v25 = *(_DWORD *)v10;
  v26 = 9 * v23;
  v27 = *((unsigned __int8 *)v4 + 29);
  *(float *)(v25 + 4 * v26) = a2;
  return memcpy_0((void *)(v25 + 4 * v26 + 4), Src, 32 * v27);
}
