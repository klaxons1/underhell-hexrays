char *__thiscall sub_100E3A20(_DWORD *this, int a2)
{
  float *v3; // ecx
  float v4; // eax

  v3 = (float *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*(_DWORD *)v3 )
      return sub_100E2FF0(this, COERCE_FLOAT(String));
  }
  else
  {
    v4 = COERCE_FLOAT(sub_1010D460(v3));
  }
  return sub_100E2FF0(this, v4);
}
