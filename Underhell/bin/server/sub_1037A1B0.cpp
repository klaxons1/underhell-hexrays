int __thiscall sub_1037A1B0(int this, int a2)
{
  int v2; // ebx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  _DWORD *v10; // edi
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  char v15; // dl
  const char *v16; // ecx
  int v17; // eax
  const char *v18; // eax
  int v19; // eax
  const char *v20; // eax
  int v21; // eax
  int i; // edi
  int v23; // ecx
  const char *v25; // [esp+14h] [ebp-14h]
  const char *v26; // [esp+14h] [ebp-14h]
  _DWORD *v27; // [esp+24h] [ebp-4h]

  v2 = a2;
  *(_DWORD *)(this + 4184) = *(_DWORD *)(a2 + 64);
  if ( sub_10050FC0((_DWORD *)(this + 4292)) )
  {
    v25 = *(const char **)(this + 92);
    v4 = sub_10050FC0((_DWORD *)(this + 4292));
    if ( sub_100538F0(v4, v25) == 1 )
    {
      v5 = sub_10050FC0((_DWORD *)(this + 4292));
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 1616))(v5);
      v6 = *(_DWORD *)(a2 + 44);
      if ( v6 != -1 )
      {
        v7 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
        v8 = v6 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v8 )
        {
          if ( *v7 )
          {
            v9 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v8 ? *v7 : 0;
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
            {
              v10 = (_DWORD *)sub_10050FC0((_DWORD *)(this + 4292));
              v27 = v10;
              v11 = sub_10261B20();
              if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
                sub_100DAE60(v11);
              v12 = *v10;
              v13 = sub_10261B20();
              (*(void (__thiscall **)(_DWORD *, int, int, int))(v12 + 1876))(v27, v13, v11 + 580, this);
              v2 = a2;
            }
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(v2 + 64) & 0x10) != 0 )
  {
    v14 = *(_DWORD *)(this + 2796);
    v15 = 0;
    if ( v14 && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4240) <= -0.001 )
    {
      ++*(_DWORD *)(v14 + 92);
      v15 = 1;
    }
    if ( *(_DWORD *)(dword_106E906C + 48) )
    {
      v16 = String;
      if ( !v15 )
        v16 = " not";
      v26 = v16;
      v17 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
              dword_106B31D0,
              *(_DWORD *)(this + 24));
      Msg("Hunter %d was%s run down\n", v17, v26);
    }
    v18 = (const char *)dword_106E8508;
    if ( !dword_106E8508 )
      v18 = String;
    v19 = sub_101679A0((int)v18);
    if ( sub_10167A30(v19) > 0 )
    {
      v20 = (const char *)dword_106E8508;
      if ( !dword_106E8508 )
        v20 = String;
      v21 = sub_101679A0((int)v20);
      sub_10167910(v21, -1);
    }
  }
  sub_100EC3F0((_DWORD *)this, 0, 0.0, off_10674250);
  sub_101AB0C0(this);
  for ( i = 0; i < *(_DWORD *)(this + 3640); ++i )
  {
    v23 = *(_DWORD *)(*(_DWORD *)(this + 3628) + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v23 + 80))(v23, v2);
  }
  return sub_10035690(this, v2, i, v2);
}
