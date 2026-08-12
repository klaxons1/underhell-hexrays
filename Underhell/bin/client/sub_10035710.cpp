int __cdecl sub_10035710(int a1, int a2)
{
  int v2; // eax
  int result; // eax
  int i; // [esp+8h] [ebp-10h]
  int v5; // [esp+10h] [ebp-8h]

  v5 = *(_DWORD *)(a1 + 4);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 8) + 36))(a2 + 8);
  for ( i = v5 + sub_10035390(off_103DC81C, *((_DWORD *)off_103DC81C + 6), v2);
        i < *((_DWORD *)off_103DC81C + 6) - 127;
        i += 256 )
  {
    ;
  }
  while ( i > *((_DWORD *)off_103DC81C + 6) + 127 )
    i -= 256;
  result = a2;
  *(float *)(a2 + 104) = (double)i * *((float *)off_103DC81C + 7);
  return result;
}
