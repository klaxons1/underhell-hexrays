bool __thiscall sub_10309490(int *this, int a2)
{
  int v3; // ecx
  bool result; // al
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  double v9; // [esp+8h] [ebp-8h]

  v3 = *(_DWORD *)(a2 + 64);
  result = 1;
  if ( (v3 & 0x40) == 0 || *(float *)(a2 + 52) <= 25.0 )
  {
    if ( (v3 & 1) == 0 )
      return 0;
    v5 = *(_DWORD *)(a2 + 40);
    if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    v7 = *(_DWORD *)(v6 + 424);
    if ( !v7 )
      return 0;
    if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7) & 0x100) == 0 )
      return 0;
    v8 = sub_100232D0((_DWORD *)a2);
    if ( !(unsigned __int8)sub_103D2120(v8) )
    {
      v9 = (double)this[55];
      if ( (double)(*(int (__thiscall **)(int *))(*this + 448))(this) * 0.25 > v9 || *(float *)(a2 + 52) < 20.0 )
        return 0;
    }
  }
  return result;
}
