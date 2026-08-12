_WORD *__thiscall sub_10231140(_WORD *this, const char *Src)
{
  CThreadSpinRWLock *v3; // edi
  int *v4; // ebx

  sub_102310A0();
  v3 = (CThreadSpinRWLock *)(dword_1047B804 + 56);
  v4 = (int *)dword_1047B804;
  CThreadSpinRWLock::LockForWrite((CThreadSpinRWLock *)(dword_1047B804 + 56));
  sub_10230F20(v4, (__int16 *)&Src + 1, Src);
  CThreadSpinRWLock::UnlockWrite(v3);
  *this = HIWORD(Src);
  return this;
}
