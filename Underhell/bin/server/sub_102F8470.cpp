int __thiscall sub_102F8470(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // esi
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax

  v4 = sub_100CF460(this);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = (char *)dword_106E2788;
    if ( v5[23] == dword_106E2788 )
      goto LABEL_6;
    if ( !dword_106E2788 )
      v6 = (char *)String;
    if ( sub_100D6240(v5, v6) )
    {
LABEL_6:
      v4 = 1;
    }
    else
    {
      v7 = (char *)dword_106E2784;
      if ( v5[23] == dword_106E2784 )
        goto LABEL_11;
      if ( !dword_106E2784 )
        v7 = (char *)String;
      if ( sub_100D6240(v5, v7) )
      {
LABEL_11:
        v4 = 2;
      }
      else
      {
        v8 = (char *)dword_106E2780;
        if ( v5[23] == dword_106E2780 )
          goto LABEL_16;
        if ( !dword_106E2780 )
          v8 = (char *)String;
        if ( sub_100D6240(v5, v8) )
        {
LABEL_16:
          v4 = 3;
        }
        else
        {
          v9 = (char *)dword_106E277C;
          if ( v5[23] == dword_106E277C )
            goto LABEL_21;
          if ( !dword_106E277C )
            v9 = (char *)String;
          if ( sub_100D6240(v5, v9) )
LABEL_21:
            v4 = 4;
          else
            v4 = 5;
        }
      }
    }
  }
  this[1458] = v4;
  return sub_10302780(a2, a3);
}
