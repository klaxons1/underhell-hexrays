BOOL __cdecl sub_102331A0(_BYTE *a1, UUID *Uuid)
{
  int v2; // esi
  void *v3; // esp
  char v5[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( (a1[21] & 1) != 0 )
  {
    v2 = sub_1022E940((int)a1);
    v3 = alloca(v2);
    sub_1022F000((int)a1, v5, v2);
    sub_102330C0(Uuid, v5, v2);
  }
  else
  {
    sub_1022E7D0(a1, Uuid, 0x10u);
  }
  return a1[20] == 0;
}
