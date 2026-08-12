char __thiscall sub_10057A20(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax

  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 4) + 1372))(*(_DWORD *)(this + 4), this, a2);
  v3 = *(_DWORD *)(this + 232);
  if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 232) & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (*(_DWORD *)(this + 232) & 0xFFF) + 1];
  if ( a2 == v4 )
  {
    LOBYTE(v4) = sub_100577F0(this, 0, 0);
    *(_DWORD *)(this + 232) = -1;
    *(float *)(this + 80) = 0.0;
  }
  return v4;
}
