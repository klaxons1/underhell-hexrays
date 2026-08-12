void __thiscall sub_103ECC50(int this)
{
  int v1; // esi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  char *v6; // eax
  int v7; // esi
  int v8; // ebx
  int *v9; // ecx
  int v10; // edx
  int (__thiscall *v11)(int); // eax
  float v12[3]; // [esp+Ch] [ebp-18h] BYREF
  float v13[3]; // [esp+18h] [ebp-Ch] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1100);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  v5 = sub_10106410(v4, "seagull_perch");
  if ( v5 != -1 )
  {
    sub_100BCCA0((void *)this, v5 + 1, (int)v13, (int)v12);
    v6 = sub_100E3960((int)"npc_seagull", v13, v12, 0);
    v7 = (int)v6;
    if ( v6 )
    {
      v8 = *((_DWORD *)v6 + 62) | 0x200;
      if ( *((_DWORD *)v6 + 62) != v8 )
      {
        if ( v6[84] )
        {
          v6[88] |= 1u;
        }
        else
        {
          v9 = (int *)*((_DWORD *)v6 + 6);
          if ( v9 )
            sub_100194B0(v9, 248);
        }
        *(_DWORD *)(v7 + 248) = v8;
      }
      sub_101C73D0((unsigned int *)v7, this);
      sub_100EA940((int *)v7, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 76))(v7, this);
      sub_100E0970(v7, v10, 4, 0);
      v11 = *(int (__thiscall **)(int))(*(_DWORD *)v7 + 8);
      *(_BYTE *)(v7 + 3628) = 1;
      *(_DWORD *)(this + 1940) = *(_DWORD *)v11(v7);
      sub_103EB7C0(this, (int)&savedregs, v13);
    }
  }
}
