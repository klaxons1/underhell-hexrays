int __thiscall sub_1038A3E0(_DWORD *this, float a2, float a3)
{
  double v4; // st7
  double v5; // st6
  int v6; // esi
  int v7; // eax
  double v8; // st7
  int v9; // eax
  double v10; // st6
  int v11; // esi
  int v13; // [esp+8h] [ebp-4h]

  v13 = *(_DWORD *)(dword_106E9E04 + 48);
  this[1059] = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, v13, v13 + 1);
  if ( !sub_1038A110(this) )
    return 0;
  v4 = a3 * 0.0099999998;
  v5 = a2 * 0.0020000001;
  v6 = (int)v4;
  v7 = (int)v5;
  if ( (int)v4 >= 5 || v7 >= 5 )
    return 0;
  v8 = v4 - (double)(int)v4;
  v9 = v6 + 6 * v7;
  v10 = v5 - (double)(int)v5;
  v11 = (int)(((double)dword_10676738[v9] * (1.0 - v8) * (1.0 - v10)
             + (1.0 - v8) * (double)dword_10676750[v9] * v10
             + (1.0 - v10) * ((double)dword_1067673C[v9] * v8)
             + v10 * (v8 * (double)dword_10676754[v9]))
            * (double)v13);
  this[1059] += (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, v11, v11 + 1);
  return v11;
}
