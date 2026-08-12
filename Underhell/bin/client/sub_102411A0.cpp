void __userpurge sub_102411A0(unsigned int *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax

  v4 = (*(int (__thiscall **)(unsigned int *))*a1)(a1);
  if ( sub_10236A90(a2, v4) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 532))(a1) )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 288))(a1)
        || (v5 = sub_10240220(a1 + 33),
            !(*(unsigned __int8 (__thiscall **)(int, int, unsigned int *))(*(_DWORD *)v5 + 88))(v5, a3, a1)) )
      {
        (*(void (__thiscall **)(unsigned int *, int))(*a1 + 476))(a1, a3);
      }
    }
    else
    {
      v6 = (_DWORD *)sub_10229D00(32);
      if ( v6 )
      {
        v7 = sub_1022B1A0(v6, (int)"KeyCodeReleased", "code", a3);
        sub_10236860(a1, v7);
      }
      else
      {
        sub_10236860(a1, 0);
      }
    }
  }
}
