int __cdecl sub_100B3CB0(_DWORD *a1)
{
  int v2; // [esp-4h] [ebp-4h]

  if ( *a1 != 2 )
    return Msg("Usage:\n   testhudanim <anim name>\n");
  v2 = a1[259];
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
  return sub_10248C80(v2);
}
