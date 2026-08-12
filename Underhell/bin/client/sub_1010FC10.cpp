float *__thiscall sub_1010FC10(int this, float *a2, float a3, int a4, float *a5)
{
  float *result; // eax
  int v7; // esi
  float *v8; // edx
  int v9; // esi
  double v10; // st7
  float *v11; // edi
  int v12; // ebx
  int v13; // ecx
  double v14; // st5
  double v15; // st4
  double v16; // st5
  double v17; // st4
  int v18; // [esp+20h] [ebp-Ch]
  int v19; // [esp+24h] [ebp-8h]
  int v21; // [esp+34h] [ebp+8h]
  int v22; // [esp+3Ch] [ebp+10h]

  result = a5;
  if ( (float *)a4 == a5 )
  {
    v7 = 0;
    if ( *(_BYTE *)(this + 29) )
    {
      result = (float *)*((_DWORD *)a5 + 2);
      v8 = a2 + 2;
      do
      {
        ++v7;
        *(v8 - 2) = *result;
        result += 3;
        v8 += 3;
        *(v8 - 4) = *(result - 2);
        *(v8 - 3) = *(result - 1);
      }
      while ( v7 < *(unsigned __int8 *)(this + 29) );
    }
  }
  else
  {
    v22 = 0;
    if ( *(_BYTE *)(this + 29) )
    {
      v9 = *(_DWORD *)(a4 + 8);
      v10 = a3;
      v11 = a2;
      v12 = *((_DWORD *)a5 + 2);
      v18 = v12 - v9;
      v21 = (int)a2 - v9;
      v19 = v12 - (_DWORD)v11;
      v13 = 0;
      result = (float *)(v9 + 8);
      do
      {
        if ( *(_BYTE *)(v13 + *(_DWORD *)(this + 32)) )
        {
          v14 = (1.0 - v10) * *result + *(float *)((char *)result + v12 - v9) * v10;
          v15 = *(result - 1) * (1.0 - v10) + *(float *)((char *)result + v12 - v9 - 4) * v10;
          *v11 = *(result - 2) * (1.0 - v10) + *(float *)((char *)result + v12 - v9 - 8) * v10;
          v11[1] = v15;
          *(float *)((char *)result + v21) = v14;
          v13 = v22;
        }
        else
        {
          v16 = (*(float *)((char *)result + v18 - 4) - *(result - 1)) * v10 + *(result - 1);
          v17 = (*(float *)((char *)result + v18) - *result) * v10 + *result;
          *v11 = (*(float *)((char *)v11 + v19) - *(result - 2)) * v10 + *(result - 2);
          v11[1] = v16;
          *(float *)((char *)result + v21) = v17;
        }
        ++v13;
        result += 3;
        v11 += 3;
        v22 = v13;
      }
      while ( v13 < *(unsigned __int8 *)(this + 29) );
    }
  }
  return result;
}
