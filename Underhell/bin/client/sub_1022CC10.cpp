HMODULE __usercall sub_1022CC10@<eax>(int a1@<ebx>, char *Source)
{
  int (*ThreadedLoadLibraryFunc)(void); // ebx
  int v4; // esi
  int v5; // eax
  CHAR LibFileName[1024]; // [esp+0h] [ebp-40Ch] BYREF
  CHAR *v7; // [esp+400h] [ebp-Ch] BYREF
  int v8; // [esp+404h] [ebp-8h]
  int v9; // [esp+408h] [ebp-4h] BYREF

  sub_102282F0(LibFileName, Source, 1024);
  if ( !sub_10227FA0(LibFileName, ".dll") )
    sub_10228100(LibFileName, ".dll", 0x400u, -1);
  sub_10228240(LibFileName, 92);
  ThreadedLoadLibraryFunc = (int (*)(void))GetThreadedLoadLibraryFunc(a1);
  if ( !ThreadedLoadLibraryFunc )
    return LoadLibraryExA(LibFileName, 0, 8u);
  v7 = LibFileName;
  v8 = 0;
  v4 = CreateSimpleThread(sub_1022CBF0, &v7);
  v9 = v4;
  if ( ThreadWaitForObjects(1, &v9, 1, 0) == 258 )
  {
    do
    {
      v5 = ThreadedLoadLibraryFunc();
      v9 = v4;
    }
    while ( ThreadWaitForObjects(1, &v9, 1, v5) == 258 );
  }
  ReleaseThreadHandle(v4);
  return (HMODULE)v8;
}
