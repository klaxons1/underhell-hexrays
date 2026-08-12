int __thiscall sub_1005B360(unsigned __int16 *this)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax

  sub_1005A810(this);
  sub_10087F70(this + 6);
  if ( *((int *)this + 5) >= 0 )
  {
    if ( *((_DWORD *)this + 3) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 3));
      *((_DWORD *)this + 3) = 0;
    }
    *((_DWORD *)this + 4) = 0;
  }
  v2 = *((_DWORD *)this + 3);
  this[14] = -1;
  this[16] = -1;
  *((_DWORD *)this + 9) = v2;
  if ( *((int *)this + 2) >= 0 )
  {
    if ( *(_DWORD *)this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)this);
      *(_DWORD *)this = 0;
    }
    *((_DWORD *)this + 1) = 0;
  }
  sub_10087F70(this + 6);
  if ( *((int *)this + 5) >= 0 )
  {
    if ( *((_DWORD *)this + 3) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 3));
      *((_DWORD *)this + 3) = 0;
    }
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 9) = *((_DWORD *)this + 3);
  this[14] = -1;
  this[16] = -1;
  *((_DWORD *)this + 11) = 0xFFFF;
  v3 = *(_DWORD *)this;
  result = 0;
  this[24] = 0;
  *((_DWORD *)this + 13) = v3;
  return result;
}
