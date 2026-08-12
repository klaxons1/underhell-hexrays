int __thiscall sub_100373C0(void *this, int a2, float a3)
{
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int *v6; // ecx
  int v8; // [esp+20h] [ebp-14h]
  int v9; // [esp+24h] [ebp-10h]

  v3 = sub_101811E0("npc_bullseye", -1);
  v4 = *(_DWORD *)(v3 + 248);
  v5 = v4 | 0x10000;
  if ( v4 != (v4 | 0x10000) )
  {
    if ( *(_BYTE *)(v3 + 84) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(v3 + 24);
      if ( v6 )
        sub_100194B0(v6, 248);
    }
    *(_DWORD *)(v3 + 248) = v5;
  }
  sub_100E0D20(a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
  if ( a3 > -1.0 )
    sub_1010C6E0(v3, (int)"SetHealth", COERCE_INT(0.0), v8, v9, -1, 1, a3, (int)this, (int)this, 0);
  return v3;
}
