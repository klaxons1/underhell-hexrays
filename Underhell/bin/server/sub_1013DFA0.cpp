char __thiscall sub_1013DFA0(_DWORD *this, int a2, _DWORD *a3)
{
  char *v3; // eax

  v3 = (char *)this[213];
  if ( !v3 )
    v3 = (char *)String;
  if ( (char *)a3[23] == v3 )
    return 1;
  else
    return sub_100D6240(a3, v3);
}
