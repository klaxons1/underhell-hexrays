int __thiscall sub_102D5490(_DWORD *this, int a2)
{
  (*(void (__thiscall **)(_DWORD *, int))(*this + 600))(this, a2);
  if ( (*(_BYTE *)(a2 + 64) & 0x48) != 0 )
    return sub_100C7DC0(this, a2, (int *)a2);
  else
    return 0;
}
