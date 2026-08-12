void __thiscall sub_102F3C20(unsigned int *this, int *a2, int *a3, float *a4)
{
  char *v5; // eax

  sub_100CDBD0(this, *(float *)&a2, a3, a4);
  if ( a2 )
  {
    v5 = (char *)dword_106E2788;
    if ( a2[23] == dword_106E2788 )
      goto LABEL_6;
    if ( !dword_106E2788 )
      v5 = (char *)String;
    if ( sub_100D6240(a2, v5) )
LABEL_6:
      sub_10246D70(a2);
  }
  this[1458] = 0;
}
