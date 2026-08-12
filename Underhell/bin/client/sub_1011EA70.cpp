int __userpurge sub_1011EA70@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, int a4, unsigned int a5, char a6)
{
  int result; // eax
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // edi
  _BYTE v19[12]; // [esp+0h] [ebp-14h] BYREF
  int v20; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]
  bool v22; // [esp+1Ch] [ebp+8h]
  int v23; // [esp+1Ch] [ebp+8h]

  result = a4;
  v7 = a4;
  for ( i = a4; v7 < a5; i = v7 )
  {
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v22 = *(_WORD *)(v7 + 6) != 0;
      (*(void (__thiscall **)(int, _BYTE *, int, int, int))(*(_DWORD *)v8 + 56))(v8, v19, a2, a3, a1);
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v19);
      v9 = 1;
      if ( v22 )
        v9 = 9;
      if ( a6 )
        v9 |= 0x40000000u;
      v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 152))(v8);
      if ( v20 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
        v11 = v10;
        v23 = v10;
        if ( v10 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C) )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 504))(v11, v20);
        v12 = (**(int (__thiscall ***)(int))v8)(v8);
        v13 = *(_DWORD *)dword_10439968;
        a1 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 28))(v12);
        (*(void (__thiscall **)(int))(v13 + 116))(dword_10439968);
        a3 = v9;
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 40))(v8);
        a2 = 0;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C);
        if ( !(_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 508))(v23);
        if ( v23 )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 12))(v23);
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 4))(v23);
        }
      }
      else
      {
        v14 = (**(int (__thiscall ***)(int))v8)(v8);
        v15 = *(_DWORD *)dword_10439968;
        a1 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 28))(v14);
        (*(void (__thiscall **)(int))(v15 + 116))(dword_10439968);
        a3 = v9;
        (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 40))(v8);
        a2 = 0;
        result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
      }
    }
    v7 = i + 12;
  }
  return result;
}
