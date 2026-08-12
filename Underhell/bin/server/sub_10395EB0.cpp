bool __stdcall sub_10395EB0(float *a1, int a2)
{
  float *v2; // eax
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  int v7; // eax
  bool result; // al
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  v2 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v9);
  v3 = *a1 - *v2;
  v4 = v3 * v3;
  v5 = a1[1] - v2[1];
  v6 = a1[2] - v2[2];
  result = 0;
  if ( v6 * v6 + v5 * v5 + v4 > 2304.0 )
  {
    v7 = sub_100D7680(a2);
    if ( !(*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)v7 + 872))(v7, a1) )
      return 1;
  }
  return result;
}
