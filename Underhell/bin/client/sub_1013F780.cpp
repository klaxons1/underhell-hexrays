int __usercall sub_1013F780@<eax>(int a1@<edi>)
{
  int v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // eax

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v1 + 24))(v1, a1);
  v2 = *(_DWORD *)v1;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 12))(a1, v3);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, int))(v2 + 152))(v1, 0, 0, v4);
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
}
