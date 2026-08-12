int __cdecl _mtinitlocknum(int a1)
{
  LPCRITICAL_SECTION *v1; // esi
  struct _RTL_CRITICAL_SECTION *v3; // edi
  int v4; // [esp+10h] [ebp-1Ch]

  v4 = 1;
  if ( !dword_103E12D8 )
  {
    _FF_MSGBANNER();
    _NMSG_WRITE(30);
    __crtExitProcess(0xFFu);
  }
  v1 = &lpCriticalSection + 2 * a1;
  if ( *v1 )
    return 1;
  v3 = (struct _RTL_CRITICAL_SECTION *)sub_100DDA40(24);
  if ( v3 )
  {
    _lock(10);
    if ( *v1 )
    {
      sub_10034930((int)v3);
    }
    else if ( InitializeCriticalSectionAndSpinCount(v3, 0xFA0u) )
    {
      *v1 = v3;
    }
    else
    {
      sub_10034930((int)v3);
      *_errno() = 12;
      v4 = 0;
    }
    _unlock(10);
    return v4;
  }
  else
  {
    *_errno() = 12;
    return 0;
  }
}
