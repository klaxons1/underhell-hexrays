int __cdecl sub_10265A60(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edi
  int v8; // esi
  int v9; // eax
  _DWORD v11[5]; // [esp+8h] [ebp-1Ch] BYREF
  char v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v7 = (*(int (__thiscall **)(_DWORD *))(*a1 + 12))(a1);
  v11[1] = a1;
  v11[2] = a6;
  v11[0] = &CTraceFilterEntity::`vftable';
  v11[3] = sub_100E99F0(a1);
  v11[4] = a1;
  v12 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFFC + 20))(dword_106BAFFC, a1);
  v13 = a5;
  v11[0] = &CTraceFilterEntityIgnoreOther::`vftable';
  v8 = *(_DWORD *)dword_106B31F4;
  v9 = (*(int (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v7 + 36))(v7, a4, v11, a7);
  return (*(int (__thiscall **)(int, int, int, int, int))(v8 + 32))(dword_106B31F4, v7, a2, a3, v9);
}
