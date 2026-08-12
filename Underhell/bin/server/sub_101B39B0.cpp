int __thiscall sub_101B39B0(int *this, int a2, float a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // esi
  int v7; // ecx
  int result; // eax

  v3 = this + 3;
  v4 = 7 * sub_101B3480(this + 3, this[6]);
  v5 = *(_DWORD *)(a2 + 300);
  v6 = *v3 + 4 * v4;
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 300) & 0xFFF) + 2] != v5 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(a2 + 300) & 0xFFF) + 1];
  if ( v7 )
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  else
    *(_DWORD *)(v6 + 12) = -1;
  *(_DWORD *)(v6 + 16) = *(unsigned __int8 *)(a2 + 305);
  result = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(v6 + 20) = result;
  *(float *)v6 = *(float *)(a2 + 716);
  *(float *)(v6 + 4) = *(float *)(a2 + 720);
  *(float *)(v6 + 8) = *(float *)(a2 + 724);
  *(float *)(v6 + 24) = a3;
  return result;
}
