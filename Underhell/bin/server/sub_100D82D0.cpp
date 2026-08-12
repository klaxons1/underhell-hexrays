char __thiscall sub_100D82D0(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  int v4; // eax
  int v6; // [esp-1Ch] [ebp-28h]
  int v7; // [esp-18h] [ebp-24h]
  int v8; // [esp-14h] [ebp-20h]
  int v9; // [esp-10h] [ebp-1Ch]
  int v10; // [esp-Ch] [ebp-18h]
  int v11; // [esp-8h] [ebp-14h]
  int v12; // [esp-4h] [ebp-10h]

  if ( !this[6] || !*(_DWORD *)(a2 + 24) )
    return 0;
  v2 = a2 + 320;
  v3 = this + 80;
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 8))(a2 + 320);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 36))(v2);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
  v8 = (*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  v7 = (*(int (__thiscall **)(_DWORD *))(*v3 + 4))(v3);
  v6 = (*(int (__thiscall **)(_DWORD *))(*v3 + 36))(v3);
  v4 = (*(int (__thiscall **)(_DWORD *))(*v3 + 32))(v3);
  return sub_10114880(v4, v6, v7, v8, v9, v10, v11, v12, 0.0);
}
