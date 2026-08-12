int __thiscall sub_10039ED0(unsigned __int16 *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax

  sub_1000F6C0((int)this, 7);
  v2 = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 356))(this);
  v3 = 128;
  if ( v2 == 1 )
  {
    v3 = 132;
  }
  else if ( v2 == 2 )
  {
    v3 = 136;
  }
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_10413184 + 24))(dword_10413184, 140, v3, this[195]);
  sub_1008F150(this + 176);
  if ( !(*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*((_DWORD *)this + 1) + 12))(this + 2)
    || (*(unsigned __int8 (__thiscall **)(unsigned __int16 *))(*((_DWORD *)this + 2) + 32))(this + 4)
    || (unsigned __int8)sub_101BC880() && !*((_BYTE *)this + 168) )
  {
    return sub_10036200(this);
  }
  v4 = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 344))(this);
  return sub_10036100((int)this, v4);
}
