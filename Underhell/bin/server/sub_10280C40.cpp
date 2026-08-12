int __thiscall sub_10280C40(int this, int a2)
{
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  return ((int (__stdcall *)(int, _DWORD, int, int, _DWORD, _DWORD))(*off_1065C5EC)[14])(
           a2,
           0.0,
           this + 580,
           this + 704,
           *(float *)(this + 804),
           *(_DWORD *)(this + 800));
}
