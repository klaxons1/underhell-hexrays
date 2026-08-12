int __thiscall sub_101FDF00(void *this)
{
  int v2; // eax
  int result; // eax

  v2 = CommandLine_Tier0();
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 40))(v2, "-makedevshots");
  if ( !result )
    return sub_101700F0((int)this);
  return result;
}
