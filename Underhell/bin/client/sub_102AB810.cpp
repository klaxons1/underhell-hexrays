const char *__thiscall sub_102AB810(_WORD *this)
{
  unsigned __int16 v1; // si
  const char *v2; // esi

  v1 = this[2];
  CThreadSpinRWLock::LockForRead((CThreadSpinRWLock *)&unk_104829E0);
  v2 = sub_10230460(dword_104829A8, v1);
  CThreadSpinRWLock::UnlockRead((CThreadSpinRWLock *)&unk_104829E0);
  return v2;
}
