_WORD *__thiscall sub_1044AA40(_WORD *this, const char *Src)
{
  __int16 v4; // [esp+6h] [ebp-2h] BYREF

  this[2] = -1;
  CThreadSpinRWLock::LockForWrite((CThreadSpinRWLock *)&unk_107019B0);
  sub_1042F910(dword_10701978, &v4, Src);
  CThreadSpinRWLock::UnlockWrite((CThreadSpinRWLock *)&unk_107019B0);
  this[2] = v4;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}
