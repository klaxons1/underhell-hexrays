char __usercall sub_101DD530@<al>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  unsigned __int16 v12; // ax
  char v14[1556]; // [esp+8h] [ebp-63Ch] BYREF
  float v15; // [esp+61Ch] [ebp-28h]
  float v16; // [esp+628h] [ebp-1Ch]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
  sub_101DBFB0(a2, a1, v14, a1, v3);
  if ( *(float *)(a1 + 980) > 0.0 )
    v15 = *(float *)(a1 + 980) * v15;
  v4 = *(_DWORD *)dword_106B31F0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
  v6 = (*(int (__thiscall **)(int, int))(v4 + 16))(dword_106B31F0, v5);
  sub_101B7710(a1, v6, (int)v14);
  sub_101B6C00((int)v14, *(_DWORD *)(a1 + 984));
  if ( v16 < 1.0 && sub_101DC6C0(v7, **(_DWORD **)(v6 + 4)) )
    v16 = 1.0;
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 48))(a1 + 320);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 44))(a1 + 320);
  v10 = sub_100E9550((_DWORD *)a1, v9, v8, 1, (int)v14);
  v11 = v10;
  if ( *(_DWORD *)(a1 + 976) == 1 )
  {
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 76))(v10);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 72))(v11, v12 | 1);
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x1000) == 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 96))(v11);
  if ( (*(_DWORD *)(a1 + 248) & 0x8000) != 0 || *(int *)(a1 + 988) > 0 || *(float *)(a1 + 992) > 0.0 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 60))(v11, 0);
  return 1;
}
