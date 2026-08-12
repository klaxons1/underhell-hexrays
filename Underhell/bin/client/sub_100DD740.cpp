CHAR *sub_100DD740()
{
  HANDLE ProcessHeap; // eax
  CHAR *v1; // esi
  char *v2; // edi
  char *v3; // eax
  _MEMORY_BASIC_INFORMATION Buffer; // [esp+0h] [ebp-1Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*g_pMemAlloc + 96))(g_pMemAlloc) )
    return 0;
  ProcessHeap = GetProcessHeap();
  v1 = (CHAR *)HeapAlloc(ProcessHeap, 0, 0x104u);
  VirtualQuery(&unk_10433FB8, &Buffer, 0x1Cu);
  GetModuleFileNameA((HMODULE)Buffer.AllocationBase, v1, 0x104u);
  v2 = strrchr(v1, 46);
  if ( v2 )
  {
    v3 = strrchr(v1, 92);
    if ( v3 )
    {
      v1 = v3 + 1;
      *v2 = 0;
    }
  }
  return v1;
}
