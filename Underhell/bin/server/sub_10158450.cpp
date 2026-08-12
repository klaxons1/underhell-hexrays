int __thiscall sub_10158450(_DWORD *this, float *a2, int a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // edx
  bool v7; // zf
  _DWORD *v8; // edx
  float *v9; // eax
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  float *v15; // eax
  _DWORD *v17; // [esp+4h] [ebp-4h]

  if ( !byte_10627EF5 )
    return (**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, a2, 0);
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this[1] + 24));
  v5 = v4;
  v6 = v4 + 4 + a3 + 2 * (v4 + 4);
  v7 = this[v6] == -9999;
  v8 = &this[v6];
  v17 = v8;
  if ( v7
    || (v9 = (float *)&this[6 * v4 + 57 + 3 * v4 + 3 * a3],
        v10 = a2[1] - v9[1],
        v11 = v10 * v10,
        v12 = *a2 - *v9,
        v13 = v11,
        v14 = a2[2] - v9[2],
        v12 * v12 + v13 + v14 * v14 > 1.0) )
  {
    *v8 = (**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, a2, 0);
    v8 = v17;
    v15 = (float *)&this[6 * v5 + 57 + 3 * v5 + 3 * a3];
    *v15 = *a2;
    v15[1] = a2[1];
    v15[2] = a2[2];
  }
  return *v8;
}
