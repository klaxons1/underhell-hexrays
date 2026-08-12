_WORD *__thiscall sub_1042FB30(_WORD *this, const char *Src)
{
  CThreadSpinRWLock *v3; // edi
  int *v4; // ebx

  sub_1042FA90();
  v3 = (CThreadSpinRWLock *)(dword_106FF8C8 + 56);
  v4 = (int *)dword_106FF8C8;
  CThreadSpinRWLock::LockForWrite((CThreadSpinRWLock *)(dword_106FF8C8 + 56));
  sub_1042F910(v4, (__int16 *)&Src + 1, Src);
  CThreadSpinRWLock::UnlockWrite(v3);
  *this = HIWORD(Src);
  return this;
}
