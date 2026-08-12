const char *__thiscall sub_102AA3C0(_WORD *this)
{
  unsigned __int16 v1; // si
  const char *v2; // esi

  v1 = this[22];
  CThreadSpinRWLock::LockForRead((CThreadSpinRWLock *)&unk_10482940);
  v2 = sub_10230460(dword_10482908, v1);
  CThreadSpinRWLock::UnlockRead((CThreadSpinRWLock *)&unk_10482940);
  return v2;
}
