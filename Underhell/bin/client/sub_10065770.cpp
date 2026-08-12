float *__thiscall sub_10065770(_BYTE *this, int a2, float a3, float *a4, float *a5)
{
  double v5; // st6
  double v7; // st7
  float *result; // eax
  int v9; // ebx
  int v10; // eax
  double v11; // st6
  int v12; // edx
  double v13; // st5
  double v14; // st4
  int v15; // ecx
  double v16; // rt1
  double v17; // st4
  double v18; // st5
  double v19; // st4
  double v20; // st6
  float v21; // [esp+30h] [ebp+8h]
  float v22; // [esp+34h] [ebp+Ch]

  v5 = a3 - *(float *)a2;
  if ( v5 < 3.0 )
  {
    v7 = 0.0;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 13) & 2) == 0 )
    {
      result = a4;
      *a4 = 0.0;
      *a5 = 0.0;
      *(_BYTE *)(a2 + 12) = 0;
      return result;
    }
    v7 = 0.0;
    *(float *)a2 = a3;
    v5 = 0.0;
  }
  v9 = (int)v5;
  v10 = (int)(10.0 * v5);
  v11 = v5 - (double)(int)v5;
  v12 = 244 * *(_DWORD *)(a2 + 4);
  if ( v10 == *(_DWORD *)&this[v12 + 300] )
  {
    if ( (*(_BYTE *)(a2 + 13) & 2) != 0 )
    {
      *(float *)a2 = *((float *)off_103DC81C + 3);
      v13 = *(float *)&this[v12 + 60];
      v14 = *(float *)&this[v12 + 180];
    }
    else
    {
      v13 = v7;
      *(_BYTE *)(a2 + 12) = 0;
      v14 = v7;
    }
  }
  else
  {
    v15 = v10 + 61 * *(_DWORD *)(a2 + 4);
    v13 = *(float *)&this[4 * v15 + 60];
    v14 = *(float *)&this[4 * v15 + 180];
  }
  v16 = v14;
  v17 = v13 * *(float *)(a2 + 16);
  v22 = v17;
  v18 = v17;
  v19 = v16 * *(float *)(a2 + 16);
  if ( *(_DWORD *)(dword_1040EF84 + 48) )
  {
    Msg("Seconds:%d Fraction:%f Sample:%d  L:%f R:%f\n", v9, v11, v10, v18, v19);
    v21 = v19;
    v20 = v21;
    v18 = v22;
    v7 = 0.0;
  }
  else
  {
    v20 = v19;
  }
  result = a4;
  if ( this[6896] )
  {
    *a4 = v18;
    *a5 = v20;
  }
  else
  {
    *a4 = v7;
    *a5 = v7;
  }
  return result;
}
