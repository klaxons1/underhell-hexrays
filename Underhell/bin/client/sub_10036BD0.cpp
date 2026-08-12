float *__thiscall sub_10036BD0(int this, int a2, float a3, float *a4, float *a5)
{
  float *result; // eax
  int v6; // edi
  int v7; // edx
  double v8; // st7
  float *v9; // edx
  char *v10; // esi
  double v11; // st5
  double v12; // st4
  double v13; // st5
  double v14; // st4
  double v15; // rt2
  int v16; // [esp+30h] [ebp+10h]

  result = a4;
  v6 = 0;
  if ( a4 == a5 )
  {
    if ( *(_BYTE *)(this + 29) )
    {
      v7 = a2 + 8;
      result = a5 + 3;
      do
      {
        ++v6;
        *(float *)(v7 - 8) = *(result - 2);
        result += 3;
        v7 += 12;
        *(float *)(v7 - 16) = *(result - 4);
        *(float *)(v7 - 12) = *(result - 3);
      }
      while ( v6 < *(unsigned __int8 *)(this + 29) );
    }
  }
  else if ( *(_BYTE *)(this + 29) )
  {
    v8 = a3;
    v9 = (float *)(a2 + 4);
    result = a4 + 3;
    v10 = (char *)a5 - a2;
    v16 = (char *)a5 - (char *)a4;
    do
    {
      if ( *(_BYTE *)(v6 + *(_DWORD *)(this + 32)) )
      {
        v11 = (1.0 - v8) * *result + *(float *)((char *)v9 + (_DWORD)v10 + 8) * v8;
        v12 = (1.0 - v8) * *(result - 1) + *(float *)((char *)v9 + (_DWORD)v10 + 4) * v8;
        *(v9 - 1) = *(result - 2) * (1.0 - v8) + *(float *)((char *)v9 + (_DWORD)v10) * v8;
      }
      else
      {
        v13 = (*(float *)((char *)result + v16 - 4) - *(result - 1)) * v8 + *(result - 1);
        v14 = (*(float *)((char *)result + v16) - *result) * v8 + *result;
        *(v9 - 1) = (*(float *)((char *)v9 + (_DWORD)v10) - *(result - 2)) * v8 + *(result - 2);
        v15 = v14;
        v12 = v13;
        v11 = v15;
      }
      *v9 = v12;
      ++v6;
      result += 3;
      v9[1] = v11;
      v9 += 3;
    }
    while ( v6 < *(unsigned __int8 *)(this + 29) );
  }
  return result;
}
