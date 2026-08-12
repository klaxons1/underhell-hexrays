BOOL __cdecl sub_104333C0(_BYTE *a1, UUID *Uuid)
{
  int v2; // esi
  void *v3; // esp
  char v5[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( (a1[21] & 1) != 0 )
  {
    v2 = sub_1042D7E0((int)a1);
    v3 = alloca(v2);
    sub_1042E170((int)a1, v5, v2);
    sub_10433310(Uuid, v5, v2);
  }
  else
  {
    sub_1042D670(a1, Uuid, 0x10u);
  }
  return a1[20] == 0;
}
