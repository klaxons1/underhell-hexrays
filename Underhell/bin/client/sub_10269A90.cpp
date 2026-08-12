int __thiscall sub_10269A90(int *this, int a2)
{
  int v4; // ecx
  int (__thiscall *v5)(int *, int); // eax

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80) )
  {
    sub_10269640(this, a2);
    return (*(int (__thiscall **)(int *, int))(*this + 804))(this, a2);
  }
  else if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
         || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84) )
  {
    v4 = *(_DWORD *)(this[53] + 12 * a2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 48))(v4, 0);
    v5 = *(int (__thiscall **)(int *, int))(*this + 804);
    this[77] = a2;
    return v5(this, a2);
  }
  else
  {
    (*(void (__thiscall **)(int *, int))(*this + 840))(this, a2);
    return (*(int (__thiscall **)(int *, int))(*this + 804))(this, a2);
  }
}
