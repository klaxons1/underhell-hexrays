int __thiscall sub_101251A0(int this, int a2)
{
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  return ((int (__stdcall *)(int, int, _DWORD, int))(*off_1061B7A0)[5])(
           this + 580,
           this + 704,
           *(float *)(this + 800),
           1);
}
