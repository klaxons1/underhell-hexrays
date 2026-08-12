const char *__thiscall sub_1044A120(_WORD *this)
{
  unsigned __int16 v1; // si
  const char *v2; // esi

  v1 = this[22];
  CThreadSpinRWLock::LockForRead((CThreadSpinRWLock *)&unk_10701950);
  v2 = sub_1042EE50(dword_10701918, v1);
  CThreadSpinRWLock::UnlockRead((CThreadSpinRWLock *)&unk_10701950);
  return v2;
}
