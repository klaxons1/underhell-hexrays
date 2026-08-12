void __thiscall sub_101B6E40(_DWORD *this)
{
  _DWORD *v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  unsigned __int8 (__thiscall *v6)(_DWORD *); // eax
  int v7; // [esp+8h] [ebp-10h]

  v2 = (_DWORD *)sub_100422D0();
  if ( !v2 )
    return;
  this[115] = (*(int (__thiscall **)(_DWORD *))(*v2 + 788))(v2);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 116))(this) )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
    if ( !v3 )
      return;
  }
  else
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 788))(v2);
    if ( !v3 )
      goto LABEL_7;
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1164))(v3);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1160))(v3);
  v5 = sub_101B6C90(v4, v7);
  if ( !v5 )
  {
LABEL_7:
    v5 = sub_101B6C90(6, 20);
    if ( !v5 )
      return;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*this + 148))(this, v5);
  v6 = *(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 116);
  this[112] = -1;
  if ( !v6(this) )
    (*(void (__thiscall **)(_DWORD *))(*this + 60))(this);
  sub_101212D0(v2, (int)"Player.WeaponSelectionMoveSlot", 0.0, 0);
}
