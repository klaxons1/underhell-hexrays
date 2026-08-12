int __thiscall sub_103F5C40(int this, float *a2, char a3)
{
  int v5; // edi
  int *v6; // ecx

  if ( a3 )
    return sub_103F51B0((_DWORD *)this, (int)a2, COERCE_FLOAT(1));
  v5 = *(_DWORD *)(this + 1200) + 1;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v6 = *(int **)(this + 24);
    if ( v6 )
      sub_100194B0(v6, 1200);
  }
  *(_DWORD *)(this + 1200) = v5;
  return sub_103F5900((int *)this, a2, 1);
}
