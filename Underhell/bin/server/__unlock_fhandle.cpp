void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_10709BA0[a1 >> 5] + ((a1 & 0x1F) << 6) + 12));
}
