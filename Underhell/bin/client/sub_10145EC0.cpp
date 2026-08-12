int __usercall sub_10145EC0@<eax>(int result@<eax>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, unsigned int a5, char a6)
{
  unsigned int v6; // ecx
  int *v7; // esi
  void (__thiscall *v8)(int *, _BYTE *, int, int, int); // edx
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // esi
  int v15; // eax
  int v16; // edi
  _BYTE v20[12]; // [esp+0h] [ebp-1Ch] BYREF
  int i; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  float *v23; // [esp+14h] [ebp-8h]
  bool v24; // [esp+18h] [ebp-4h]

  v6 = result;
  for ( i = result; v6 < a5; i = v6 )
  {
    v7 = *(int **)v6;
    if ( *(_DWORD *)v6 )
    {
      v8 = *(void (__thiscall **)(int *, _BYTE *, int, int, int))(*v7 + 56);
      v24 = *(_WORD *)(v6 + 6) != 0;
      v8(v7, v20, a3, a4, a2);
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, v20);
      v9 = 1;
      if ( v24 )
        v9 = 9;
      if ( a6 )
        v9 |= 0x40000000u;
      if ( *(_DWORD *)(dword_1043BE8C + 48) && (v23 = (float *)(*(int (__thiscall **)(int *))(*v7 + 152))(v7)) != 0 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
        v11 = v10;
        v22 = v10;
        if ( v10 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C) )
          sub_10145090(v23, v7, v11, (int)v7);
        else
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)v11 + 504))(v11, v23);
        v12 = (*(int (__thiscall **)(int *))*v7)(v7);
        v13 = *(_DWORD *)dword_10439968;
        a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 28))(v12);
        (*(void (__thiscall **)(int))(v13 + 116))(dword_10439968);
        a4 = v9;
        (*(void (__thiscall **)(int *))(*v7 + 40))(v7);
        a3 = 0;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 248))(dword_1047C96C);
        v14 = v22;
        if ( !(_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 508))(v22);
        if ( v14 )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
        }
      }
      else
      {
        v15 = (*(int (__thiscall **)(int *))*v7)(v7);
        v16 = *(_DWORD *)dword_10439968;
        a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 28))(v15);
        (*(void (__thiscall **)(int))(v16 + 116))(dword_10439968);
        a4 = v9;
        (*(void (__thiscall **)(int *))(*v7 + 40))(v7);
        a3 = 0;
        result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 116))(dword_10439968);
      }
    }
    v6 = i + 12;
  }
  return result;
}
