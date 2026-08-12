int __thiscall sub_10293AE0(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_106DAFFC & 1) == 0 )
  {
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
  if ( v3[1] == -1 )
  {
    v7 = sub_10293200(this, a2);
    if ( sub_10293320(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_106DAFFC & 1) == 0 )
        {
          dword_106DAFFC |= 1u;
          dword_106DAFEC = -1;
          dword_106DAFF0 = -1;
          dword_106DAFF4 = -1;
          dword_106DAFF8 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 24 * v7 + 8);
      }
      while ( sub_10293320(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_102932C0(this, a2);
    v5 = dword_106DAFFC;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106DAFFC = v5;
        dword_106DAFEC = -1;
        dword_106DAFF0 = -1;
        dword_106DAFF4 = -1;
        dword_106DAFF8 = 1;
      }
      v6 = result == -1 ? &dword_106DAFEC : (int *)(this[1] + 24 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106DAFFC = v5;
        dword_106DAFEC = -1;
        dword_106DAFF0 = -1;
        dword_106DAFF4 = -1;
        dword_106DAFF8 = 1;
      }
      if ( result == -1 )
        result = dword_106DAFEC;
      else
        result = *(_DWORD *)(this[1] + 24 * result);
    }
  }
  return result;
}
