int __cdecl sub_100E9490(char a1)
{
  int v1; // edi
  int v2; // esi
  void *v3; // eax
  int result; // eax
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  sub_101F8CE0(a1);
  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_100E9310(v5);
  v1 = v7;
  if ( v7 > 0 )
  {
    v2 = v5[0];
    do
    {
      v3 = (void *)sub_1022CF00(v2);
      sub_101FDD00(v3, 0, 0);
      v2 += 16;
      --v1;
    }
    while ( v1 );
  }
  sub_101F8CB0(off_103EE614);
  result = sub_100CEE70(v5);
  if ( v6 >= 0 )
  {
    result = v5[0];
    if ( v5[0] )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5[0]);
  }
  return result;
}
