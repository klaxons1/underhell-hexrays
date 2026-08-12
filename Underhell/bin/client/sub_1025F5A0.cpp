void __userpurge sub_1025F5A0(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4)
{
  bool v5; // zf
  int v6; // eax

  if ( a1[238] && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 204))(a1) )
  {
    v5 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 296))(a1) == 0;
    v6 = *a1;
    if ( v5 )
    {
      (*(void (__thiscall **)(_DWORD *))(v6 + 1128))(a1);
    }
    else if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(v6 + 924))(a1) )
    {
      sub_10251920((int)a1, a2, a3, a4);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 1128))(a1);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 48))(a1, 0);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 1136))(a1);
    }
  }
}
