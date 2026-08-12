void __thiscall sub_1038F6E0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int *v6; // ecx
  int v7; // edx
  int *v8; // ecx
  float v9[3]; // [esp+4h] [ebp-20h] BYREF
  float v10[3]; // [esp+10h] [ebp-14h] BYREF
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  v2 = this[1044];
  if ( v2 > 0 )
  {
    v3 = v2 - 1;
    this[1044] = v3;
    if ( v3 <= 0 )
      sub_100C1600((int)this, 1, 0);
    v4 = sub_101811E0("npc_manhack", -1);
    v11 = sub_100BEF30((int)this, "LHand");
    sub_100BCCA0(this, v11, (int)v10, (int)v9);
    sub_100E10C0(v4, v10);
    sub_100E11A0(v4, v9);
    v5 = *(_DWORD *)(v4 + 248) | 0x90080;
    v12 = v5;
    if ( *(_DWORD *)(v4 + 248) != v5 )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v4 + 24);
        if ( v6 )
        {
          sub_100194B0(v6, 248);
          v5 = v12;
        }
      }
      *(_DWORD *)(v4 + 248) = v5;
    }
    if ( (this[62] & 0x200) != 0 )
    {
      v7 = *(_DWORD *)(v4 + 248) | 0x200;
      v12 = v7;
      if ( *(_DWORD *)(v4 + 248) != v7 )
      {
        if ( *(_BYTE *)(v4 + 84) )
        {
          *(_BYTE *)(v4 + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(v4 + 24);
          if ( v8 )
          {
            sub_100194B0(v8, 248);
            v7 = v12;
          }
        }
        *(_DWORD *)(v4 + 248) = v7;
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 140))(v4, this, v11);
    this[1105] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  }
  else
  {
    DevMsg("Error: Throwing manhack but out of manhacks!\n");
  }
}
