int __thiscall sub_1041E190(int *this)
{
  int v2; // eax
  int v3; // esi
  int v5; // [esp-8h] [ebp-14h]
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = sub_10184390(156);
  if ( v2 )
    v3 = sub_10420DB0(v2);
  else
    v3 = 0;
  v5 = this[14];
  v6 = v3;
  sub_1041DA00(this + 11, v5, &v6);
  return v3;
}
