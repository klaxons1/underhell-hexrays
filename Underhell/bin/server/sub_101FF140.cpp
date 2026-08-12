void __thiscall sub_101FF140(_DWORD *this, float a2)
{
  _DWORD *v2; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+1Ch] [ebp-10h] BYREF
  float v14; // [esp+20h] [ebp-Ch] BYREF
  int v15; // [esp+24h] [ebp-8h]
  _DWORD *v16; // [esp+28h] [ebp-4h]

  v2 = this;
  v3 = 0;
  v15 = 0;
  v16 = this + 200;
  do
  {
    if ( *v16 == -1 || off_1061BE18[4 * (*v16 & 0xFFF) + 2] != *v16 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*v16 & 0xFFF) + 1];
    v5 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseAnimating `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      sub_100BE8B0(v5, *((unsigned __int8 *)v2 + v3 + 816), &v13, &v14);
      v6 = *((unsigned __int8 *)v2 + v3 + 816);
      v7 = dword_10700AC8;
      v11 = v6;
      v12 = v13 + (v14 - v13) * a2;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*(_DWORD *)(v5 + 1100) && sub_100D7240((void *)v5) )
        sub_100BD750((volatile signed __int32 *)v5);
      v8 = *(_DWORD **)(v5 + 1100);
      if ( v8 && *v8 )
        v9 = *(_DWORD *)(v5 + 1100);
      else
        v9 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
      sub_100BE7D0((_DWORD *)v5, v9, v11, v12);
      v3 = v15;
      v2 = this;
    }
    ++v16;
    v15 = ++v3;
  }
  while ( v3 < 4 );
}
