bool __thiscall sub_10002520(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10690170;
  if ( (dword_10690170 & 1) == 0 )
  {
    v2 = dword_10690170 | 1;
    dword_10690170 |= 1u;
    dword_10690160 = -1;
    dword_10690164 = -1;
    dword_10690168 = -1;
    dword_1069016C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10690160;
  else
    v3 = (int *)(this[1] + 40 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10690170 = v2 | 1;
    dword_10690160 = -1;
    dword_10690164 = -1;
    dword_10690168 = -1;
    dword_1069016C = 1;
  }
  if ( v4 == -1 )
    return dword_10690160 == a2;
  else
    return *(_DWORD *)(this[1] + 40 * v4) == a2;
}
