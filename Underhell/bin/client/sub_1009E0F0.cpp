void __userpurge sub_1009E0F0(int a1@<ecx>, int a2@<esi>, float *a3, float *a4, float *a5, float *a6, int a7)
{
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)(dword_1042D84C + 48) )
      sub_1009D840(*(float *)&a1, (int)&savedregs, a3, a4, a5, a6);
    else
      sub_1009D680(a1, (int)&savedregs, a2, a3, a4, a7);
  }
}
