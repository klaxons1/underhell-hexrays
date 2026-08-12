char __stdcall sub_10224210(int a1, char *Destination, size_t Count)
{
  char *v3; // eax

  v3 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3210 + 36))(dword_106B3210, a1);
  if ( v3 )
  {
    sub_104299C0(Destination, v3, Count);
    return 1;
  }
  else
  {
    sub_104299C0(Destination, (char *)String, Count);
    return 0;
  }
}
