void __thiscall sub_1002F9F0(int this, int a2)
{
  int v3; // ebx
  int v4; // ecx
  float *v5; // edx
  bool v6; // dl
  int v7; // esi
  float *v8; // ecx
  int v9; // esi
  int v10; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-8h] BYREF
  bool v12; // [esp+1Fh] [ebp+Bh]

  sub_1003DBB0(a2);
  v3 = this - 8;
  if ( *(_BYTE *)(this + 1752) )
  {
    if ( *(float *)(this + 1856) != *(float *)(v3 + 1816) )
    {
      *(float *)(v3 + 1816) = *(float *)(this + 1856);
      sub_1000F6C0(this - 8, 8);
    }
    if ( *(_DWORD *)(v3 + 1304) == -1 )
    {
      v11[0] = this - 8;
      v11[1] = 0;
      *(_DWORD *)(v3 + 1304) = sub_100F9FF0(dword_104037AC, v11);
      sub_10029560((_DWORD *)(this - 8));
    }
  }
  else
  {
    sub_1002A400((_DWORD *)(this - 8));
  }
  v12 = 0;
  v4 = 0;
  v5 = (float *)(this + 1676);
  do
  {
    if ( v12 )
      break;
    v12 = *v5 != v5[15];
    ++v4;
    ++v5;
  }
  while ( v4 < 4 );
  v6 = 0;
  v7 = 0;
  v8 = (float *)(this + 1396);
  while ( !v6 )
  {
    if ( *v8 != v8[35] || v8[1] != v8[36] || v8[2] != v8[37] || v8[3] != v8[38] || v8[4] != v8[39] )
    {
      v6 = 1;
      break;
    }
    v6 = v8[5] != v8[40];
    v7 += 6;
    v8 += 6;
    if ( v7 >= 24 )
      break;
  }
  if ( *(float *)(this + 1808) != *(float *)(this + 1856)
    || *(_DWORD *)(this + 1860) != *(_DWORD *)(this + 1800)
    || v12
    || v6 )
  {
    sub_1000F6C0(this - 8, 8);
    if ( *(_BYTE *)(this + 1752) )
      sub_10029560((_DWORD *)(this - 8));
  }
  if ( *(_DWORD *)(this + 1756) != *(_DWORD *)(this + 1764) )
  {
    v9 = dword_1047CA8C;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    if ( !*(_DWORD *)(v3 + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(v3 + 4) + 36))(v3 + 4) )
      sub_10026520(this - 8);
    v10 = *(_DWORD *)(v3 + 1940);
    if ( v10 && *(_DWORD *)v10 && (*(_BYTE *)(*(_DWORD *)v10 + 152) & 0x10) == 0 )
      (*(void (__thiscall **)(int))(*(_DWORD *)(this + 1812) + 20))(this + 1812);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
  }
}
