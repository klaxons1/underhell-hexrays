int __thiscall sub_100C6890(int this)
{
  int v1; // edi
  int v3; // ecx
  _DWORD *v4; // ebx
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebx
  int v13; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]
  int v15; // [esp+10h] [ebp-4h]

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(this + 1132); ++i )
  {
    *(_DWORD *)(v1 + *(_DWORD *)(this + 1120) + 72) = this;
    v3 = *(_DWORD *)(this + 1120);
    if ( (*(_BYTE *)(v1 + v3) & 1) == 0 )
    {
      v4 = (_DWORD *)(v1 + v3 + 60);
      if ( *v4 != 15 )
      {
        v5 = *(_DWORD *)(v1 + v3 + 72);
        if ( v5 )
        {
          if ( *(_BYTE *)(v5 + 84) )
          {
            *(_BYTE *)(v5 + 88) |= 1u;
          }
          else
          {
            v6 = *(_DWORD **)(v5 + 24);
            if ( v6 )
            {
              *v6 |= 0x101u;
              *(_WORD *)(sub_10153460(v6) + 2) = 0;
            }
          }
        }
        *v4 = 15;
      }
    }
    v1 += 76;
  }
  v7 = 0;
  v15 = 0;
  if ( *(int *)(this + 1132) > 0 )
  {
    v13 = 0;
    do
    {
      v8 = *(_DWORD *)(this + 1120);
      if ( (*(_BYTE *)(v7 + v8) & 1) != 0 && (*(_BYTE *)(v7 + v8) & 8) != 0 )
        goto LABEL_24;
      v9 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
        sub_100BD750((volatile signed __int32 *)this);
      v10 = *(_DWORD **)(this + 1100);
      if ( v10 && *v10 )
        v11 = *(_DWORD *)(this + 1100);
      else
        v11 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
      if ( v11 )
      {
        if ( !sub_100BE590(this, *(_DWORD *)(v13 + *(_DWORD *)(this + 1120) + 8)) )
LABEL_24:
          sub_100C6520((_DWORD *)this, v15);
      }
      v7 = v13 + 76;
      ++v15;
      v13 += 76;
    }
    while ( v15 < *(_DWORD *)(this + 1132) );
  }
  return sub_100C1080(this);
}
