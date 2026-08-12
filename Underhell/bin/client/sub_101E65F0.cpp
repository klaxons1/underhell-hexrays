double __thiscall sub_101E65F0(int this)
{
  double result; // st7
  int v3; // ebx
  int i; // esi
  float *v5; // edi
  float v6; // [esp+4h] [ebp-4h]

  result = 0.0;
  if ( 0.0 != *(float *)(this + 532) )
    return *(float *)(this + 532);
  v6 = 0.0;
  v3 = *(_DWORD *)(this + 16);
  for ( i = 0; i < v3; ++i )
  {
    v5 = *(float **)(*(_DWORD *)(this + 4) + 4 * i);
    if ( sub_101E1CC0(v5) )
      result = sub_10103A80(v5);
    else
      result = sub_10103A90(v5);
    if ( v6 >= result )
      result = v6;
    else
      v6 = result;
  }
  return result;
}
