void __thiscall sub_10271A90(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  char v3; // al
  int v4; // eax

  v2 = this;
  switch ( a2 )
  {
    case '@':
    case 'A':
      v3 = (*(int (__thiscall **)(_DWORD *))(*this + 932))(this);
      this = v2;
      if ( v3 )
        goto LABEL_8;
      (*(void (__thiscall **)(_DWORD *, int))(*v2 + 928))(v2, 1);
      break;
    case 'X':
    case 'Y':
      v4 = sub_10271780(this, -1);
      if ( v4 )
        goto LABEL_5;
      break;
    case 'Z':
    case '[':
      v4 = sub_10271780(this, 1);
      if ( v4 )
LABEL_5:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 928))(v4, 1);
      break;
    default:
LABEL_8:
      sub_10236CD0(this, a2);
      break;
  }
}
