void __thiscall sub_1013A300(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax
  char *v5; // eax
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 840);
  if ( v2 )
  {
    v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
    v4 = __RTDynamicCast(
           (int)v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseFilter `RTTI Type Descriptor',
           0);
    if ( v4 )
      *(_DWORD *)(this + 844) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    else
      *(_DWORD *)(this + 844) = -1;
  }
  v5 = *(char **)(this + 212);
  if ( !v5
    || ((v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0)) == 0
      ? (*(_DWORD *)(this + 804) = -1)
      : (*(_DWORD *)(this + 804) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6)),
        (v7 = *(_DWORD *)(this + 804), v7 == -1)
     || (v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 1],
         v9 = v7 >> 12,
         off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v9)
     || !*v8
     || (off_1061BE18[4 * (*(_DWORD *)(this + 804) & 0xFFF) + 2] != v9 ? (v10 = 0) : (v10 = *v8), !*(_DWORD *)(v10 + 24))) )
  {
    *(_DWORD *)(this + 804) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  }
  sub_1013A160((void *)this);
}
