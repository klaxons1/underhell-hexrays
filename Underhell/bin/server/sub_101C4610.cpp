int __thiscall sub_101C4610(int this, int a2)
{
  _DWORD *v3; // eax

  v3 = sub_101C3520((_DWORD *)this, a2);
  if ( v3 )
  {
    v3[144] = dword_106BA510;
    sub_101C4570(*(int **)(this + 4), (int)v3);
  }
  return 0;
}
