int __thiscall sub_1012C370(_DWORD *this, int a2)
{
  int *v3; // eax
  int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  int v8; // ecx

  if ( (dword_10439114 & 1) == 0 )
  {
    dword_10439114 |= 1u;
    dword_10439104 = -1;
    dword_10439108 = -1;
    dword_1043910C = -1;
    dword_10439110 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10439104;
  else
    v3 = (int *)(this[1] + 24 * a2);
  if ( v3[1] == -1 )
  {
    v7 = sub_1012BAE0(this, a2);
    if ( sub_1012BBA0(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == -1 )
          break;
        if ( (dword_10439114 & 1) == 0 )
        {
          dword_10439114 |= 1u;
          dword_10439104 = -1;
          dword_10439108 = -1;
          dword_1043910C = -1;
          dword_10439110 = 1;
        }
        v7 = *(_DWORD *)(this[1] + 24 * v7 + 8);
      }
      while ( sub_1012BBA0(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_1012BB40(this, a2);
    v5 = dword_10439114;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10439114 = v5;
        dword_10439104 = -1;
        dword_10439108 = -1;
        dword_1043910C = -1;
        dword_10439110 = 1;
      }
      v6 = result == -1 ? &dword_10439104 : (int *)(this[1] + 24 * result);
      if ( *v6 == -1 )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_10439114 = v5;
        dword_10439104 = -1;
        dword_10439108 = -1;
        dword_1043910C = -1;
        dword_10439110 = 1;
      }
      if ( result == -1 )
        result = dword_10439104;
      else
        result = *(_DWORD *)(this[1] + 24 * result);
    }
  }
  return result;
}
