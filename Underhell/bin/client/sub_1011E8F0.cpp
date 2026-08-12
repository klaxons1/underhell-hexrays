_DWORD *__userpurge sub_1011E8F0@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, _DWORD *a4, unsigned int a5, char a6)
{
  _DWORD *result; // eax
  int v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  char v13; // al
  int v14; // esi
  int v15; // eax
  int v16; // edi
  _BYTE v20[12]; // [esp+0h] [ebp-14h] BYREF
  int v21; // [esp+Ch] [ebp-8h]
  int v22; // [esp+10h] [ebp-4h]

  for ( result = a4; (unsigned int)result < a5; a4 = result )
  {
    v7 = *a4;
    (*(void (__thiscall **)(_DWORD, _BYTE *, int, int, int))(*(_DWORD *)*a4 + 56))(*a4, v20, a2, a3, a1);
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v20);
    v8 = 1;
    if ( a6 )
      v8 = 1073741825;
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 152))(v7);
    if ( v21 )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v10 = v9;
      v22 = v9;
      if ( v9 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 504))(v10, v21);
      v11 = (**(int (__thiscall ***)(int))v7)(v7);
      v12 = *(_DWORD *)dword_10439968;
      a1 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 28))(v11);
      (*(void (__thiscall **)(int))(v12 + 116))(dword_10439968);
      a3 = v8;
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 40))(v7);
      a2 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C);
      v14 = v22;
      if ( !v13 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 508))(v22);
      if ( v14 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
      }
    }
    else
    {
      v15 = (**(int (__thiscall ***)(int))v7)(v7);
      v16 = *(_DWORD *)dword_10439968;
      a1 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 28))(v15);
      (*(void (__thiscall **)(int))(v16 + 116))(dword_10439968);
      a3 = v8;
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 40))(v7);
      a2 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
    }
    result = a4 + 3;
  }
  return result;
}
