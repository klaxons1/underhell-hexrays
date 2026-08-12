int __thiscall sub_1025BF60(int this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // ebp
  int v9; // eax
  int v10; // eax

  result = a2;
  if ( ((*(_BYTE *)(this + 292) & 0x40) != 0) != (a2 != 0) )
  {
    if ( a2 )
    {
      *(_WORD *)(this + 292) |= 0x40u;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 148))(this) )
      {
        v4 = (_DWORD *)sub_10229D00(32);
        if ( v4 )
          v5 = sub_10229D20(v4, (int)"DefaultButtonSet");
        else
          v5 = 0;
        v6 = sub_102391E0((_DWORD *)this);
        sub_1022ACA0(v5, "button", v6);
        v7 = dword_1047CA74;
        v8 = *(_DWORD *)dword_1047CA74;
        v9 = (**(int (__thiscall ***)(int, _DWORD))this)(this, 0.0);
        v10 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)this + 148))(this, v5, v9);
        (*(void (__thiscall **)(int, int))(v8 + 80))(v7, v10);
      }
    }
    else
    {
      *(_WORD *)(this + 292) &= ~0x40u;
    }
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
  }
  return result;
}
