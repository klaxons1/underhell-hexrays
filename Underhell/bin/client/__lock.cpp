void __cdecl _lock(int a1)
{
  LPCRITICAL_SECTION *v1; // esi

  v1 = &lpCriticalSection + 2 * a1;
  if ( !*v1 && !_mtinitlocknum(a1) )
    _amsg_exit(17);
  EnterCriticalSection(*v1);
}
