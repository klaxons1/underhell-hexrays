char __thiscall sub_100AAF00(_DWORD *this, int a2)
{
  int v4; // eax
  int v5; // ecx
  float *v6; // eax
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  _BYTE v13[12]; // [esp+8h] [ebp-Ch] BYREF
  int v14; // [esp+1Ch] [ebp+8h]
  float v15; // [esp+1Ch] [ebp+8h]

  if ( *(_DWORD *)a2 == -1 || off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 2] != *(_DWORD *)a2 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 1];
  v5 = this[1];
  if ( v4 == v5 || *(_DWORD *)(v5 + 2324) == 4 && (*(_DWORD *)(a2 + 16) & 8) != 0 )
    return 0;
  if ( *(_BYTE *)(v5 + 2680) )
    return 0;
  v14 = *(_DWORD *)(a2 + 8);
  v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 1468))(v5) * (double)v14;
  v6 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)this[1] + 516))(this[1], v13);
  v7 = *(float *)(a2 + 40) - v6[1];
  v8 = v7 * v7;
  v9 = *(float *)(a2 + 36) - *v6;
  v10 = v8;
  v11 = *(float *)(a2 + 44) - v6[2];
  if ( v15 * v15 < v9 * v9 + v10 + v11 * v11 )
    return 0;
  else
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)this[1] + 1428))(this[1], a2);
}
