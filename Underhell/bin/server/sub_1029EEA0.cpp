char *__thiscall sub_1029EEA0(void *this)
{
  char *result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  result = (char *)*((_DWORD *)this + 4);
  if ( !result || result == (char *)2 )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
    v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100001);
    sub_10024230(*((char **)this + 1), v4);
    v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
    v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100002);
    sub_10024230(*((char **)this + 1), v6);
    v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
    v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100006);
    return sub_10024230(*((char **)this + 1), v8);
  }
  return result;
}
