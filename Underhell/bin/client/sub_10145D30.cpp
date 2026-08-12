int **__usercall sub_10145D30@<eax>(
        int **result@<eax>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        unsigned int a5,
        char a6)
{
  int *v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  char v12; // al
  int v13; // esi
  int v14; // eax
  int v15; // edi
  _BYTE v19[12]; // [esp+0h] [ebp-18h] BYREF
  int v20; // [esp+Ch] [ebp-Ch]
  float *v21; // [esp+10h] [ebp-8h]
  int **i; // [esp+14h] [ebp-4h]

  for ( i = result; (unsigned int)result < a5; i = result )
  {
    v6 = *i;
    (*(void (__thiscall **)(int *, _BYTE *, int, int, int))(**i + 56))(*i, v19, a3, a4, a2);
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v19);
    v7 = 1;
    if ( a6 )
      v7 = 1073741825;
    if ( *(_DWORD *)(dword_1043BE8C + 48) && (v21 = (float *)(*(int (__thiscall **)(int *))(*v6 + 152))(v6)) != 0 )
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v9 = v8;
      v20 = v8;
      if ( v8 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C) )
        sub_10145090(v21, v6, v9, (int)v6);
      else
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 504))(v9, v21);
      v10 = (*(int (__thiscall **)(int *))*v6)(v6);
      v11 = *(_DWORD *)dword_10439968;
      a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 28))(v10);
      (*(void (__thiscall **)(int))(v11 + 116))(dword_10439968);
      a4 = v7;
      (*(void (__thiscall **)(int *))(*v6 + 40))(v6);
      a3 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C);
      v13 = v20;
      if ( !v12 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v20 + 508))(v20);
      if ( v13 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 12))(v13);
        (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 4))(v13);
      }
    }
    else
    {
      v14 = (*(int (__thiscall **)(int *))*v6)(v6);
      v15 = *(_DWORD *)dword_10439968;
      a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 28))(v14);
      (*(void (__thiscall **)(int))(v15 + 116))(dword_10439968);
      a4 = v7;
      (*(void (__thiscall **)(int *))(*v6 + 40))(v6);
      a3 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
    }
    result = i + 3;
  }
  return result;
}
