void __thiscall sub_10260740(_BYTE *this, unsigned __int8 a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( this[376] && a2 != (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 932))(this) )
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
      v4 = sub_1022B1A0(v3, (int)"Expanded", "state", a2);
    else
      v4 = 0;
    (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)this + 180))(this, v4);
    sub_1025B670(this, a2);
  }
}
