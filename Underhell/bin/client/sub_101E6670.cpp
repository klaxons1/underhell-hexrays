double __thiscall sub_101E6670(int this)
{
  double result; // st7
  int i; // edi
  float *v4; // esi
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  result = 0.0;
  v6 = 0.0;
  for ( i = 0; i < *(_DWORD *)(this + 16); ++i )
  {
    v4 = *(float **)(*(_DWORD *)(this + 4) + 4 * i);
    v5 = sub_10103A90(v4);
    result = v5;
    if ( sub_101E1B20((unsigned __int8 *)v4) == 5 )
      result = result - *(float *)(this + 148);
    if ( v6 <= result )
      result = v6;
    else
      v6 = result;
  }
  return result;
}
