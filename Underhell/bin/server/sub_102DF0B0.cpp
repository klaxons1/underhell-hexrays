char __thiscall sub_102DF0B0(int this, int a2)
{
  int *v3; // edi
  double v5; // st7
  int v6; // esi
  double v7; // st7
  bool v8; // zf
  float v9; // [esp+0h] [ebp-10h]

  v3 = (int *)(this + 5092);
  if ( (*(_DWORD *)a2 & *(_DWORD *)(this + 5092)) == 0 || !*(_BYTE *)(this + 2329) )
    return 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 176))(dword_106B3CDC) == 1
    && *(_DWORD *)(dword_10698344 + 48)
    && (*(_BYTE *)a2 & 1) == 0 )
  {
    v5 = *(float *)(a2 + 4) * 0.5;
  }
  else
  {
    v5 = *(float *)(a2 + 4);
  }
  v9 = v5 * 0.1;
  sub_102DEF10(this, v9);
  v6 = *v3 & ~*(_DWORD *)a2;
  if ( *v3 != v6 )
  {
    (*(void (__thiscall **)(int *, int *))*(v3 - 3))(v3 - 3, v3);
    *v3 = v6;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 176))(dword_106B3CDC) == 1
    && *(_DWORD *)(dword_10698344 + 48)
    && (*(_BYTE *)a2 & 1) == 0 )
  {
    v7 = *(float *)(a2 + 4) * 0.5;
  }
  else
  {
    v7 = *(float *)(a2 + 4);
  }
  v8 = *v3 == 0;
  *(float *)(this + 5596) = *(float *)(this + 5596) - v7;
  if ( v8 )
    *(float *)(this + 5192) = *(float *)(dword_106B31C8 + 12);
  return 1;
}
