int __thiscall sub_1013F560(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int result; // eax

  if ( a2 == 1 )
  {
    v4 = sub_101811E0("_plasma", -1);
    sub_10283010(1);
    this[202] = 1;
    if ( *((_BYTE *)this + 225) != 2 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 480))(this, (int)this + 225);
      *((_BYTE *)this + 225) = 2;
    }
    sub_1023C380((int)"Fire.Plasma", 0.0, 0);
  }
  else
  {
    v4 = sub_101811E0("_firesmoke", -1);
    sub_10283010((this[62] & 2) == 0);
    sub_101410A0((this[62] & 0x20) == 0);
    sub_10141100((this[62] >> 8) & 1);
    this[202] = 0;
    if ( *((_BYTE *)this + 225) != 2 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 480))(this, (int)this + 225);
      *((_BYTE *)this + 225) = 2;
    }
  }
  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_1025F370(v4, this + 145, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
  (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 140))(v4, this, -1);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 720))(
    v4,
    *((float *)this + 206),
    *((float *)this + 206),
    0.0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 728))(v4, this[62] & 4);
  result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  this[200] = result;
  return result;
}
