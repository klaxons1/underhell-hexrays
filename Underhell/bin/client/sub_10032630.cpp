int __thiscall sub_10032630(unsigned __int16 *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ecx
  unsigned int *v6; // eax
  int v7; // edx
  int v8; // ecx
  char *v9; // esi
  double v10; // st7
  float *v11; // eax
  double v12; // st6
  double v13; // rt0
  double v14; // rt1
  double v15; // st6
  double v16; // st7
  int v17; // ecx
  int v18; // eax
  void *v19; // edi
  unsigned int v20; // [esp+8h] [ebp-8h]
  char *v21; // [esp+Ch] [ebp-4h]
  char *v22; // [esp+18h] [ebp+8h]

  result = a2;
  v4 = this[2];
  if ( a2 > v4 )
  {
    v20 = v4 + this[5] * ((this[5] + a2 - 1) / this[5]);
    v5 = (36 * (unsigned __int64)v20) >> 32 != 0 ? -1 : 36 * v20;
    v6 = (unsigned int *)sub_100DDA40(__CFADD__(v5, 4) ? -1 : v5 + 4);
    v7 = 0;
    if ( v6 )
    {
      *v6 = v20;
      v8 = v20 - 1;
      v9 = (char *)(v6 + 1);
      if ( (int)(v20 - 1) >= 0 )
      {
        v10 = 0.0;
        v11 = (float *)(v6 + 4);
        v12 = 1.0;
        while ( 1 )
        {
          v14 = v12;
          v15 = v10;
          v11 += 9;
          --v8;
          *(v11 - 10) = v10;
          *(v11 - 9) = v10;
          *(v11 - 7) = v14;
          v16 = v14;
          *(v11 - 6) = v15;
          *(v11 - 11) = 0.0;
          *(v11 - 10) = v15;
          *(v11 - 9) = v15;
          *(v11 - 7) = v15;
          *(v11 - 6) = v15;
          *(v11 - 5) = v15;
          *(v11 - 4) = v15;
          if ( v8 < 0 )
            break;
          v13 = v15;
          v12 = v16;
          v10 = v13;
        }
      }
      v21 = v9;
    }
    else
    {
      v21 = 0;
    }
    if ( this[2] )
    {
      v22 = v21;
      do
      {
        v17 = this[2];
        v18 = v7 + this[3];
        if ( v18 >= v17 )
          v18 -= v17;
        v19 = v22;
        v22 += 36;
        qmemcpy(v19, (const void *)(*(_DWORD *)this + 36 * v18), 0x24u);
        ++v7;
      }
      while ( v7 < this[2] );
    }
    this[3] = 0;
    result = *(_DWORD *)this;
    this[2] = v20;
    if ( result )
      result = sub_10034930(result - 4);
    *(_DWORD *)this = v21;
  }
  return result;
}
