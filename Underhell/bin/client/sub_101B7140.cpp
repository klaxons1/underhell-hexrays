void __thiscall sub_101B7140(_DWORD *this, int a2)
{
  int v2; // ebx
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  _DWORD *v9; // [esp+28h] [ebp-4h]
  int v10; // [esp+34h] [ebp+8h]

  v2 = a2 - 1;
  v10 = a2 - 1;
  v4 = (_DWORD *)sub_100422D0();
  v9 = v4;
  if ( v4 && v2 <= 6 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 868))(v4) )
  {
    switch ( *(_DWORD *)(dword_1043CA1C + 48) )
    {
      case 0:
        v6 = 0;
        v7 = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 116))(this)
          && v7
          && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1160))(v7) == v10 )
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1164))(v7) + 1;
        }
        v8 = (*(int (__thiscall **)(_DWORD *, int, int))(*this + 96))(this, v10, v6);
        if ( v8 || (v8 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 96))(this, v10, 0)) != 0 )
        {
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 116))(this) )
            (*(void (__thiscall **)(_DWORD *))(*this + 60))(this);
          (*(void (__thiscall **)(_DWORD *, int))(*this + 148))(this, v8);
          this[112] = 0;
        }
        v4 = v9;
        goto LABEL_19;
      case 1:
      case 3:
        sub_101B7050((int)this, v2);
        return;
      case 2:
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 116))(this) )
          (*(void (__thiscall **)(_DWORD *))(*this + 60))(this);
        sub_101B6110(this, v2, v2);
        v5 = (*(int (__thiscall **)(_DWORD *))(*this + 108))(this);
        sub_101B6020(this, v5);
        goto LABEL_19;
      default:
LABEL_19:
        sub_101212D0(v4, (int)"Player.WeaponSelectionMoveSlot", 0.0, 0);
        break;
    }
  }
}
