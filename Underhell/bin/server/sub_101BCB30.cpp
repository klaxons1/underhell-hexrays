int __thiscall sub_101BCB30(int *this, int a2)
{
  if ( a2 < 0 || a2 >= *this )
    return 0;
  else
    return this[1] + 8 * a2;
}
