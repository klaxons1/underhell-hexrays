_DWORD *__thiscall sub_102ADF80(int *this)
{
  _DWORD *v1; // esi
  _DWORD *result; // eax
  int i; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // [esp+Ch] [ebp-4h]

  v1 = this + 3;
  this[6] = 0;
  if ( this[5] >= 0 )
  {
    if ( *v1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v1);
      *v1 = 0;
    }
    v1[1] = 0;
  }
  v1[4] = *v1;
  result = sub_1012BC90(&dword_1069E3E0, 0, "npc_antlion_template_maker");
  for ( i = (int)result; result; i = (int)result )
  {
    v9 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)i + 8))(i);
    v4 = v1[3];
    v5 = v1[1];
    if ( v4 + 1 > v5 )
      sub_102ABFC0(v1, v4 - v5 + 1);
    ++v1[3];
    v6 = *v1;
    v7 = v1[3] - v4 - 1;
    v1[4] = *v1;
    if ( v7 > 0 )
      memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
    v8 = (_DWORD *)(*v1 + 4 * v4);
    if ( v8 )
      *v8 = v9;
    result = sub_1012BC90(&dword_1069E3E0, i, "npc_antlion_template_maker");
  }
  return result;
}
