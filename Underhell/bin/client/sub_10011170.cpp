_DWORD *__thiscall sub_10011170(int *this, _DWORD *a2, int a3, int a4, int a5, int a6, float a7, int a8)
{
  _DWORD *result; // eax
  int v10; // eax
  double v11; // st7
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // eax

  if ( a8 )
  {
    v10 = sub_1000F270(this, a8);
    if ( v10 == -1 )
      v10 = sub_100110F0(this, a8);
    v11 = a7;
    v12 = 32 * v10;
    v13 = (_DWORD *)(32 * v10 + this[49]);
    *v13 = a3;
    v13[1] = a4;
    v13[2] = a5;
    v13[3] = a6;
    if ( 0.0 != a7 )
    {
      if ( -1.0 == v11 )
        v14 = -1;
      else
        v14 = (int)(v11 / *((float *)off_103DC81C + 7) + 0.5);
      *(_DWORD *)(this[49] + v12 + 20) = v14;
      sub_1000F340(this, v14 != -1);
    }
    result = a2;
    *a2 = a3;
    a2[1] = a4;
    a2[2] = a5;
    a2[3] = a6;
  }
  else
  {
    result = a2;
    this[12] = a3;
    *a2 = a3;
    this[13] = a4;
    this[14] = a5;
    a2[1] = a4;
    a2[2] = a5;
    this[15] = a6;
    a2[3] = a6;
  }
  return result;
}
