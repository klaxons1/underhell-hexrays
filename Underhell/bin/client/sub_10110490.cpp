void __thiscall sub_10110490(unsigned __int8 *this, int a2, int a3, int a4, float a5, float a6)
{
  int v6; // edx
  double v8; // st7
  int v9; // edi
  int v10; // esi
  int v11; // eax
  float *v12; // eax
  int v13; // esi
  int v14; // ecx
  float *v15; // eax
  int v16[3]; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+28h] [ebp+8h]
  float v18; // [esp+34h] [ebp+14h]
  float v19; // [esp+38h] [ebp+18h]

  v6 = a4;
  if ( fabs(*(float *)a3 - *(float *)a4) < 0.001 || a5 <= (double)*(float *)a4 )
  {
    v13 = 0;
    if ( this[29] )
    {
      v14 = a2 + 8;
      do
      {
        v15 = (float *)(*(_DWORD *)(a4 + 8) + v14 + -8 - a2);
        ++v13;
        v14 += 12;
        *(float *)(v14 - 20) = *v15;
        *(float *)(v14 - 16) = v15[1];
        *(float *)(v14 - 12) = v15[2];
      }
      while ( v13 < this[29] );
    }
  }
  else
  {
    v8 = a5 - *(float *)a4;
    if ( a6 <= v8 )
      v8 = a6;
    v9 = 0;
    v19 = 1.0 / (*(float *)a4 - *(float *)a3);
    if ( this[29] )
    {
      v10 = a2 + 8;
      v11 = -8 - a2;
      v17 = -8 - a2;
      while ( 1 )
      {
        v18 = v8;
        v12 = (float *)sub_1003A470(
                         v16,
                         (float *)(*(_DWORD *)(a3 + 8) + v10 + v11),
                         (float *)(v10 + v11 + *(_DWORD *)(v6 + 8)),
                         v19,
                         v18);
        *(float *)(v10 - 8) = *v12;
        ++v9;
        *(float *)(v10 - 4) = v12[1];
        v10 += 12;
        *(float *)(v10 - 12) = v12[2];
        if ( v9 >= this[29] )
          break;
        v11 = v17;
        v6 = a4;
      }
    }
  }
}
