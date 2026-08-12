char __thiscall sub_101E61D0(_DWORD *this, __int16 *a2)
{
  int v3; // eax
  char result; // al
  int v5; // eax
  const char *v6; // ebx
  int v7; // eax

  v3 = sub_100D1940(a2);
  if ( *((_BYTE *)this + 1670) )
    return 0;
  if ( v3
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *, __int16 *))(*this + 948))(this, a2)
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD *, __int16 *))(*(_DWORD *)dword_106B3CDC + 320))(
          dword_106B3CDC,
          this,
          a2) )
  {
    if ( dword_106BB4D0 )
      sub_1025FAC0(a2);
    return 0;
  }
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    result = sub_10177950((int)a2, (int)this);
    if ( !result && !dword_106BB4D0 )
      return result;
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(__int16 *, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 548))(
               a2,
               this,
               33570827,
               0)
         && (this[64] & 0x8000) == 0 )
  {
    return 0;
  }
  v5 = sub_100D0CC0(a2);
  if ( sub_100CF740(this, *(_DWORD *)(v5 + 440)) && *(_DWORD *)(dword_106BB9AC + 48) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, __int16 *))(*this + 956))(this, a2) )
      return (*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 972))(a2) == 0;
    return 0;
  }
  v6 = (const char *)*((_DWORD *)a2 + 23);
  if ( !v6 )
    v6 = String;
  v7 = (*(int (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 856))(a2);
  if ( !sub_100CF660(this, (int)v6, v7)
    || *(_DWORD *)(dword_106BB9AC + 48)
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *, __int16 *))(*this + 956))(this, a2)
    || (*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 972))(a2) )
  {
    return 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(__int16 *))(*(_DWORD *)a2 + 876))(a2) )
    sub_1025FAC0(a2);
  return 1;
}
