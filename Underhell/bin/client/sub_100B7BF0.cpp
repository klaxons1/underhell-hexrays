void __usercall sub_100B7BF0(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  char Buffer[256]; // [esp+8h] [ebp-118h] BYREF
  int v7; // [esp+108h] [ebp-18h] BYREF
  int v8; // [esp+10Ch] [ebp-14h] BYREF
  int v9; // [esp+110h] [ebp-10h] BYREF
  int v10; // [esp+114h] [ebp-Ch] BYREF
  int v11; // [esp+118h] [ebp-8h] BYREF
  int v12; // [esp+11Ch] [ebp-4h] BYREF

  v3 = *(_DWORD *)(a1 + 232);
  if ( v3 )
  {
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 112))(*(_DWORD *)(a1 + 232));
    if ( v4 )
    {
      v5 = (_DWORD *)(a1 - 44);
      v12 = 15;
      v11 = 50;
      sub_100B79B0(v5, a2, &v12, &v11, v3, v4);
      v12 += 10;
      sub_10236250(&v7, &v8, &v9, &v10);
      sub_10228370(Buffer, 0x100u, "%-30s %-20s (%i %i)", (char)"Position");
      sub_100B7840(v5, &v12, &v11, (int)Buffer, 0);
      sub_10228370(Buffer, 0x100u, "%-30s %-20s (%i %i)", (char)"Size");
      sub_100B7840(v5, &v12, &v11, (int)Buffer, 0);
    }
  }
}
