int __cdecl sub_1001AE60(int a1, int a2, float a3, float *a4)
{
  int result; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  double v8; // st7
  int v9; // edx

  result = a2;
  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(a2 + 1);
    v6 = a1;
    if ( v5 > a1 )
    {
LABEL_6:
      v7 = *(unsigned __int8 *)result;
      if ( v7 <= v6 )
      {
        v9 = *(__int16 *)(result + 2 * v7);
        result = (int)a4;
        v8 = (double)v9 * a3;
      }
      else
      {
        result = *(__int16 *)(result + 2 * v6 + 2);
        v8 = (double)result * a3;
      }
      *a4 = v8;
    }
    else
    {
      while ( 1 )
      {
        v6 -= v5;
        result += 2 * *(unsigned __int8 *)result + 2;
        LOBYTE(v5) = *(_BYTE *)(result + 1);
        if ( !(_BYTE)v5 )
          break;
        v5 = (unsigned __int8)v5;
        if ( (unsigned __int8)v5 > v6 )
          goto LABEL_6;
      }
      *a4 = 0.0;
    }
  }
  else
  {
    result = (int)a4;
    *a4 = 0.0;
  }
  return result;
}
