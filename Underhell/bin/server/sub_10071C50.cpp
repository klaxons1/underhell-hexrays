int __thiscall sub_10071C50(int *this, int a2)
{
  int v2; // eax
  int v5; // [esp+10h] [ebp-4h] BYREF

  v2 = -1;
  v5 = -1;
  if ( a2 )
    v2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v5 = v2;
  sub_1010C270(13, &v5);
  return sub_1010DA50(this[217], this[218], this[219], this[220], this[221], a2, (int)this, 0.0);
}
