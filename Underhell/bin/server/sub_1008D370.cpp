int __thiscall sub_1008D370(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx

  v2 = a2 + this[25];
  v3 = this[21];
  if ( v2 < v3 )
    return *(_DWORD *)(this[18] + 4 * v2);
  else
    return *(_DWORD *)(this[18] + 4 * (v2 - v3));
}
