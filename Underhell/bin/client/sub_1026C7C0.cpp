void __thiscall sub_1026C7C0(int *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // edi
  int *v6; // esi
  int v7; // edi
  int v8; // eax
  int *v9; // ecx
  int v10; // edi
  bool v11; // al

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 204))(this) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82) )
    {
      sub_10236CD0(this, a2);
      v3 = (_DWORD *)sub_10229D00(32);
      if ( v3 )
        v4 = sub_10229D20(v3, (int)"MenuClose");
      else
        v4 = 0;
      (*(void (__thiscall **)(int *, _DWORD *))(*this + 180))(this, v4);
    }
    switch ( a2 )
    {
      case 64:
      case 114:
        v10 = this[89];
        v11 = sub_1026B4E0(this + 58, v10);
        v9 = this;
        if ( !v11 )
          goto LABEL_23;
        (*(void (__thiscall **)(int *, int))(*this + 920))(this, v10);
        return;
      case 70:
      case 115:
        goto LABEL_9;
      case 88:
      case 146:
      case 153:
        sub_1026C4A0(this, -1, 0);
        v5 = this[89];
        v6 = this + 58;
        if ( sub_1026B4E0(v6, v5) )
          goto LABEL_11;
        return;
      case 89:
      case 149:
      case 151:
        v8 = sub_1026AE10(this);
        v9 = this;
        if ( v8 )
LABEL_9:
          (*(void (__thiscall **)(int *, _DWORD))(*this + 124))(this, 0);
        else
LABEL_23:
          sub_10236CD0(v9, a2);
        return;
      case 90:
      case 148:
      case 152:
        sub_1026C4A0(this, 1, 0);
        v5 = this[89];
        v6 = this + 58;
        if ( sub_1026B4E0(v6, v5) )
LABEL_11:
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*v6 + 12 * v5) + 1052))(*(_DWORD *)(*v6 + 12 * v5));
        break;
      case 91:
      case 147:
      case 150:
        v7 = this[89];
        if ( sub_1026B4E0(this + 58, v7) && (unsigned __int8)sub_1026EFD0(*(_DWORD *)(this[58] + 12 * v7)) )
          (*(void (__thiscall **)(int *, int))(*this + 920))(this, this[89]);
        else
          sub_10236CD0(this, a2);
        break;
      default:
        return;
    }
  }
}
