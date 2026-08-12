bool __thiscall sub_100B2960(_DWORD *this, float *a2, float *a3, float a4)
{
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6
  int v10; // edi
  float *v11; // eax
  bool result; // al
  int v13[14]; // [esp+24h] [ebp-44h] BYREF
  float v14[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v5 = a2[1] - a3[1];
  v6 = v5 * v5;
  v7 = *a2 - *a3;
  v8 = v6;
  v9 = a2[2] - a3[2];
  result = 0;
  if ( a4 * a4 < v7 * v7 + v8 + v9 * v9 )
  {
    v10 = this[1];
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 532))(v10);
    v14[0] = *v11 + *a3;
    v14[1] = v11[1] + a3[1];
    v14[2] = v11[2] + a3[2];
    if ( (*(unsigned __int8 (__thiscall **)(int, float *, float *))(*(_DWORD *)v10 + 1944))(v10, a2, v14) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(*(_DWORD *)this[1] + 1932))(this[1], a3, 0) )
      {
        memset(v13, 0, sizeof(v13));
        sub_1007C550(*(_DWORD **)(this[1] + 2600), 0, (float *)(this[1] + 716), a3, 33701899, 0, 100.0, 0, (float *)v13);
        if ( !v13[0] )
          return 1;
      }
    }
  }
  return result;
}
