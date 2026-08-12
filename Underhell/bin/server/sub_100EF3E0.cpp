int __thiscall sub_100EF3E0(int this, int a2)
{
  int v3; // esi
  int *v5; // ecx

  v3 = *(_DWORD *)(this + 908) + 1;
  if ( !sub_100BE590(this, v3) )
    v3 = 0;
  sub_100C3330(this, v3);
  if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = 0.0;
      return 0;
    }
    v5 = *(int **)(this + 24);
    if ( v5 )
      sub_100194B0(v5, 904);
    *(float *)(this + 904) = 0.0;
  }
  return 0;
}
