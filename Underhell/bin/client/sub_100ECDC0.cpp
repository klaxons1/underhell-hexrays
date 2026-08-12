int __usercall sub_100ECDC0@<eax>(int a1@<edi>, int a2@<esi>)
{
  int result; // eax
  int v3; // eax
  int v4; // esi
  int v5; // edi

  result = dword_1043A1EC;
  if ( *(_DWORD *)(dword_1043A1EC + 48) )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1, a2);
    v4 = v3;
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
    v5 = sub_10116510();
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 444))(v4, v5, 0);
    dword_1043A1C8 = *((_DWORD *)off_103DC81C + 1);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 72))(v4, v5, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  return result;
}
