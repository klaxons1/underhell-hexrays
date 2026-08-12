int __thiscall sub_100EFC20(_DWORD *this)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = (_DWORD *)this[36];
  *this = &CParticleEffectBinding::`vftable';
  this[1] = &CParticleEffectBinding::`vftable';
  if ( v2 )
    sub_100EF970(v2, (int)this);
  sub_100EF0E0((int)this);
  result = sub_100EC500((_WORD *)this + 92);
  if ( (int)this[48] >= 0 )
  {
    result = this[46];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[46]);
      this[46] = 0;
    }
    this[47] = 0;
  }
  *this = &IHandleEntity::`vftable';
  return result;
}
