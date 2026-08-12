int __thiscall sub_100FA830(int this, int a2)
{
  int result; // eax
  float *v3; // esi
  int *v4; // ecx
  float v5; // [esp+8h] [ebp+8h]

  result = *(_DWORD *)(this + 936);
  v3 = (float *)(this + 936);
  v5 = (float)a2;
  if ( result != LODWORD(v5) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v3 = v5;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        result = sub_100194B0(v4, 936);
      *v3 = v5;
    }
  }
  return result;
}
