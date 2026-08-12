int __thiscall sub_102C26C0(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // [esp-4h] [ebp-10h]

  if ( (dword_106DE034 & 1) == 0 )
  {
    dword_106DE034 |= 1u;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106DE024;
  else
    v3 = (int *)(this[1] + 48 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_102C0710(this, a2);
    if ( sub_102C07D0(this, a2) )
    {
      do
      {
        if ( v7 == -1 )
          break;
        if ( (dword_106DE034 & 1) == 0 )
        {
          dword_106DE034 |= 1u;
          dword_106DE024 = -1;
          dword_106DE028 = -1;
          dword_106DE02C = -1;
          dword_106DE030 = 1;
        }
        v8 = v7;
        v7 = *(_DWORD *)(this[1] + 48 * v7 + 8);
      }
      while ( sub_102C07D0(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_102C0770(this, a2);
    v5 = dword_106DE034;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106DE034 = v5;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      v6 = result == -1 ? &dword_106DE024 : (int *)(this[1] + 48 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106DE034 = v5;
        dword_106DE024 = -1;
        dword_106DE028 = -1;
        dword_106DE02C = -1;
        dword_106DE030 = 1;
      }
      if ( result == -1 )
        result = dword_106DE024;
      else
        result = *(_DWORD *)(this[1] + 48 * result);
    }
  }
  return result;
}
