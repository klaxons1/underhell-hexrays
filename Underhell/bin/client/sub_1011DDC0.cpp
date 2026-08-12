void __cdecl sub_1011DDC0(_DWORD *a1)
{
  CThreadMutex::Lock((CThreadMutex *)&unk_104376EC);
  *a1 = dword_1043770C;
  a1[1] = dword_10437710;
  a1[2] = dword_10437714;
  a1[3] = dword_10437718;
  CThreadMutex::Unlock((CThreadMutex *)&unk_104376EC);
}
