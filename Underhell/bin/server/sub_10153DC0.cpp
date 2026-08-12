char __stdcall sub_10153DC0(int a1, char *Destination, size_t Count, _DWORD *a4)
{
  char result; // al
  char *v5; // eax

  result = sub_102941D0(a1);
  if ( result )
  {
    v5 = (char *)sub_102940F0(a1);
    sub_104299C0(Destination, v5, Count);
    *a4 = sub_102940B0(a1);
    return 1;
  }
  return result;
}
