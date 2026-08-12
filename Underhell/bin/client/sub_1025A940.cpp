int __thiscall sub_1025A940(int this)
{
  int v2; // ecx
  int v3; // edi
  bool v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int result; // eax
  int v12; // [esp-4h] [ebp-24h]
  int v13; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+14h] [ebp-Ch] BYREF
  int v15; // [esp+18h] [ebp-8h] BYREF
  int v16; // [esp+1Ch] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 212);
  *(_BYTE *)(this + 292) = 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 772))(v2);
  v4 = 0;
  (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 212) + 780))(*(_DWORD *)(this + 212), &v15, &v13);
  if ( v13 )
  {
    v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 788))(*(_DWORD *)(this + 212));
    v4 = v3 + v15 + v5 == v13;
  }
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v16, (int)&v14);
  v6 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 212));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 212), v16 - v6, 0);
  v12 = v14;
  v7 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 212));
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 212), v7, v12);
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *(_DWORD *)(this + 320));
  v9 = *(_DWORD *)(this + 256);
  v10 = v14 / (*(_DWORD *)(this + 372) + v8);
  if ( v9 > v10 )
  {
    if ( *(_BYTE *)(this + 220) )
      sub_1025A5B0((void *)this, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 212) + 776))(*(_DWORD *)(this + 212), 0, v9);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 784))(*(_DWORD *)(this + 212), v10);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 200))(*(_DWORD *)(this + 212), 1);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 816))(*(_DWORD *)(this + 212), 1);
    if ( v4 )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 768))(*(_DWORD *)(this + 212), v9 - v10);
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 212) + 244))(*(_DWORD *)(this + 212), 0, 0);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 16))(*(_DWORD *)(this + 212));
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 212) + 200))(*(_DWORD *)(this + 212), 0);
    (*(void (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 212) + 776))(*(_DWORD *)(this + 212), 0, v9);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 784))(*(_DWORD *)(this + 212), v9);
    result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 212) + 768))(*(_DWORD *)(this + 212), 0);
    if ( *(_BYTE *)(this + 220) )
      return sub_1025A5B0((void *)this, 0);
  }
  return result;
}
