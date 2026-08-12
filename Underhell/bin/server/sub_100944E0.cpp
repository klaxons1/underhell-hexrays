bool __thiscall sub_100944E0(_DWORD *this, unsigned __int8 a2)
{
  int v2; // edx
  int *v3; // eax
  char v4; // al

  v2 = dword_10693990;
  if ( (dword_10693990 & 1) == 0 )
  {
    v2 = dword_10693990 | 1;
    dword_10693990 |= 1u;
    dword_1069398C = 0x1FFFFFF;
  }
  if ( a2 == 0xFF )
    v3 = &dword_1069398C;
  else
    v3 = (int *)(this[1] + 12 * (char)a2);
  v4 = *((_BYTE *)v3 + 2);
  if ( (v2 & 1) == 0 )
  {
    dword_10693990 = v2 | 1;
    dword_1069398C = 0x1FFFFFF;
  }
  if ( v4 == -1 )
    return BYTE1(dword_1069398C) == a2;
  else
    return *(_BYTE *)(this[1] + 12 * v4 + 1) == a2;
}
