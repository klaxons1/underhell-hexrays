int __thiscall sub_100F5FF0(_DWORD *this)
{
  int v2; // ebx
  int i; // edi
  int v4; // eax
  int v5; // edi
  bool v6; // bl
  int v7; // eax
  int result; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  _BYTE v12[12]; // [esp+Ch] [ebp-10h] BYREF
  int v13; // [esp+18h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 508))(this);
  v13 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 504))(this, v12);
  for ( i = 0; i < 3; ++i )
  {
    v4 = sub_101E7EA0(i);
    if ( v4 )
      (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)v4 + 848))(v4, this, v13, v2);
  }
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 1092))(this)
    || ((v13 = (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this),
         (v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this)) != 0)
      ? (v7 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 4))(v5, this),
         v6 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 12))(v5, v7) != 0)
      : (v6 = 1),
        (result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v13 + 28))(v13, this), v6)
     && (result = (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this)) != 0) )
  {
    v9 = this[851];
    if ( v9 == -1 || off_1061BE18[4 * (this[851] & 0xFFF) + 2] != v9 >> 12 || !off_1061BE18[4 * (this[851] & 0xFFF) + 1] )
    {
      if ( *((float *)this + 418) <= (double)*(float *)(dword_106B31C8 + 12) )
      {
        if ( sub_100CF460(this)
          && (!(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this) || sub_100F5970(this)) )
        {
          v11 = sub_100CF460(this);
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 1024))(v11);
          return (*(int (__thiscall **)(_DWORD *))(*this + 1304))(this);
        }
        if ( !sub_100CF460(this) && (this[823] & 0x800) != 0 )
          sub_101E96F0(this);
      }
      else if ( sub_100CF460(this) )
      {
        v10 = sub_100CF460(this);
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 1028))(v10);
        return (*(int (__thiscall **)(_DWORD *))(*this + 1304))(this);
      }
    }
    return (*(int (__thiscall **)(_DWORD *))(*this + 1304))(this);
  }
  return result;
}
