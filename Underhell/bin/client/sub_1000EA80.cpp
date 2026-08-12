char __usercall sub_1000EA80@<al>(int a1@<ecx>, int a2@<edi>)
{
  int v2; // edi
  int v3; // eax
  int v5; // eax

  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 280))(a1) & 0x10) != 0 )
  {
    LOBYTE(v5) = 0;
  }
  else if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 276))(a1) == 1
         || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 276))(a1) == 6
         || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 276))(a1) == 2 )
  {
    LOBYTE(v5) = 1;
  }
  else
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 276))(a1);
    if ( v5 != 1 )
    {
      v2 = *(_DWORD *)dword_10413178;
      v3 = sub_10034480(a1, a2);
      (*(void (__thiscall **)(int, int))(v2 + 4))(dword_10413178, v3);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 276))(a1) != 6
        || (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178), v5 != 1) )
      {
        LOBYTE(v5) = 0;
      }
    }
  }
  return v5;
}
