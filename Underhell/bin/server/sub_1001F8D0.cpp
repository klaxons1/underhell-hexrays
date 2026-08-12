bool __stdcall sub_1001F8D0(int a1, float *a2, float *a3, float *a4, float a5, float a6)
{
  double v7; // st6
  bool result; // al
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+34h] [ebp+10h]
  float v14; // [esp+34h] [ebp+10h]

  result = 0;
  if ( sub_10424800(a4, a2, a3, 0) < a6 )
  {
    v9 = *a3 - *a2;
    v10 = a3[1] - a2[1];
    v13 = off_10689714();
    v11 = *a4 - *a2;
    v12 = a4[1] - a2[1];
    if ( off_10689714() < v13 )
    {
      v7 = v11 * v9 + v12 * v10;
      if ( a5 < v7 )
        return 1;
      if ( v7 > 0.0 )
      {
        if ( a1 )
        {
          v14 = sub_100737B0(*(_DWORD *)(a1 + 1676)) * 1.414;
          if ( sub_104245F0(a4, a2, a3, 0) < v14 )
            return 1;
        }
      }
    }
  }
  return result;
}
