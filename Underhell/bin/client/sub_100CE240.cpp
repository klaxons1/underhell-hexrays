int __thiscall sub_100CE240(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  float *v5; // esi
  int result; // eax
  double ArgList; // [esp+0h] [ebp-24h]
  double v8; // [esp+8h] [ebp-1Ch]
  double v9; // [esp+10h] [ebp-14h]

  v3 = 0;
  if ( a3 > 0 )
  {
    v5 = (float *)(a2 + 4);
    do
    {
      v9 = v5[1];
      v8 = *v5;
      ArgList = *(v5 - 1);
      if ( a3 == 1 )
        result = sub_100CDF50(this, " vector (%f %f %f)\n", ArgList, v8, v9);
      else
        result = sub_100CDF50(this, "[%i] vector (%f %f %f)\n", v3, ArgList, v8, v9);
      ++v3;
      v5 += 3;
    }
    while ( v3 < a3 );
  }
  return result;
}
