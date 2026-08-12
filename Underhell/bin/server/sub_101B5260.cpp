int __usercall sub_101B5260@<eax>(int a1@<edi>, int a2)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 316))(a1);
  v3 = 0;
  while ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2) )
  {
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 8))(v2, 1);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 68))(v4) == a2 )
      ++v3;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 48))(v2);
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 320))(a1, v2);
  return v3;
}
