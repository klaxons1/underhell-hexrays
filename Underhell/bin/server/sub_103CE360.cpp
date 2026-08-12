char __thiscall sub_103CE360(int *this, int a2)
{
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  float *v8; // esi
  _BYTE v9[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( this[55] > 0 )
    return 0;
  if ( (*(_BYTE *)(a2 + 64) & 1) != 0 )
  {
    v4 = *(_DWORD *)(a2 + 40);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
    v6 = *(_DWORD *)(v5 + 424);
    if ( v6 )
    {
      if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6) >= 300.0 )
      {
        v7 = sub_100232D0((_DWORD *)a2);
        v8 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7) + 8);
        if ( *(float *)((*(int (__thiscall **)(int *, _BYTE *))(*this + 504))(this, v9) + 8) < (double)*v8 )
          return 1;
      }
    }
  }
  return 0;
}
