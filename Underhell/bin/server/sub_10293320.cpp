bool __thiscall sub_10293320(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_106DAFFC;
  if ( (dword_106DAFFC & 1) == 0 )
  {
    v2 = dword_106DAFFC | 1;
    dword_106DAFFC |= 1u;
    dword_106DAFEC = -1;
    dword_106DAFF0 = -1;
    dword_106DAFF4 = -1;
    dword_106DAFF8 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106DAFEC;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_106DAFFC = v2 | 1;
    dword_106DAFEC = -1;
    dword_106DAFF0 = -1;
    dword_106DAFF4 = -1;
    dword_106DAFF8 = 1;
  }
  if ( v4 == -1 )
    return dword_106DAFF0 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4 + 4) == a2;
}
