int __thiscall sub_10281A80(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int result; // eax
  int *v8; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CWorld::`vftable';
  dword_106B639C = 0;
  while ( dword_106960D8 )
  {
    v2 = *(_DWORD *)(dword_106960D0 + 4);
    *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4) = *(_DWORD *)(v2 + 4);
    *(_DWORD *)(*(_DWORD *)(v2 + 4) + 8) = *(_DWORD *)(v2 + 8);
    --dword_106960D8;
    sub_10184660(v2);
  }
  while ( dword_106960E4 )
  {
    v3 = *(_DWORD *)(dword_106960DC + 4);
    *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(*(_DWORD *)(v3 + 4) + 8) = *(_DWORD *)(v3 + 8);
    --dword_106960E4;
    sub_10184660(v3);
  }
  while ( dword_106960F0 )
  {
    v4 = *(_DWORD *)(dword_106960E8 + 4);
    *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4) = *(_DWORD *)(v4 + 4);
    *(_DWORD *)(*(_DWORD *)(v4 + 4) + 8) = *(_DWORD *)(v4 + 8);
    --dword_106960F0;
    sub_10184660(v4);
  }
  *(_DWORD *)(this + 252) |= 0x410u;
  v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  sub_10235710((_DWORD *)(this + 12), v5);
  sub_10001FA0();
  sub_1013BC90();
  sub_10112C00(this + 320, 1);
  sub_100E0970(this, v6, 0, 0);
  result = this;
  if ( *(_BYTE *)(this + 853) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 853) = 0;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 853);
      *(_BYTE *)(this + 853) = 0;
      return this;
    }
  }
  return result;
}
