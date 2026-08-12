void __thiscall sub_10275930(_DWORD **this, int a2)
{
  _DWORD *v2; // esi
  int *v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bool v8; // bl
  int v9; // ecx
  char v10; // al
  bool v11; // zf
  int v12; // eax
  char v13; // [esp+14h] [ebp+4h]

  v2 = this;
  switch ( a2 )
  {
    case 11:
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
        && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84) )
      {
        goto LABEL_40;
      }
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v2[67] + 828))(v2[67]);
      break;
    case 19:
      ((void (__thiscall *)(_DWORD **, int))(*this)[193])(this, 1);
      break;
    case 25:
      ((void (__thiscall *)(_DWORD **, int))(*this)[195])(this, 1);
      break;
    case 31:
      ((void (__thiscall *)(_DWORD **, int))(*this)[194])(this, 1);
      break;
    case 65:
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
        || (v13 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
      {
        v13 = 1;
      }
      v8 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
        || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
        || (v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82)) != 0 )
      {
        v10 = 1;
      }
      if ( v13 )
      {
        LOBYTE(v9) = !v8;
        (*(void (__thiscall **)(_DWORD *, int))(*v2 + 776))(v2, v9);
      }
      else
      {
        v11 = v10 == 0;
        v12 = *v2;
        LOBYTE(v9) = !v8;
        if ( v11 )
          (*(void (__thiscall **)(_DWORD *, int))(v12 + 772))(v2, v9);
        else
          (*(void (__thiscall **)(_DWORD *, int))(v12 + 780))(v2, v9);
      }
      break;
    case 70:
      if ( (*(int (__thiscall **)(_DWORD *))(*this[67] + 844))(this[67]) <= 0 )
      {
LABEL_40:
        this = (_DWORD **)v2;
        goto LABEL_41;
      }
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v2[67] + 816))(v2[67]);
      break;
    case 88:
      if ( sub_10273C00(this) )
      {
        v6 = sub_10273C00(v2);
        sub_102740F0(v6, (int)v2);
      }
      break;
    case 89:
      if ( *((_BYTE *)this + 240) && (int)this[58] > 0 )
      {
        sub_10275580((int)this, 0);
      }
      else if ( sub_10273C00(this) )
      {
        v3 = (int *)v2[67];
        v4 = *v3;
        v5 = sub_10273C00(v2);
        (*(void (__thiscall **)(int *, _DWORD, int, int, int))(v4 + 820))(v3, *(_DWORD *)(v5 + 208), 1, 1, 1);
      }
      break;
    case 90:
      if ( (int)this[58] > 0 && *((_BYTE *)this + 240) )
        goto LABEL_10;
      if ( sub_10273C00(this) )
      {
        v7 = sub_10273C00(v2);
        sub_102741A0(v7, (int)v2);
      }
      break;
    case 91:
      if ( *((_BYTE *)this + 240) )
      {
        if ( (int)this[58] > 0 )
LABEL_10:
          (*(void (__thiscall **)(_DWORD *, _DWORD, int, int, int))(*this[67] + 820))(
            this[67],
            *(_DWORD *)(*this[55] + 208),
            1,
            1,
            1);
      }
      else
      {
        sub_10275580((int)this, 1);
      }
      break;
    default:
LABEL_41:
      sub_10236CD0(this, a2);
      break;
  }
}
