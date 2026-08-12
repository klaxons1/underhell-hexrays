int __usercall sub_10239250@<eax>(int a1@<ebx>, int a2@<edi>, int a3, int a4)
{
  int v4; // esi
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  double v8; // st7
  int v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+28h] [ebp-4h]

  v11 = *(float *)(dword_106B3174 + 44);
  v4 = 100;
  if ( (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1, a2) )
    v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 6) + 98;
  if ( a3 && (v5 = *(_DWORD *)(a3 + 12)) != 0 )
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  else
    v6 = 0;
  if ( flt_1060B428 < (double)*(float *)(dword_106B31C8 + 12)
    || (dword_1060B42C == -1 || off_1061BE18[4 * (dword_1060B42C & 0xFFF) + 2] != (unsigned int)dword_1060B42C >> 12
      ? (v7 = 0)
      : (v7 = off_1061BE18[4 * (dword_1060B42C & 0xFFF) + 1]),
        v7 == v6) )
  {
    v8 = v11;
  }
  else
  {
    v8 = v11 * 0.3;
  }
  if ( v8 <= 0.05 )
    return -1;
  *(float *)&v10 = v8;
  return sub_10238E20(a1, a3, v4, a3, a4, v10, 75, 0, v4);
}
