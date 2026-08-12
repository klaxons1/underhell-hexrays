void __thiscall sub_10182D60(unsigned int this, int *a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // esi
  char *v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebx
  int v10; // ebx
  char *v11; // [esp-Ch] [ebp-80h]
  _BYTE v12[84]; // [esp+10h] [ebp-64h] BYREF
  int i; // [esp+64h] [ebp-10h] BYREF
  int *v14; // [esp+68h] [ebp-Ch]
  int v15; // [esp+6Ch] [ebp-8h]
  BOOL v16; // [esp+70h] [ebp-4h]

  v2 = *a2;
  v15 = 0;
  v14 = 0;
  if ( !*(_DWORD *)(this + 800) || (unsigned __int8)sub_10260340(*(char **)(this + 800), v2) )
  {
    v4 = 1;
    for ( i = 1; v4 <= *(_DWORD *)(dword_106B31C8 + 20); i = v4 )
    {
      v5 = sub_1025FB50(v4);
      v6 = v5;
      if ( v5 )
      {
        v16 = (*(_BYTE *)(v5 + 256) & 2) != 0;
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        v11 = sub_10073730(v16);
        v7 = sub_10073710(v16);
        sub_10265810(v6 + 580, v6 + 580, v7, v11, this, 0, v12);
        if ( v12[55] )
        {
          ++v15;
          v8 = (_DWORD *)(this + 804);
        }
        else
        {
          v14 = (int *)((char *)v14 + 1);
          v8 = (_DWORD *)(this + 828);
        }
        sub_1010DD80(v8, __SPAIR64__(this, v6), 0.0);
      }
      v4 = i + 1;
    }
    v9 = *a2;
    i = v15;
    sub_1010C270((float *)(this + 852), 5, (__int16 *)&i);
    sub_1010DA50(
      (_DWORD *)(this + 852),
      *(_DWORD *)(this + 852),
      *(_DWORD *)(this + 856),
      *(_DWORD *)(this + 860),
      *(_DWORD *)(this + 864),
      *(_DWORD *)(this + 868),
      __SPAIR64__(this, v9),
      0.0);
    v10 = *a2;
    a2 = v14;
    sub_1010C270((float *)(this + 876), 5, (__int16 *)&a2);
    sub_1010DA50(
      (_DWORD *)(this + 876),
      *(_DWORD *)(this + 876),
      *(_DWORD *)(this + 880),
      *(_DWORD *)(this + 884),
      *(_DWORD *)(this + 888),
      *(_DWORD *)(this + 892),
      __SPAIR64__(this, v10),
      0.0);
  }
}
