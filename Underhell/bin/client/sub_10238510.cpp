int __userpurge sub_10238510@<eax>(int a1@<edi>, int a2, int a3)
{
  int v3; // eax
  _BYTE *v4; // esi
  int *v5; // ebx
  int result; // eax
  int v7; // edi

  v3 = (*(int (__cdecl **)(int))(a3 + 20))(a2);
  v4 = *(_BYTE **)(a3 + 12);
  v5 = (int *)v3;
  result = -1;
  if ( v4 && *v4 )
  {
    v7 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_1047CA6C + 112))(dword_1047CA6C, v4, a1);
    if ( v7 == -1 )
      v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    result = (*(int (__thiscall **)(int, int, _BYTE *, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
               dword_1047CA6C,
               v7,
               v4,
               0);
    *v5 = v7;
  }
  else
  {
    *v5 = -1;
  }
  return result;
}
