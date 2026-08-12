int *__thiscall sub_1019F260(int this, float a2, float a3, float a4, float a5)
{
  _DWORD *v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int *result; // eax
  int v12; // edx
  int v13; // edi
  int *v14; // [esp+14h] [ebp+8h]

  v6 = *(_DWORD **)(this + 4);
  if ( v6 )
  {
    sub_1019EFF0(v6, 3);
    *(_DWORD *)(this + 4) = 0;
  }
  *(float *)(this + 20) = a2;
  *(float *)(this + 24) = a4;
  v7 = (int)((a3 - a2) / *(float *)(this + 8)) + 1;
  *(_DWORD *)(this + 12) = v7;
  v8 = (int)((a5 - a4) / *(float *)(this + 8)) + 1;
  v9 = v8 * v7;
  *(_DWORD *)(this + 16) = v8;
  v10 = (36 * (unsigned __int64)(unsigned int)v9) >> 32 != 0 ? -1 : 36 * v9;
  result = (int *)sub_10184390(__CFADD__(v10, 4) ? -1 : v10 + 4);
  if ( result )
  {
    *result++ = v9;
    v12 = v9 - 1;
    v14 = result;
    if ( v9 - 1 >= 0 )
    {
      do
      {
        *result = 0;
        result[1] = 0;
        result[2] = 0;
        result[7] = -1;
        v13 = *result;
        result[3] = -1;
        result[4] = -1;
        result[5] = -1;
        result[6] = 0;
        result[8] = v13;
        result += 9;
        --v12;
      }
      while ( v12 >= 0 );
      result = v14;
    }
    *(_DWORD *)(this + 4) = result;
  }
  else
  {
    *(_DWORD *)(this + 4) = 0;
  }
  return result;
}
