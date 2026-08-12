void __cdecl sub_1011DE40(_DWORD *a1)
{
  CThreadMutex::Lock((CThreadMutex *)&unk_104376EC);
  *a1 = dword_10437728;
  a1[1] = dword_1043772C;
  a1[2] = dword_10437730;
  a1[3] = dword_10437734;
  CThreadMutex::Unlock((CThreadMutex *)&unk_104376EC);
}
