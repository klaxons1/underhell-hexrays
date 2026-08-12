int __thiscall sub_101EE770(int this, int a2, float *a3, float a4, float a5, float a6)
{
  int *v7; // ecx
  int *v8; // ecx
  int result; // eax
  int *v10; // ecx

  sub_101E7BA0((unsigned int *)(this + 4268), a2);
  sub_101E7C30((float *)(this + 4272), a3);
  if ( *(_DWORD *)(this + 4284) != LODWORD(a4) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 4284);
    }
    *(float *)(this + 4284) = a4;
  }
  if ( *(_DWORD *)(this + 4288) != LODWORD(a5) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 4288);
    }
    *(float *)(this + 4288) = a5;
  }
  result = *(_DWORD *)(this + 4292);
  if ( result != LODWORD(a6) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 4292) = a6;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        result = sub_100194B0(v10, 4292);
      *(float *)(this + 4292) = a6;
    }
  }
  return result;
}
