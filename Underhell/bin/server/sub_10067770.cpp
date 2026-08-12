int __thiscall sub_10067770(_DWORD *this)
{
  int result; // eax
  __int16 i; // si
  int v4; // ecx
  const char *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // [esp-4h] [ebp-18h]
  double v9; // [esp+0h] [ebp-14h]
  const char *v10; // [esp+4h] [ebp-10h]

  result = sub_10066670((int)this);
  for ( i = result; (_WORD)result != 0xFFFF; i = result )
  {
    v4 = this[1] + 80 * i + 8;
    v5 = (const char *)(this[1] + 80 * i + 10);
    if ( 1.0 == *(float *)(this[1] + 80 * i + 76) )
    {
      if ( this[1] + 80 * i == -10 )
        v5 = String;
      v10 = v5;
      v7 = (const char *)sub_1042FB80(v4);
      DevMsg("  %20s = '%s'\n", v7, v10);
    }
    else
    {
      if ( this[1] + 80 * i == -10 )
        v5 = String;
      v9 = *(float *)(this[1] + 80 * i + 76);
      v8 = v5;
      v6 = (const char *)sub_1042FB80(v4);
      DevMsg("  %20s = '%s' (weight %f)\n", v6, v8, v9);
    }
    result = sub_10066740(this, i);
  }
  return result;
}
