int __thiscall sub_1026B3C0(_DWORD *this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // eax

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68)
    || (v2 = dword_1047CA70,
        v3 = dword_1047CA68,
        v4 = *(_DWORD *)dword_1047CA70,
        v5 = (*(int (__thiscall **)(_DWORD *))*this)(this),
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 16))(v3, v5),
        result = (*(int (__thiscall **)(int, int))(v4 + 88))(v2, v6),
        !(_BYTE)result) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 532))(this)
      || (result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68)) != 0 )
    {
      v8 = (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
      v9 = __RTDynamicCast(
             v8,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&vgui::MenuItem `RTTI Type Descriptor',
             0);
      if ( v9
        && (v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68),
            v10 == (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 148))(v9))
        && !this[90] )
      {
        return (*(int (__thiscall **)(_DWORD *))(*this + 212))(this);
      }
      else
      {
        v11 = (_DWORD *)sub_10229D00(32);
        if ( v11 )
          v12 = sub_10229D20(v11, (int)"MenuClose");
        else
          v12 = 0;
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v12);
        return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 124))(this, 0);
      }
    }
  }
  return result;
}
