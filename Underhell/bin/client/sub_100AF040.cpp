int __thiscall sub_100AF040(int this)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  char v6; // al
  int result; // eax
  _DWORD *v8; // edi
  int v9; // [esp+Ch] [ebp-4h]

  *(_BYTE *)(this + 2474) = 1;
  ((void (__thiscall *)(int (***)()))(*off_103E0700)[5])(off_103E0700);
  if ( !((unsigned __int8 (__thiscall *)(int (***)()))**off_103E0700)(off_103E0700)
    && ((unsigned __int8 (__thiscall *)(int (***)()))(*off_103E0700)[3])(off_103E0700) )
  {
    v2 = *(int **)(this + 2592);
    v3 = *v2;
    v9 = *v2;
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 388))(dword_1041315C);
    sub_1022ACA0("appid", v4);
    if ( *(int *)(this + 2432) <= 0 )
    {
      v6 = 0;
    }
    else
    {
      if ( sub_10229D00(32) )
        v5 = sub_10229D20("playtime");
      else
        v5 = 0;
      sub_1022ACA0("TotalLevelTime", (int)*(float *)(this + 2428));
      sub_1022ACA0("NumLevels", *(_DWORD *)(this + 2432));
      sub_1022A7C0(v5);
      v3 = v9;
      v6 = 1;
    }
    *((_BYTE *)v2 + 4) |= v6;
    *((_BYTE *)v2 + 4) |= ((int (__thiscall *)(int (***)(), int, int))(*off_103E0700)[1])(off_103E0700, v3, 1);
    sub_100AED80((_DWORD *)this);
  }
  result = dword_1042EA64;
  if ( dword_1042EA64 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_10413188 + 4) + 12))(
               dword_10413188 + 4,
               dword_1042EA64);
    dword_1042EA64 = 0;
  }
  if ( *(_DWORD *)(this + 2592) )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1041315C + 472))(dword_1041315C, 0);
    v8 = *(_DWORD **)(this + 2592);
    if ( v8 )
    {
      if ( *v8 )
      {
        sub_1022AF00(*v8);
        *v8 = 0;
      }
      result = sub_10034930((int)v8);
    }
    *(_DWORD *)(this + 2592) = 0;
  }
  return result;
}
