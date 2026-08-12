int __cdecl sub_10255190(_DWORD *a1)
{
  const char *v1; // edi
  const char *v2; // eax
  int v3; // eax
  int v5; // edi

  if ( dword_106C7618 == 2 )
  {
    v1 = (const char *)a1[23];
    if ( !v1 )
      v1 = String;
    v2 = sub_100D6390(a1);
    Msg("Trying %s (%s): ", v1, v2);
  }
  v3 = (*(int (__thiscall **)(_DWORD *))(*a1 + 144))(a1);
  if ( v3 >= 0 )
  {
    v5 = 0;
    if ( (v3 & 2) != 0 )
      v5 = 0x20000000;
    if ( a1[24] && !sub_100D62D0(a1) )
      v5 |= 0x10000000u;
    if ( dword_106C7618 == 2 && !v5 )
      Msg("IGNORED, no across_transition flag & no globalname\n");
    return v5;
  }
  else
  {
    if ( dword_106C7618 == 2 )
      Msg("IGNORED due to being marked \"Don't save\".\n");
    return 0;
  }
}
