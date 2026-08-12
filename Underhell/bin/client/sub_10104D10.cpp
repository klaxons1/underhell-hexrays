int __thiscall sub_10104D10(int this, int a2)
{
  int *v4; // eax
  int v5; // eax
  int v6; // esi
  float *v7; // edi
  float *v8; // eax
  double v9; // st4
  double v10; // st7
  double v11; // st4
  double v12; // st5
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int *v17; // edi

  if ( !*(_DWORD *)(this + 28) )
    return 1;
  v4 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v5 = sub_1007A770(off_103DCD78, *v4);
  v6 = v5;
  if ( v5
    && v5 != *(_DWORD *)(this + 28)
    && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 504))(v5)
     || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 520))(v6))
    && (!(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 520))(v6) || *(_BYTE *)(v6 + 3372))
    && *(_DWORD *)(v6 + 736) != 7 )
  {
    v7 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 36))(*(_DWORD *)(this + 28));
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 36))(v6);
    v9 = *v8 - *v7;
    v10 = v9 * v9;
    v11 = v8[1] - v7[1];
    v12 = v8[2] - v7[2];
    if ( v12 * v12 + v11 * v11 + v10 <= *(float *)(this + 4) )
    {
      a2 = -1;
      sub_1000F020(&a2, v6);
      v13 = *(_DWORD *)(this + 20);
      v14 = *(_DWORD *)(this + 12);
      if ( v13 + 1 > v14 )
        sub_1010AFF0(v13 - v14 + 1);
      ++*(_DWORD *)(this + 20);
      v15 = *(_DWORD *)(this + 8);
      v16 = *(_DWORD *)(this + 20) - v13 - 1;
      *(_DWORD *)(this + 24) = v15;
      if ( v16 > 0 )
        memcpy((void *)(v15 + 4 * v13 + 4), (const void *)(v15 + 4 * v13), 4 * v16);
      v17 = (int *)(*(_DWORD *)(this + 8) + 4 * v13);
      if ( v17 )
        *v17 = a2;
    }
  }
  return 0;
}
