bool __thiscall sub_100B4640(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_1042FC20;
  if ( (dword_1042FC20 & 1) == 0 )
  {
    v2 = dword_1042FC20 | 1;
    dword_1042FC20 |= 1u;
    dword_1042FC10 = -1;
    dword_1042FC14 = -1;
    dword_1042FC18 = -1;
    dword_1042FC1C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_1042FC10;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_1042FC20 = v2 | 1;
    dword_1042FC10 = -1;
    dword_1042FC14 = -1;
    dword_1042FC18 = -1;
    dword_1042FC1C = 1;
  }
  if ( v4 == -1 )
    return dword_1042FC10 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4) == a2;
}
