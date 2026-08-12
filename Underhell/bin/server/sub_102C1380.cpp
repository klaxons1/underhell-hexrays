bool __thiscall sub_102C1380(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_106DE020;
  if ( (dword_106DE020 & 1) == 0 )
  {
    v2 = dword_106DE020 | 1;
    dword_106DE020 |= 1u;
    dword_106DE010 = -1;
    dword_106DE014 = -1;
    dword_106DE018 = -1;
    dword_106DE01C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106DE010;
  else
    v3 = (int *)(this[1] + 40 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_106DE020 = v2 | 1;
    dword_106DE010 = -1;
    dword_106DE014 = -1;
    dword_106DE018 = -1;
    dword_106DE01C = 1;
  }
  if ( v4 == -1 )
    return dword_106DE010 == a2;
  else
    return *(_DWORD *)(this[1] + 40 * v4) == a2;
}
