int __thiscall sub_102F4490(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int result; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax

  v2 = a2;
  if ( a2 || (result = sub_100CF460(this), (v2 = (_DWORD *)result) != 0) )
  {
    v4 = (char *)dword_106E2788;
    if ( v2[23] == dword_106E2788 )
      return 1;
    if ( !dword_106E2788 )
      v4 = (char *)String;
    if ( sub_100D6240(v2, v4) )
    {
      return 1;
    }
    else
    {
      v5 = (char *)dword_106E2784;
      if ( v2[23] == dword_106E2784 )
        return 2;
      if ( !dword_106E2784 )
        v5 = (char *)String;
      if ( sub_100D6240(v2, v5) )
      {
        return 2;
      }
      else
      {
        v6 = (char *)dword_106E2780;
        if ( v2[23] == dword_106E2780 )
          return 3;
        if ( !dword_106E2780 )
          v6 = (char *)String;
        if ( sub_100D6240(v2, v6) )
        {
          return 3;
        }
        else
        {
          v7 = (char *)dword_106E277C;
          if ( v2[23] == dword_106E277C )
            return 4;
          if ( !dword_106E277C )
            v7 = (char *)String;
          if ( sub_100D6240(v2, v7) )
            return 4;
          else
            return 5;
        }
      }
    }
  }
  return result;
}
