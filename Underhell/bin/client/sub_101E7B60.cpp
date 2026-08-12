int __thiscall sub_101E7B60(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int v5; // [esp-8h] [ebp-14h]
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = sub_100DDA40(156);
  if ( v2 )
    v3 = sub_101EC870(v2);
  else
    v3 = 0;
  v5 = this[14];
  v6 = v3;
  sub_10258C50(v5, &v6);
  return v3;
}
