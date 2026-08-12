void sub_1008FDA0()
{
  char *v0; // eax

  sub_1008F7D0(dword_1042CA34, 140);
  if ( !dword_1042CA58 )
  {
    v0 = (char *)CThreadLocalBase::Get((CThreadLocalBase *)&unk_1042CA5C);
    CThreadLocalBase::Set((CThreadLocalBase *)&unk_1042CA5C, v0 - 1);
    if ( !CThreadLocalBase::Get((CThreadLocalBase *)&unk_1042CA5C) )
      CThreadSpinRWLock::UnlockRead((CThreadSpinRWLock *)&unk_1042CA48);
  }
}
