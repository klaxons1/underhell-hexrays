int __thiscall sub_10050AF0(int this, int a2, int a3, int a4)
{
  unsigned __int16 v4; // dx
  int v5; // ecx
  char *v6; // eax

  v4 = *(_WORD *)(this + 1260);
  if ( v4 == 0xFFFF )
    return 0xFFFF;
  v5 = *(_DWORD *)(this + 1248);
  while ( 1 )
  {
    v6 = (char *)(v5 + 10 * v4);
    if ( v6[2] == a4 && *v6 == a2 && v6[1] == a3 )
      break;
    v4 = *((_WORD *)v6 + 4);
    if ( v4 == 0xFFFF )
      return 0xFFFF;
  }
  return v4;
}
