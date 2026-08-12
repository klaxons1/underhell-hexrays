_WORD *__thiscall sub_102AB7B0(_WORD *this, const char *Src)
{
  __int16 v4; // [esp+6h] [ebp-2h] BYREF

  this[2] = -1;
  CThreadSpinRWLock::LockForWrite((CThreadSpinRWLock *)&unk_104829E0);
  sub_10230F20(dword_104829A8, &v4, Src);
  CThreadSpinRWLock::UnlockWrite((CThreadSpinRWLock *)&unk_104829E0);
  this[2] = v4;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}
