char __thiscall sub_1015D6C0(int this, int *a2, int a3)
{
  int v4; // eax
  char result; // al

  if ( this )
    v4 = this + 1192;
  else
    v4 = 0;
  result = sub_100F0010(a2, this + 1196, v4);
  if ( result )
  {
    *(_DWORD *)(this + 1472) = dword_1043DF24;
    *(_DWORD *)(this + 1572) = a2;
    *(float *)(this + 1476) = 0.015625;
    *(float *)(this + 1480) = 0.0;
  }
  return result;
}
