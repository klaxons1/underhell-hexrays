int __cdecl sub_100FE1A0(int a1, int a2, float a3, float *a4, float *a5)
{
  int result; // eax
  int v6; // edx
  double v7; // st7
  int v8; // ecx
  int v9; // edx
  double v10; // st6
  double v11; // st7
  int v12; // esi
  double v13; // st6
  int v14; // edx

  result = a2;
  if ( !a2 )
  {
LABEL_2:
    result = (int)a5;
    *a5 = 0.0;
    *a4 = 0.0;
    return result;
  }
  LOBYTE(v6) = *(_BYTE *)(a2 + 1);
  if ( (_BYTE)v6 == 1 && *(_BYTE *)a2 == 1 )
  {
    result = (int)a5;
    v7 = (double)*(__int16 *)(a2 + 2) * a3;
    *a5 = v7;
    *a4 = v7;
  }
  else
  {
    v8 = a1;
    v6 = (unsigned __int8)v6;
    if ( (unsigned __int8)v6 <= a1 )
    {
      do
      {
        v8 -= v6;
        result += 2 * *(unsigned __int8 *)result + 2;
        LOBYTE(v6) = *(_BYTE *)(result + 1);
        if ( !(_BYTE)v6 )
          goto LABEL_2;
        v6 = (unsigned __int8)v6;
      }
      while ( (unsigned __int8)v6 <= v8 );
    }
    v9 = *(unsigned __int8 *)result;
    if ( v9 <= v8 )
    {
      v13 = (double)*(__int16 *)(result + 2 * v9) * a3;
      *a4 = v13;
      if ( *(unsigned __int8 *)(result + 1) <= v8 + 1 )
      {
        v14 = *(__int16 *)(result + 2 * *(unsigned __int8 *)result + 4);
        result = (int)a5;
        *a5 = a3 * (double)v14;
      }
      else
      {
        result = (int)a5;
        *a5 = v13;
      }
    }
    else
    {
      v10 = (double)*(__int16 *)(result + 2 * v8 + 2) * a3;
      v11 = a3;
      *a4 = v10;
      v12 = *(unsigned __int8 *)result;
      if ( v12 <= v8 + 1 )
      {
        if ( *(unsigned __int8 *)(result + 1) <= v8 + 1 )
        {
          result = *(__int16 *)(result + 2 * v12 + 4);
          *a5 = v11 * (double)result;
        }
        else
        {
          *a5 = v10;
        }
      }
      else
      {
        result = *(__int16 *)(result + 2 * v8 + 4);
        *a5 = v11 * (double)result;
      }
    }
  }
  return result;
}
