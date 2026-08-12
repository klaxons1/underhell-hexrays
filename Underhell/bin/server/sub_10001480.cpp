int __usercall sub_10001480@<eax>(CWorkerThread *a1@<ecx>, char a2@<bl>)
{
  int v3; // edi
  void *v4; // eax
  char v6; // [esp-4h] [ebp-110h]
  char Buffer[260]; // [esp+4h] [ebp-108h] BYREF
  unsigned int v8; // [esp+108h] [ebp-4h] BYREF

  if ( CWorkerThread::WaitForCall(a1, &v8) )
  {
    v6 = a2;
    while ( v8 != 1 )
    {
      v3 = *((_DWORD *)a1 + 26);
      *((_DWORD *)a1 + 26) = 0;
      CWorkerThread::Reply(a1, 1u);
      sub_10429A00(Buffer, 0x104u, "GameState.txt", v6);
      if ( dword_106B31D8 )
        v4 = (void *)(dword_106B31D8 + 4);
      else
        v4 = 0;
      sub_1042B350(v4, (int)Buffer, (int)"MOD");
      sub_1042B1A0(v3);
      if ( !CWorkerThread::WaitForCall(a1, &v8) )
        return 0;
    }
    CWorkerThread::Reply(a1, 1u);
  }
  return 0;
}
