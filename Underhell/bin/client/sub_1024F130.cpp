void __thiscall sub_1024F130(_BYTE *this, int a2)
{
  bool v3; // bl
  char v4; // al
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // edi
  _DWORD *v14; // eax
  _DWORD *v15; // eax
  int v16; // ebx
  char v17; // [esp+2Fh] [ebp-1h]

  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
    || (v17 = 0, (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
  {
    v17 = 1;
  }
  v3 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
    || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 81)
    || (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 82)) != 0 )
  {
    v4 = 1;
  }
  if ( v3 && v17 )
  {
    if ( !v4 )
      goto LABEL_27;
    if ( a2 == 12 )
    {
      (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 784))(this);
      return;
    }
    if ( a2 == 28 )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 24))(dword_1047CA6C);
      if ( v5 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA7C + 8))(dword_1047CA7C);
        v6 = dword_1047CA70;
        v7 = *(_DWORD *)dword_1047CA70;
        v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 104))(this);
        v9 = (*(int (__thiscall **)(int, int, int))(v7 + 216))(v6, v5, v8);
        if ( v9 )
          (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v9 + 244))(v9, 0, 1);
      }
      return;
    }
  }
  if ( v4 && a2 == 95 )
  {
    v10 = (_DWORD *)sub_10229D00(32);
    if ( v10 )
      v11 = sub_10229D20(v10, (int)"CloseFrameButtonPressed");
    else
      v11 = 0;
    (*(void (__thiscall **)(_BYTE *, _BYTE *, _DWORD *, _DWORD))(*(_DWORD *)this + 132))(this, this, v11, 0.0);
    return;
  }
LABEL_27:
  if ( a2 == 64 )
  {
    v12 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 844))(this);
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 12))(v12);
    if ( v13
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 60))(dword_1047CA70, v13)
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 220))(dword_1047CA70, v13) )
    {
      v14 = (_DWORD *)sub_10229D00(32);
      if ( v14 )
        v15 = sub_10229D20(v14, (int)"Hotkey");
      else
        v15 = 0;
      (*(void (__thiscall **)(_BYTE *, int, _DWORD *, _DWORD))(*(_DWORD *)this + 136))(this, v13, v15, 0.0);
    }
  }
  else if ( a2 == 70
         && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 220))(dword_1047CA6C, 3)
         && (v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68),
             v16 == (**(int (__thiscall ***)(_BYTE *))this)(this)) )
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 884))(this);
  }
  else if ( this[400] )
  {
    sub_1024B5F0(this, a2);
  }
  else
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 220))(dword_1047CA68, a2);
  }
}
