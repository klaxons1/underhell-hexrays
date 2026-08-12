int __thiscall sub_101188E0(int this, float a2, int a3, int a4)
{
  int v4; // ebx
  int result; // eax
  int v7; // esi
  int v8; // ebx
  double v9; // st7
  long double v10; // st7

  v4 = a4;
  result = sub_10118820((_DWORD **)this, (const char *)LODWORD(a2), 4 * a4);
  v7 = 0;
  if ( v4 > 0 )
  {
    v8 = a3;
    while ( 0.0 != *(float *)(v8 + 4 * v7) )
    {
      if ( -3.402823466385289e38 == *(float *)(v8 + 4 * v7) || 3.4028235e38 == *(float *)(v8 + 4 * v7) )
      {
        v9 = *(float *)(v8 + 4 * v7);
        goto LABEL_10;
      }
      v10 = *(float *)(v8 + 4 * v7) - *(float *)(*(_DWORD *)(this + 28) + 1320);
      a2 = v10;
      if ( fabs(v10) < 0.001 )
      {
        v9 = 0.001;
        goto LABEL_10;
      }
LABEL_11:
      result = (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)this + 76))(this, &a2, 4);
      if ( ++v7 >= a4 )
        return result;
    }
    v9 = -1.7014117e38;
LABEL_10:
    a2 = v9;
    goto LABEL_11;
  }
  return result;
}
