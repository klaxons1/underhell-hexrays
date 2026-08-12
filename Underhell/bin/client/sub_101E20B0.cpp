int __thiscall sub_101E20B0(_BYTE *this, int a2, int a3, float a4)
{
  int result; // eax

  if ( a2 )
    result = (*(int (__stdcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)a2 + 4))(LODWORD(a4), a3, this);
  this[376] &= ~0x10u;
  return result;
}
