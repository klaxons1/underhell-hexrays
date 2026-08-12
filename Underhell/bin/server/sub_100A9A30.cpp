void __thiscall sub_100A9A30(int this, int a2)
{
  char *v3; // eax

  if ( (!*(_BYTE *)(this + 76) || !*(_BYTE *)(this + 77)) && sub_100D7680(a2) )
  {
    v3 = *(char **)(this + 104);
    if ( *(char **)(a2 + 260) == v3 )
      goto LABEL_14;
    if ( !v3 )
      v3 = (char *)String;
    if ( (unsigned __int8)sub_100D6190(v3) )
    {
LABEL_14:
      if ( !sub_100A8EB0((_DWORD *)(this - 800), a2) )
      {
        sub_100A97D0(this - 800, a2);
        if ( *(_BYTE *)(this + 76) == 1 && !*(_BYTE *)(this + 77) )
          sub_100A9890(this - 800);
      }
    }
  }
}
