void __userpurge sub_10406C70(float *a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4)
{
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  if ( *(_BYTE *)(a4 + 361) && (*(_BYTE *)(a4 + 356) & 4) == 0 || (*(_BYTE *)(a4 + 356) & 0x20) != 0 )
    sub_10406170(a1, (int)&savedregs, a2, a3);
}
