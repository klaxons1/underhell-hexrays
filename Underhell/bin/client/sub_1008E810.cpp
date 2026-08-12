void __thiscall sub_1008E810(_DWORD *this, char a2)
{
  char *v3; // eax

  if ( (a2 & 0x8C) != 0 && !this[9] )
  {
    v3 = (char *)CThreadLocalBase::Get((CThreadLocalBase *)(this + 10));
    CThreadLocalBase::Set((CThreadLocalBase *)(this + 10), v3 - 1);
    if ( !CThreadLocalBase::Get((CThreadLocalBase *)(this + 10)) )
      CThreadSpinRWLock::UnlockRead((CThreadSpinRWLock *)(this + 5));
  }
}
