void __thiscall sub_101129A0(unsigned __int16 *this, __int16 a2)
{
  _WORD *v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // edi
  unsigned __int16 *v6; // [esp+Ch] [ebp-4h]

  v2 = this + 18;
  v3 = this[18];
  v6 = this;
  if ( a2 != this[18] )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 72))(this, this + 18);
    this = v6;
    *v2 = a2;
  }
  v4 = (unsigned __int16)*v2;
  if ( v3 != v4 )
  {
    if ( (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 0xC0) != 0 )
    {
      sub_101126F0((int *)this);
      this = v6;
    }
    v5 = v3 & 0xC;
    if ( v5 != (*v2 & 0xC) )
    {
      sub_100E8D20(*((_DWORD **)this + 1));
      this = v6;
    }
    if ( v5 != (*v2 & 0xC) )
    {
      sub_10112060((int)this);
      if ( (!*((_BYTE *)v6 + 41) || (*(_BYTE *)v2 & 4) != 0) && (*(_BYTE *)v2 & 8) == 0 )
      {
        if ( (unsigned __int8)sub_101C4690(*((_DWORD *)v6 + 1)) )
          sub_100DAE10(*((_DWORD **)v6 + 1), 1);
      }
    }
  }
}
