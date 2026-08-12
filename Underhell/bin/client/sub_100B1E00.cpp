void sub_100B1E00()
{
  int v0; // esi
  int v1; // eax
  _BYTE v2[1024]; // [esp+4h] [ebp-400h] BYREF

  v0 = sub_100B4090("CHudHistoryResource");
  if ( v0 )
  {
    sub_1022C220(v2, 1024, 0, 0);
    v1 = sub_100B66A0(v2);
    if ( v1 )
      sub_100B1A50(v0, 3, 1, 0, 0, v1);
  }
}
