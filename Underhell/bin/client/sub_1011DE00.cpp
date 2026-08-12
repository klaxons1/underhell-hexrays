void __cdecl sub_1011DE00(_DWORD *a1)
{
  CThreadMutex::Lock((CThreadMutex *)&unk_104376EC);
  *a1 = dword_1043771C;
  a1[1] = dword_10437720;
  a1[2] = dword_10437724;
  CThreadMutex::Unlock((CThreadMutex *)&unk_104376EC);
}
