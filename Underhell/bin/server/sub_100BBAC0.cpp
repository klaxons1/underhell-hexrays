int __thiscall sub_100BBAC0(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_106956C8 & 1) == 0 )
  {
    dword_106956C8 |= 1u;
    dword_106956B8 = -1;
    dword_106956BC = -1;
    dword_106956C0 = -1;
    dword_106956C4 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106956B8;
  else
    v3 = (int *)(this[1] + 24 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_100BB240(this, a2);
    if ( sub_100BB490(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_106956C8 & 1) == 0 )
        {
          dword_106956C8 |= 1u;
          dword_106956B8 = -1;
          dword_106956BC = -1;
          dword_106956C0 = -1;
          dword_106956C4 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 24 * v7 + 8);
      }
      while ( sub_100BB490(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_100BB2A0(this, a2);
    v5 = dword_106956C8;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106956C8 = v5;
        dword_106956B8 = -1;
        dword_106956BC = -1;
        dword_106956C0 = -1;
        dword_106956C4 = 1;
      }
      v6 = result == -1 ? &dword_106956B8 : (int *)(this[1] + 24 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106956C8 = v5;
        dword_106956B8 = -1;
        dword_106956BC = -1;
        dword_106956C0 = -1;
        dword_106956C4 = 1;
      }
      if ( result == -1 )
        result = dword_106956B8;
      else
        result = *(_DWORD *)(this[1] + 24 * result);
    }
  }
  return result;
}
