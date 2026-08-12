int __usercall sub_1010C180@<eax>(int a1@<ebx>, int *a2, int a3, float a4, int a5)
{
  int result; // eax
  int v6; // ebx
  int v7; // edx
  int (__thiscall *v8)(int); // eax
  const char *v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD v14[4]; // [esp+0h] [ebp-10h] BYREF

  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, a3);
  if ( result )
  {
    v6 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10436250 + 152))(
           dword_10436250,
           *(_DWORD *)(result + 8),
           a1);
    while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) )
    {
      v7 = *(_DWORD *)v6;
      *(float *)&v14[2] = a4;
      v14[1] = a5;
      v8 = *(int (__thiscall **)(int))(v7 + 4);
      v14[0] = &CBreakParser::`vftable';
      v9 = (const char *)v8(v6);
      if ( !_stricmp(v9, "break") )
      {
        v10 = a2[3];
        v11 = a2[1];
        if ( v10 + 1 > v11 )
          sub_1010BA80(a2, v10 - v11 + 1);
        ++a2[3];
        v12 = *a2;
        v13 = a2[3] - v10 - 1;
        a2[4] = *a2;
        if ( v13 > 0 )
          memcpy((void *)(1068 * v10 + v12 + 1068), (const void *)(1068 * v10 + v12), 1068 * v13);
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v6 + 28))(v6, *a2 + 1068 * v10, v14);
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 36))(v6);
      }
    }
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436250 + 156))(dword_10436250);
  }
  return result;
}
