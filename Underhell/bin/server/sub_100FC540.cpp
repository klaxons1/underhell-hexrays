int __thiscall sub_100FC540(int this, int a2, int a3, int a4, int a5)
{
  double v5; // st7
  float *v6; // esi
  int result; // eax
  int *v8; // ecx
  float v9; // [esp+4h] [ebp-4h]

  v5 = -*(float *)(this + 108);
  v6 = (float *)(this + 816);
  *(float *)(this + 108) = v5;
  result = *(_DWORD *)(this + 816);
  v9 = v5;
  if ( result != LODWORD(v9) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v6 = v9;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        result = sub_100194B0(v8, 816);
      *v6 = v9;
    }
  }
  return result;
}
