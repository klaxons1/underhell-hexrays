int __thiscall sub_1012D410(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  _DWORD *v4; // [esp+8h] [ebp-4h] BYREF

  if ( this )
    v4 = this + 1;
  else
    v4 = 0;
  result = sub_1023E0F0(&v4);
  this[5] = 0;
  if ( (int)this[4] < 0 )
  {
    this[6] = this[2];
  }
  else
  {
    result = this[2];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    v3 = this[2];
    this[3] = 0;
    this[6] = v3;
  }
  return result;
}
