bool __usercall sub_10236A90@<al>(int a1@<ebx>, int a2)
{
  char v3; // bl
  int v4; // eax

  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 232))(dword_1047CA68) )
    return 1;
  v3 = 0;
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 232))(dword_1047CA68, a1);
  if ( !v4
    || (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 88))(dword_1047CA70, a2, v4) )
  {
    v3 = 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 240))(dword_1047CA68) )
    return v3;
  else
    return v3 == 0;
}
