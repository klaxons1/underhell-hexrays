int __thiscall sub_10285B40(_DWORD *this)
{
  _DWORD *v1; // edi
  int *v2; // esi
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  char *v6; // eax

  v1 = this + 3;
  if ( !sub_10237CC0(this + 3) )
    return 0;
  v2 = (int *)dword_1047CA70;
  v3 = sub_10237CC0(v1);
  v4 = *v2;
  v5 = v3;
  v6 = sub_10278FB0();
  return (*(int (__thiscall **)(int *, int, char *))(v4 + 216))(v2, v5, v6);
}
