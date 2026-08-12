int __thiscall sub_1017DDF0(int this)
{
  char *v2; // eax
  int i; // edi
  int v4; // ebx
  char *v5; // eax
  _DWORD *j; // edi
  int v7; // ebx
  int result; // eax
  unsigned int v9; // edi
  int *v10; // ecx

  *(_DWORD *)(this + 1080) = 0;
  memset((void *)(this + 800), 0, 0x80u);
  sub_100EC3F0((_DWORD *)this, (int)nullsub_4, 0.0, 0);
  v2 = *(char **)(this + 260);
  if ( !v2 )
    v2 = (char *)String;
  for ( i = sub_1012BD10(&dword_1069E3E0, 0, v2); i; i = sub_1012BD10(&dword_1069E3E0, i, v5) )
  {
    v4 = *(_DWORD *)(this + 1080);
    if ( v4 >= 32 )
      break;
    if ( i )
    {
      *(_DWORD *)(this + 1080) = v4 + 1;
      *(_DWORD *)(this + 4 * v4 + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)i + 8))(i);
    }
    v5 = *(char **)(this + 260);
    if ( !v5 )
      v5 = (char *)String;
  }
  for ( j = sub_1012BC90(&dword_1069E3E0, 0, "multi_manager"); j; j = sub_1012BC90(
                                                                        &dword_1069E3E0,
                                                                        (int)j,
                                                                        "multi_manager") )
  {
    if ( *(int *)(this + 1080) >= 32 )
      break;
    if ( j && (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*j + 316))(j, *(_DWORD *)(this + 260)) )
    {
      v7 = *(_DWORD *)(this + 1080);
      *(_DWORD *)(this + 1080) = v7 + 1;
      *(_DWORD *)(this + 4 * v7 + 800) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*j + 8))(j);
    }
  }
  result = *(_DWORD *)(this + 248);
  v9 = result & 0xFFFFFFFE;
  if ( result != (result & 0xFFFFFFFE) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 248) = v9;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        result = sub_100194B0(v10, 248);
      *(_DWORD *)(this + 248) = v9;
    }
  }
  return result;
}
