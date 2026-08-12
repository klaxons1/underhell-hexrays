int __stdcall sub_100D2880(int a1, int a2, _DWORD *a3, void *a4, float a5, _DWORD *a6, int a7)
{
  double v7; // st7
  int result; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // ebx

  if ( a3 )
  {
    v7 = a5;
    if ( a5 <= 1.0 )
    {
      if ( v7 < 0.0 )
        v7 = 0.0;
    }
    else
    {
      v7 = 1.0;
    }
    result = a7;
    v9 = a3[42] - a3[41];
    v10 = a3[40] - a3[39];
    if ( a7 == 1 )
    {
      v11 = (int)(v7 * (double)(a3[42] - a3[41]));
      sub_100B4030(a4, a1, a2, 0, 0, v10, v11, a6);
      return sub_100B4030(a3, a1, a2 + v11, 0, v11, v10, v9 - v11, a6);
    }
    else if ( !a7 )
    {
      v12 = (int)(v7 * (double)(a3[40] - a3[39]));
      sub_100B4030(a4, a1, a2, 0, 0, v12, v9, a6);
      return sub_100B4030(a3, a1 + v12, a2, v12, 0, v10 - v12, v9, a6);
    }
  }
  return result;
}
