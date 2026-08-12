unsigned __int8 __thiscall sub_100765B0(_DWORD *this, unsigned __int8 a2)
{
  int *v3; // eax
  unsigned __int8 result; // al
  int v5; // edx
  int *v6; // ecx
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // [esp+10h] [ebp+8h]

  if ( (dword_106931E0 & 1) == 0 )
  {
    dword_106931E0 |= 1u;
    dword_106931DC = 0x1FFFFFF;
  }
  if ( a2 == 0xFF )
    v3 = &dword_106931DC;
  else
    v3 = (int *)(this[1] + 12 * a2);
  if ( *((_BYTE *)v3 + 1) == 0xFF )
  {
    v7 = sub_10075890(this, a2);
    if ( sub_100759B0(this, a2) )
    {
      do
      {
        v8 = v7;
        if ( v7 == 0xFF )
          break;
        if ( (dword_106931E0 & 1) == 0 )
        {
          dword_106931E0 |= 1u;
          dword_106931DC = 0x1FFFFFF;
        }
        v7 = *(_BYTE *)(this[1] + 12 * v7 + 2);
      }
      while ( sub_100759B0(this, v8) );
    }
    return v7;
  }
  else
  {
    result = sub_10075950(this, a2);
    v5 = dword_106931E0;
    while ( 1 )
    {
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106931E0 = v5;
        dword_106931DC = 0x1FFFFFF;
      }
      v6 = result == 0xFF ? &dword_106931DC : (int *)(this[1] + 12 * result);
      if ( *(_BYTE *)v6 == 0xFF )
        break;
      if ( (v5 & 1) == 0 )
      {
        v5 |= 1u;
        dword_106931E0 = v5;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( result == 0xFF )
        result = dword_106931DC;
      else
        result = *(_BYTE *)(this[1] + 12 * result);
    }
  }
  return result;
}
