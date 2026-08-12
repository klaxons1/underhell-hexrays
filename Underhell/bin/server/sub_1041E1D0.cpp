int __thiscall sub_1041E1D0(int *this)
{
  int v2; // eax
  int v3; // esi
  int v5; // [esp-8h] [ebp-14h]
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = sub_10184390(280);
  if ( v2 )
    v3 = sub_1041EF50(v2);
  else
    v3 = 0;
  v5 = this[9];
  v6 = v3;
  sub_1041DA00(this + 6, v5, &v6);
  return v3;
}
