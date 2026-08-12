int __thiscall sub_100A5E10(void *this, const char *a2)
{
  int v3; // eax
  int v4; // esi
  int v6[7]; // [esp+Ch] [ebp-20h] BYREF
  int v7; // [esp+28h] [ebp-4h] BYREF

  v7 = 0;
  v3 = sub_1025F7A0(a2, &v7);
  v4 = v3;
  if ( v7 <= 0 || !v3 )
    return DevMsg(1, "CResponseSystem:  failed to load %s\n", a2);
  sub_10430D50(v6);
  sub_100A5B80(this, a2, v4, (int)v6);
  sub_1025F7F0(v4);
  return sub_10430DA0(v6);
}
