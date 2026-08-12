int __thiscall sub_100BCE80(_DWORD *this, int *a2)
{
  int v2; // esi

  *(_DWORD *)(a2[2] + 4) = a2[1];
  *(_DWORD *)(a2[1] + 8) = a2[2];
  v2 = *a2;
  --this[2];
  sub_10184660(a2);
  return v2;
}
