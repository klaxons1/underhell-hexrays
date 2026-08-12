char *__thiscall sub_1044A700(char *this, const char *Src)
{
  __int16 v4; // [esp+Ah] [ebp-2h] BYREF

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  this[24] = 0;
  *((_WORD *)this + 22) = -1;
  CThreadSpinRWLock::LockForWrite((CThreadSpinRWLock *)&unk_10701950);
  sub_1042F910(dword_10701918, &v4, Src);
  CThreadSpinRWLock::UnlockWrite((CThreadSpinRWLock *)&unk_10701950);
  *((_WORD *)this + 22) = v4;
  this[47] &= 0xFCu;
  this[46] = 0;
  sub_10433240((UUID *)(this + 28));
  return this;
}
