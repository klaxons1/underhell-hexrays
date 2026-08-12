char __thiscall sub_10149400(_BYTE *this)
{
  int *v2; // eax

  if ( !this[28] )
    return 1;
  v2 = (int *)sub_100DDA40(8);
  if ( v2 )
  {
    v2[1] = (int)this;
    sub_1001AC40(&dword_1043C868, v2);
  }
  else
  {
    sub_1001AC40(&dword_1043C868, 0);
  }
  return 0;
}
