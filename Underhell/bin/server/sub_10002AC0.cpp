int __thiscall sub_10002AC0(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10690170 & 1) == 0 )
  {
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
  if ( v3[1] == -1 )
  {
    v7 = sub_10002410(this, a2);
    if ( sub_10002470(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10690170 & 1) == 0 )
        {
          dword_10690170 |= 1u;
          dword_10690160 = -1;
          dword_10690164 = -1;
          dword_10690168 = -1;
          dword_1069016C = 1;
        }
        v7 = *(_DWORD *)(this[1] + 40 * v7 + 8);
      }
      while ( sub_10002470(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_10002220(this, a2);
    v5 = dword_10690170;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10690170 = v5;
        dword_10690160 = -1;
        dword_10690164 = -1;
        dword_10690168 = -1;
        dword_1069016C = 1;
      }
      v6 = result == -1 ? &dword_10690160 : (int *)(this[1] + 40 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10690170 = v5;
        dword_10690160 = -1;
        dword_10690164 = -1;
        dword_10690168 = -1;
        dword_1069016C = 1;
      }
      if ( result == -1 )
        result = dword_10690160;
      else
        result = *(_DWORD *)(this[1] + 40 * result);
    }
  }
  return result;
}
