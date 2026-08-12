int __thiscall sub_1026D640(int this, int *a2)
{
  int *v3; // eax

  sub_100C2010((int *)(this + 308), *(_DWORD *)(this + 320), &a2);
  v3 = (int *)sub_100DDA40(208);
  if ( v3 )
    a2 = sub_1026B180(v3, (int (__thiscall ***)(_DWORD))this, "MenuSeparator");
  else
    a2 = 0;
  return sub_10258C50((int *)(this + 328), *(_DWORD *)(this + 340), &a2);
}
