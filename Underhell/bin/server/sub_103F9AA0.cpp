char __cdecl sub_103F9AA0(int a1, float a2)
{
  int (__thiscall *v3)(int); // edx
  int v5; // esi
  int v6; // edi
  char v8; // [esp+13h] [ebp+Bh]

  v3 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 316);
  v8 = 0;
  v5 = v3(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) )
  {
    while ( 1 )
    {
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 1);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 40))(v6)
        || ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6) > a2 )
      {
        break;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 48))(v5);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) )
        goto LABEL_7;
    }
    v8 = 1;
  }
LABEL_7:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 320))(a1, v5);
  return v8;
}
