int __thiscall sub_1024E680(int this)
{
  bool v2; // zf
  int result; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(_BYTE *)(this + 354) == 0;
  v13 = *(_DWORD *)(this + 266);
  if ( !v2 )
    v13 = *(_DWORD *)(this + 262);
  result = sub_10261660(this);
  if ( *(_BYTE *)(this + 357) )
  {
    v4 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
    v5 = dword_1047CA6C;
    v6 = *(_DWORD *)dword_1047CA6C;
    v7 = v4;
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 288) + 132))(*(_DWORD *)(this + 288));
    v9 = (*(int (__thiscall **)(int, int))(v6 + 268))(v5, v8);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v13);
    result = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
               dword_1047CA6C,
               2 * (*(_BYTE *)(this + 393) == 0) + 3,
               2 * (*(_BYTE *)(this + 393) == 0) + 3,
               v7 - (2 * (*(_BYTE *)(this + 393) == 0) + 3),
               *(_BYTE *)(this + 393) != 0 ? 14 : 28);
    if ( *(_DWORD *)(this + 288) )
    {
      v10 = *(_DWORD *)(this + 416);
      if ( !v10 )
        v10 = *(_DWORD *)(this + 384);
      v11 = v7 - 72;
      if ( *(_DWORD *)(this + 344)
        && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 128))(*(_DWORD *)(this + 344)) )
      {
        sub_1024D3B0(*(_DWORD *)(this + 344), &v13, &v14);
        v10 += v13;
        v11 -= v13;
      }
      v12 = *(_DWORD *)(this + 424);
      if ( !v12 )
        v12 = *(_BYTE *)(this + 393) != 0 ? 2 : 9;
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 288) + 4))(*(_DWORD *)(this + 288), v10, v12);
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 288) + 16))(*(_DWORD *)(this + 288), v11, v9);
      return (***(int (__thiscall ****)(_DWORD))(this + 288))(*(_DWORD *)(this + 288));
    }
  }
  return result;
}
