unsigned int __fastcall sub_101FB4B0(unsigned int a1, int a2, char a3)
{
  sub_101FB2F0((_DWORD *)a1);
  if ( (a3 & 1) != 0 && a1 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((a1 & 0xFFFFFFFC) - 4));
  return a1;
}
