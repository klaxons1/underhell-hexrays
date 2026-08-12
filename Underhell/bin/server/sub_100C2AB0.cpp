void __thiscall sub_100C2AB0(int this)
{
  int *v2; // ebx
  int *v3; // ecx
  int v4; // edi
  _DWORD *v5; // eax
  int *v6; // ecx
  char v7; // di
  int v8; // edi
  int *v9; // ecx
  int v10; // edi
  int *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+14h] [ebp-4h]

  v2 = (int *)(this + 908);
  v13 = (_DWORD *)(this + 908);
  if ( *(_DWORD *)(this + 908) == -1 && *v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 908);
    }
    *v2 = 0;
  }
  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || (v14 = *(_DWORD *)(this + 1100), !*v5) )
    v14 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  *(float *)(this + 800) = ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)this + 740))(this, v14, *v2);
  *(_BYTE *)(this + 897) = sub_100BA270(v14, *v2) & 1;
  if ( *(_DWORD *)(this + 864) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 864);
    }
    *(float *)(this + 864) = 1.0;
  }
  v7 = *(_DWORD *)(this + 1028) + 1;
  *(float *)(this + 804) = 0.0;
  v8 = v7 & 7;
  *(_BYTE *)(this + 896) = 0;
  if ( *(_DWORD *)(this + 1028) != v8 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        sub_100194B0(v9, 1028);
    }
    *(_DWORD *)(this + 1028) = v8;
  }
  v10 = ((unsigned __int8)*(_DWORD *)(this + 1032) + 1) & 7;
  if ( *(_DWORD *)(this + 1032) != v10 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 1032);
    }
    *(_DWORD *)(this + 1032) = v10;
  }
  if ( v14 )
  {
    v12 = (_DWORD *)sub_10245550(*v13);
    sub_100BA720(v12);
  }
}
