char *__thiscall sub_102A0290(void *this)
{
  char *result; // eax
  int (*v3)(void); // edx
  int v4; // eax
  int v5; // eax
  int (*v6)(void); // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  result = (char *)*((_DWORD *)this + 4);
  if ( result == (char *)2 || result == (char *)1 )
  {
    if ( *((_DWORD *)this + 26) == 2 )
    {
      v6 = *(int (**)(void))(*(_DWORD *)this + 52);
      *((_DWORD *)this + 26) = 0;
      v7 = v6();
      v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100001);
      sub_10023E00(*((char **)this + 1), v8);
      v9 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
      v10 = sub_1007DB30((_DWORD *)(v9 + 52), 100002);
      return sub_10023E00(*((char **)this + 1), v10);
    }
  }
  else
  {
    v3 = *(int (**)(void))(*(_DWORD *)this + 52);
    *((_DWORD *)this + 26) = 1;
    v4 = v3();
    v5 = sub_1007DB30((_DWORD *)(v4 + 52), 100001);
    return sub_10023CB0(*((char **)this + 1), v5);
  }
  return result;
}
