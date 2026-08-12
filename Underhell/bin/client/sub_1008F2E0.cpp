int __thiscall sub_1008F2E0(int *this, int *a2)
{
  int *v3; // eax

  v3 = sub_1001ACB0(this + 2);
  if ( !v3 )
  {
    v3 = (int *)sub_100DDA40(8);
    if ( v3 )
      v3[1] = -1;
    else
      v3 = 0;
  }
  v3[1] = *a2;
  return sub_1001AC40(this, v3);
}
