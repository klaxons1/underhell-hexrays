char __cdecl sub_10003250(const char *a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  const char *v6; // eax

  dword_105FD55C = a2;
  v2 = sub_10244B60(a1);
  if ( v2 >= 0 )
  {
    v3 = dword_10690148 + 8 * v2;
    if ( v3 )
      goto LABEL_8;
  }
  v4 = 0;
  if ( dword_10690154 <= 0 )
    goto LABEL_6;
  while ( *(_DWORD *)(dword_10690148 + 8 * v4) != a2 )
  {
    if ( ++v4 >= dword_10690154 )
      goto LABEL_6;
  }
  v3 = dword_10690148 + 8 * v4;
  if ( v3 )
  {
LABEL_8:
    v6 = (const char *)sub_10244C30(*(unsigned __int16 *)(v3 + 4));
    Warning("***\nShared activity collision! %s<->%s\n***\n", a1, v6);
    return 0;
  }
  else
  {
LABEL_6:
    sub_100031B0((int)a1, a2, 0);
    return 1;
  }
}
