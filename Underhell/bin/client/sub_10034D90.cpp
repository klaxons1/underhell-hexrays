char *__thiscall sub_10034D90(void *this)
{
  int *v2; // ebx
  int v3; // esi
  int v4; // eax
  _BYTE *v5; // eax
  type_info *v7; // eax
  char *v8; // eax

  byte_10404FC0 = 0;
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this)
    && (v2 = (int *)sub_100797E0(),
        v3 = *v2,
        v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this),
        (v5 = (_BYTE *)(*(int (__thiscall **)(int *, _DWORD))(v3 + 8))(v2, *(_DWORD *)(v4 + 8))) != 0)
    && *v5 )
  {
    sub_10228370(&byte_10404FC0, 0x100u, "%s", (char)v5);
    return &byte_10404FC0;
  }
  else
  {
    v7 = (type_info *)__RTtypeid(this);
    v8 = (char *)type_info::name(v7, (struct __type_info_node *)&unk_10481AF0);
    sub_102282F0(&byte_10404FC0, v8, 0x100u);
    return &byte_10404FC0;
  }
}
