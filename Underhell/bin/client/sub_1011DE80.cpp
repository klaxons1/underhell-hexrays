void __cdecl sub_1011DE80(_DWORD *a1)
{
  CThreadMutex::Lock((CThreadMutex *)&unk_104376EC);
  *a1 = dword_10437738;
  a1[1] = dword_1043773C;
  a1[2] = dword_10437740;
  CThreadMutex::Unlock((CThreadMutex *)&unk_104376EC);
}
