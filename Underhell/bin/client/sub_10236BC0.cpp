void __userpurge sub_10236BC0(void *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax

  v4 = (**(int (__thiscall ***)(void *))a1)(a1);
  if ( sub_10236A90(a2, v4) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a1 + 532))(a1) )
    {
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)a1 + 464))(a1, a3);
    }
    else
    {
      v5 = (_DWORD *)sub_10229D00(32);
      if ( v5 )
      {
        v6 = sub_1022B1A0(v5, (int)"KeyCodePressed", "code", a3);
        sub_10236860(a1, v6);
      }
      else
      {
        sub_10236860(a1, 0);
      }
    }
  }
}
