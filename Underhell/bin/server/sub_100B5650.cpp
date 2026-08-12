bool __userpurge sub_100B5650@<al>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // esi
  int (__thiscall *v6)(int, int); // edx
  int v7; // edi
  int v8; // eax
  bool v9; // cl
  _BYTE v10[12]; // [esp+8h] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 2212))(a1);
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 2208))(a1, v10) )
    return 1;
  v6 = *(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 288);
  v11 = 0;
  v7 = v6(v4, a2);
  if ( v7 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1088))(v7) )
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1096))(v7);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 2224))(a1, a3 + 580);
  v9 = v4 == v8 || v11 && v11 == v8;
  return !v8 || v9;
}
