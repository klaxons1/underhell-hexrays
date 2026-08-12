char __thiscall sub_102520B0(_DWORD *this, int *a2, _DWORD *a3)
{
  int v3; // eax
  int v5; // eax
  int v6; // ecx

  v3 = this[78];
  if ( v3 == -1 )
    return 0;
  *a2 = v3;
  v5 = this[79];
  *a3 = v5;
  v6 = *a2;
  if ( v5 < *a2 )
  {
    *a2 = v5;
    *a3 = v6;
  }
  return 1;
}
