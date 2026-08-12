int __thiscall sub_10025440(_DWORD *this)
{
  int v2; // eax
  unsigned __int64 v3; // rax

  qword_10690DD0 = __rdtsc();
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 296))(this) )
  {
    v2 = this[595];
    if ( v2 == 6 || v2 == 11 || v2 == 7 || v2 == 12 )
      (*(void (__thiscall **)(_DWORD *))(*this + 1296))(this);
  }
  sub_10025300(this);
  (*(void (__thiscall **)(_DWORD *))(*this + 940))(this);
  v3 = __rdtsc();
  qword_10690DD0 = v3 - qword_10690DD0;
  return v3;
}
