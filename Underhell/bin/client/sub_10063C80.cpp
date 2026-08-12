int __thiscall sub_10063C80(_DWORD *this)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  int result; // eax

  v2 = this + 1;
  *this = &CRopeManager::`vftable';
  this[4] = 0;
  if ( (int)this[3] >= 0 )
  {
    if ( *v2 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v2);
      *v2 = 0;
    }
    v2[1] = 0;
  }
  v3 = this + 7;
  v2[4] = *v2;
  this[10] = 0;
  if ( (int)this[9] >= 0 )
  {
    if ( *v3 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
      *v3 = 0;
    }
    this[8] = 0;
  }
  this[11] = this[7];
  sub_1009C990(this + 42);
  if ( (int)this[44] >= 0 )
  {
    if ( this[42] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[42]);
      this[42] = 0;
    }
    this[43] = 0;
  }
  sub_10063730(this + 14);
  sub_1011A810(this + 7);
  result = sub_1011A810(v2);
  *this = &IRopeManager::`vftable';
  return result;
}
