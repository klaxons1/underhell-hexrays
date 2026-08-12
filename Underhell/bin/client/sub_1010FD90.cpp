void __thiscall sub_1010FD90(unsigned __int8 *this, int a2, _DWORD *a3, int a4, float a5)
{
  unsigned __int8 *v5; // edx
  _DWORD *v6; // edi
  double v7; // st7
  double v8; // st6
  double v9; // st7
  int v10; // esi
  float *v11; // ebx
  double v12; // st7
  int v13; // edi
  float *v14; // eax
  int v15; // ecx
  char *v16; // edx
  int v17; // esi
  double v18; // st5
  double v19; // st4
  int v20; // edx
  double v21; // st5
  double v22; // st4
  char *v23; // [esp+20h] [ebp-8h]
  float *v25; // [esp+38h] [ebp+10h]
  int v26; // [esp+3Ch] [ebp+14h]

  v5 = this;
  v6 = a3;
  v7 = **(float **)a4 - *(float *)*a3;
  v8 = a5;
  if ( fabs(a5 - v7) > 0.000099999997 && v7 > 0.000099999997 )
  {
    v9 = v8 / v7;
    v10 = 0;
    v26 = 0;
    *(float *)a2 = **(float **)a4 - v8;
    if ( this[29] )
    {
      v11 = *(float **)(*(_DWORD *)a4 + 8);
      v12 = 1.0 - v9;
      v13 = *(_DWORD *)(*a3 + 8);
      v23 = (char *)v11 - v13;
      v25 = v11;
      v14 = (float *)(v13 + 8);
      v15 = -8 - v13;
      while ( 1 )
      {
        if ( *(_BYTE *)(v10 + *((_DWORD *)v5 + 8)) )
        {
          v16 = (char *)v14 + v15;
          v17 = *(_DWORD *)(a2 + 8);
          v18 = (1.0 - v12) * *v14 + v12 * *(float *)((char *)v11 + (_DWORD)v14 + v15 + 8);
          v19 = *(v14 - 1) * (1.0 - v12) + v12 * *(float *)((char *)v11 + (_DWORD)v14 + v15 + 4);
          *(float *)&v16[v17] = *(v14 - 2) * (1.0 - v12) + v12 * *(float *)((char *)v11 + (_DWORD)v14 + v15);
          *(float *)&v16[v17 + 4] = v19;
          *(float *)&v16[v17 + 8] = v18;
          v10 = v26;
        }
        else
        {
          v20 = v15 + *(_DWORD *)(a2 + 8);
          v21 = (*(float *)((char *)v14 + (_DWORD)v23) - *v14) * v12 + *v14;
          v22 = (*(float *)((char *)v14 + (_DWORD)v23 - 4) - *(v14 - 1)) * v12 + *(v14 - 1);
          *(float *)((char *)v14 + v20) = (*v25 - *(v14 - 2)) * v12 + *(v14 - 2);
          *(float *)((char *)v14 + v20 + 4) = v22;
          *(float *)((char *)v14 + v20 + 8) = v21;
        }
        v25 += 3;
        ++v10;
        v14 += 3;
        v26 = v10;
        if ( v10 >= this[29] )
          break;
        v5 = this;
      }
      v6 = a3;
    }
    *v6 = a2;
  }
}
