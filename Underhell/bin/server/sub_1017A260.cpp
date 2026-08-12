void __thiscall sub_1017A260(_BYTE *this, int a2)
{
  char *v2; // eax

  if ( this[4] && (this[8] & 1) != 0 )
  {
    v2 = (char *)*((_DWORD *)this - 147);
    if ( *(char **)(a2 + 260) == v2 )
      goto LABEL_7;
    if ( !v2 )
      v2 = (char *)String;
    if ( sub_100D6190((_DWORD *)a2, v2) )
LABEL_7:
      sub_1001E350((float *)a2, 3.4028235e38);
  }
}
