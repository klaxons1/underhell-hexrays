int __thiscall sub_10072090(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10412B58 & 1) == 0 )
  {
    dword_10412B58 |= 1u;
    dword_10412B48 = -1;
    dword_10412B4C = -1;
    dword_10412B50 = -1;
    dword_10412B54 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10412B48;
  else
    v3 = (int *)(this[1] + 24 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_10071460(this, a2);
    if ( sub_10071520(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10412B58 & 1) == 0 )
        {
          dword_10412B58 |= 1u;
          dword_10412B48 = -1;
          dword_10412B4C = -1;
          dword_10412B50 = -1;
          dword_10412B54 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 24 * v7 + 8);
      }
      while ( sub_10071520(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_100714C0(this, a2);
    v5 = dword_10412B58;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10412B58 = v5;
        dword_10412B48 = -1;
        dword_10412B4C = -1;
        dword_10412B50 = -1;
        dword_10412B54 = 1;
      }
      v6 = result == -1 ? &dword_10412B48 : (int *)(this[1] + 24 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10412B58 = v5;
        dword_10412B48 = -1;
        dword_10412B4C = -1;
        dword_10412B50 = -1;
        dword_10412B54 = 1;
      }
      if ( result == -1 )
        result = dword_10412B48;
      else
        result = *(_DWORD *)(this[1] + 24 * result);
    }
  }
  return result;
}
