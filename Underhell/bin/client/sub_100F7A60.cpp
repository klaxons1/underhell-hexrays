bool __thiscall sub_100F7A60(int this, int a2, void (__thiscall *a3)(char *), int a4, int a5, int a6)
{
  int v7; // eax

  v7 = sub_1000F400((_DWORD *)this, a2);
  if ( v7 <= 0 || v7 > *((_DWORD *)off_103DC81C + 6) )
    return 1;
  sub_10011320((int *)this, a2, -1.0);
  sub_100F70A0((char *)this, a3, a4, a5, a6);
  sub_1000F3A0((_DWORD *)this, a2, *((float *)off_103DC81C + 3));
  return (*(_BYTE *)(this + 312) & 1) == 0;
}
