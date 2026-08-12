int __thiscall sub_102403C0(void *this, int a2, int a3)
{
  int v3; // esi
  int result; // eax
  int v6; // esi

  v3 = a3;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 72))(a3)
    || !*(_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 72))(v3) )
  {
    return Warning("Can't add Keybindings Context for unnamed panels\n");
  }
  result = sub_1023F0C0((int)this, a2);
  if ( result )
  {
    v6 = result + 8;
    result = sub_1027A4C0(&a3);
    if ( result == -1 )
      return sub_10258C50(*(_DWORD *)(v6 + 12), &a3);
  }
  return result;
}
