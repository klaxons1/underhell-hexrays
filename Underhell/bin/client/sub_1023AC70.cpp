int __thiscall sub_1023AC70(int (__thiscall ***this)(void *, int *, int *), int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // [esp+2Ch] [ebp-Ch] BYREF
  int v14; // [esp+30h] [ebp-8h] BYREF
  int v15; // [esp+34h] [ebp-4h] BYREF

  result = a3;
  if ( *(_DWORD *)(a3 + 12) )
  {
    v5 = dword_1047CA70;
    v6 = *(_DWORD *)dword_1047CA70;
    v7 = (**this)(this, &v13, &a3);
    (*(void (__thiscall **)(int, int))(v6 + 20))(v5, v7);
    v8 = dword_1047CA70;
    v9 = *(_DWORD *)dword_1047CA70;
    v10 = (**this)(this, &v15, &v14);
    (*(void (__thiscall **)(int, int))(v9 + 40))(v8, v10);
    (*(void (__thiscall **)(int, int (__thiscall **)(void *, int *, int *)))(*(_DWORD *)dword_1047CA6C + 40))(
      dword_1047CA6C,
      this[11]);
    v11 = v14;
    v12 = v15;
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 56))(
      dword_1047CA6C,
      v15,
      v14,
      v15 + v13,
      v14 + a3);
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 56))(
             dword_1047CA6C,
             v12 + 1,
             v11 + 1,
             v12 + v13 - 1,
             v11 + a3 - 1);
  }
  return result;
}
