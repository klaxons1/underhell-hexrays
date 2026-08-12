int __thiscall sub_10002410(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10400F90 & 1) == 0 )
  {
    dword_10400F90 |= 1u;
    dword_10400F80 = -1;
    dword_10400F84 = -1;
    dword_10400F88 = -1;
    dword_10400F8C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10400F80;
  else
    v3 = (int *)(this[1] + 40 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_10002300(this, a2);
    if ( sub_10002360(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10400F90 & 1) == 0 )
        {
          dword_10400F90 |= 1u;
          dword_10400F80 = -1;
          dword_10400F84 = -1;
          dword_10400F88 = -1;
          dword_10400F8C = 1;
        }
        v7 = *(_DWORD *)(this[1] + 40 * v7 + 8);
      }
      while ( sub_10002360(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_10002200(this, a2);
    v5 = dword_10400F90;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10400F90 = v5;
        dword_10400F80 = -1;
        dword_10400F84 = -1;
        dword_10400F88 = -1;
        dword_10400F8C = 1;
      }
      v6 = result == -1 ? &dword_10400F80 : (int *)(this[1] + 40 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10400F90 = v5;
        dword_10400F80 = -1;
        dword_10400F84 = -1;
        dword_10400F88 = -1;
        dword_10400F8C = 1;
      }
      if ( result == -1 )
        result = dword_10400F80;
      else
        result = *(_DWORD *)(this[1] + 40 * result);
    }
  }
  return result;
}
