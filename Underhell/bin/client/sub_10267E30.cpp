int __usercall sub_10267E30@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax

  result = a1[79];
  if ( *(_DWORD *)(result + 320) )
  {
    if ( !*((_BYTE *)a1 + 320) || (v5 = sub_1022A800((_DWORD *)a1[78], "imageSelected", 0)) == 0 )
      v5 = sub_1022A800((_DWORD *)a1[78], "image", 0);
    if ( (unsigned __int8)sub_10279000(v5) )
    {
      v6 = *a1;
      v7 = sub_10279020(v5);
      (*(void (__thiscall **)(int *, _DWORD, int, _DWORD, int))(v6 + 836))(a1, 0, v7, 0, a2);
    }
    else
    {
      v8 = *a1;
      v9 = sub_10279020(1);
      (*(void (__thiscall **)(int *, _DWORD, int, _DWORD, int))(v8 + 836))(a1, 0, v9, 0, a3);
    }
    (*(void (__thiscall **)(int *))(*a1 + 872))(a1);
    return (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a1 + 244))(a1, 0, 0);
  }
  return result;
}
