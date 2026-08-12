int __cdecl sub_102659D0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  _DWORD v10[5]; // [esp+8h] [ebp-18h] BYREF
  char v11; // [esp+1Ch] [ebp-4h]

  v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 12))(a1);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 56))(v5);
  v10[1] = a1;
  v10[2] = v6;
  v10[0] = &CTraceFilterEntity::`vftable';
  v10[3] = sub_100E99F0(a1);
  v10[4] = a1;
  v11 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFFC + 20))(dword_106BAFFC, a1);
  v7 = *(_DWORD *)dword_106B31F4;
  v8 = (*(int (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v5 + 36))(v5, a4, v10, a5);
  return (*(int (__thiscall **)(int, int, int, int, int))(v7 + 32))(dword_106B31F4, v5, a2, a3, v8);
}
