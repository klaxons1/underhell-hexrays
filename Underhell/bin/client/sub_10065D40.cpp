char __stdcall sub_10065D40(int a1, char *Destination, size_t Count)
{
  char *v3; // eax

  v3 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131B4 + 36))(dword_104131B4, a1);
  if ( v3 )
  {
    sub_102282F0(Destination, v3, Count);
    return 1;
  }
  else
  {
    sub_102282F0(Destination, (char *)Locale, Count);
    return 0;
  }
}
