int __thiscall sub_10260070(int this)
{
  int v2; // eax
  int v3; // ecx
  bool v4; // zf
  void (__stdcall *v5)(int); // edx
  int v6; // edi
  int v7; // eax
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)this + 280))(this, &v10, &v9);
  sub_10251180((_BYTE *)this);
  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 956) + 820))(*(_DWORD *)(this + 956));
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v2);
  if ( v9 < v3 )
    v3 = v9;
  sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 956), v10 - v3 - 4, (v9 - v3 - 1) / 2, v3, v3);
  v4 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 924))(this) == 0;
  v5 = *(void (__stdcall **)(int))(*(_DWORD *)this + 232);
  if ( v4 )
    v5(2);
  else
    v5(3);
  v6 = **(_DWORD **)(this + 956);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 204))(this);
  (*(void (__thiscall **)(_DWORD, int))(v6 + 200))(*(_DWORD *)(this + 956), v7);
  return sub_1025F4C0(this);
}
