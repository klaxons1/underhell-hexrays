const char *__thiscall sub_1044AAA0(_WORD *this)
{
  unsigned __int16 v1; // si
  const char *v2; // esi

  v1 = this[2];
  CThreadSpinRWLock::LockForRead((CThreadSpinRWLock *)&unk_107019B0);
  v2 = sub_1042EE50(dword_10701978, v1);
  CThreadSpinRWLock::UnlockRead((CThreadSpinRWLock *)&unk_107019B0);
  return v2;
}
