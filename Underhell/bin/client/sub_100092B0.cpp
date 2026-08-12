bool __thiscall sub_100092B0(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10401160;
  if ( (dword_10401160 & 1) == 0 )
  {
    v2 = dword_10401160 | 1;
    dword_10401160 |= 1u;
    dword_10401150 = -1;
    dword_10401154 = -1;
    dword_10401158 = -1;
    dword_1040115C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10401150;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10401160 = v2 | 1;
    dword_10401150 = -1;
    dword_10401154 = -1;
    dword_10401158 = -1;
    dword_1040115C = 1;
  }
  if ( v4 == -1 )
    return dword_10401154 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4 + 4) == a2;
}
