char __thiscall sub_102487F0(int *this, int a2, const char *Src, int a4)
{
  bool v4; // zf
  int v6; // ebp
  int v7; // edx
  int *v8; // ecx
  int v9; // eax
  _WORD *v10; // esi

  v4 = (_BYTE)a4 == 0;
  this[77] = a2;
  if ( !v4 )
  {
    sub_101FBF20(this + 53);
    this[75] = 0;
    this[61] = 0;
    this[66] = 0;
  }
  v6 = (unsigned __int16)*sub_10230F20(dword_1047CCCC, (__int16 *)&a4, Src);
  v7 = this[75];
  v8 = this + 72;
  v9 = 0;
  a4 = v6;
  if ( v7 <= 0 )
    goto LABEL_9;
  v10 = (_WORD *)*v8;
  while ( *v10 != (_WORD)v6 )
  {
    ++v9;
    ++v10;
    if ( v9 >= v7 )
      goto LABEL_9;
  }
  if ( v9 == -1 )
LABEL_9:
    sub_1007DB60(v8, v7, &a4);
  sub_10244520(this);
  return sub_102482F0(this, Src);
}
