double __thiscall sub_1041CDF0(int this)
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
    v5 = sub_10418510(v4);
    if ( sub_10418530(v4) )
      v5 = sub_10418520(v4);
    if ( sub_10418360((unsigned __int8 *)v4) == 5 )
      result = *(float *)(this + 148) + v5;
    else
      result = v5;
    if ( v6 >= result )
      result = v6;
    else
      v6 = result;
  }
  return result;
}
