int __cdecl sub_101AB690(char a1)
{
  int v1; // edi
  int v2; // esi
  void *v3; // eax
  int result; // eax
  int v5[2]; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  sub_10427610(a1);
  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_101AB450(v5);
  v1 = v7;
  if ( v7 > 0 )
  {
    v2 = v5[0];
    do
    {
      v3 = (void *)sub_10430F10(v2);
      sub_10428E00(v3, 0, 0);
      v2 += 16;
      --v1;
    }
    while ( v1 );
  }
  sub_10427600(off_10689BA4);
  result = sub_101AB5D0(v5);
  if ( v6 >= 0 )
  {
    result = v5[0];
    if ( v5[0] )
      return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v5[0]);
  }
  return result;
}
