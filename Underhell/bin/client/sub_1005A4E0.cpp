void __userpurge sub_1005A4E0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, float a5, float a6, int a7, float a8)
{
  double v9; // st7
  int v10; // eax

  if ( (*(_BYTE *)(a1 + 32) & 2) != 0 )
    goto LABEL_7;
  if ( *(_DWORD *)(dword_1040D08C + 48) )
  {
    if ( !sub_10142330() )
      DevMsg(
        1,
        "Draw Proxy: qh:%d org:<%d,%d,%d> (frame:%d)\n",
        *(_DWORD *)(a1 + 24),
        (int)*(float *)a1,
        (int)*(float *)(a1 + 4),
        (int)*(float *)(a1 + 8),
        *((_DWORD *)off_103DC81C + 1));
  }
  v9 = sub_10059D40(
         a2,
         a3,
         a1,
         a4,
         *(_DWORD *)(a1 + 24),
         *(float *)a1,
         *(float *)(a1 + 4),
         *(float *)(a1 + 8),
         a5,
         a6,
         a7,
         a8);
  *(float *)(a1 + 20) = v9;
  if ( v9 >= 0.0 )
  {
LABEL_7:
    v10 = *((_DWORD *)off_103DC81C + 1);
    *(_WORD *)(a1 + 32) &= 0xFFFCu;
    *(_DWORD *)(a1 + 12) = v10;
  }
  else
  {
    *(float *)(a1 + 20) = 0.0;
    *(_WORD *)(a1 + 32) &= 0xFFFCu;
  }
}
