int __thiscall sub_1026D5D0(int this)
{
  int *v2; // eax
  int *v4; // [esp+4h] [ebp-4h] BYREF

  v4 = (int *)(*(_DWORD *)(this + 256) - 1);
  sub_100C2010((int *)(this + 308), *(_DWORD *)(this + 320), &v4);
  v2 = (int *)sub_100DDA40(208);
  if ( v2 )
    v4 = sub_1026B180(v2, (int (__thiscall ***)(_DWORD))this, "MenuSeparator");
  else
    v4 = 0;
  return sub_10258C50((int *)(this + 328), *(_DWORD *)(this + 340), &v4);
}
