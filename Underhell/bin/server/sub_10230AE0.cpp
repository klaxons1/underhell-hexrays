char __thiscall sub_10230AE0(int this, int a2, char a3)
{
  unsigned int v4; // eax
  int v5; // eax
  char result; // al

  if ( a2 )
    *(_DWORD *)(this + 896) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 896) = -1;
  v4 = *(_DWORD *)(this + 896);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 896) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(this + 896) & 0xFFF) + 1];
  *(_DWORD *)(this + 824) = *(_DWORD *)(v5 + 260);
  result = a3;
  *(_BYTE *)(this + 900) = a3;
  return result;
}
