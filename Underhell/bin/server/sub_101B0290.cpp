void __thiscall sub_101B0290(char *this, _DWORD *a2)
{
  char *v2; // esi
  int v3; // edi
  const char *v4; // eax
  int v5; // eax

  v2 = this + 36;
  v3 = 2;
  do
  {
    if ( *((float *)v2 - 1) > (double)*(float *)v2 )
    {
      v4 = sub_100D6390(a2);
      Warning("Constraint reversal sounds for %s are out of order!", v4);
      v5 = *((_DWORD *)v2 + 9);
      *(float *)v2 = *((float *)v2 - 1);
      *((_DWORD *)v2 + 10) = v5;
    }
    v2 += 4;
    --v3;
  }
  while ( v3 );
}
