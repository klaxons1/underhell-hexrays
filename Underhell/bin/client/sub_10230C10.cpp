const char *__thiscall sub_10230C10(_DWORD *this, unsigned __int16 a2)
{
  CThreadSpinRWLock *v3; // edi
  int v5; // esi

  v3 = (CThreadSpinRWLock *)(this + 14);
  CThreadSpinRWLock::LockForRead((CThreadSpinRWLock *)(this + 14));
  if ( a2 == 0xFFFF )
  {
    CThreadSpinRWLock::UnlockRead(v3);
    return Locale;
  }
  else
  {
    v5 = *(_DWORD *)(this[9] + 4 * *(unsigned __int16 *)(this[1] + 12 * a2 + 8))
       + *(unsigned __int16 *)(this[1] + 12 * a2 + 10)
       + 8;
    CThreadSpinRWLock::UnlockRead(v3);
    return (const char *)v5;
  }
}
