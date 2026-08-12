int __thiscall sub_101E3250(int this, _DWORD *a2)
{
  char v4; // bl
  int v5; // eax
  int v6; // eax
  int result; // eax
  const char *v8; // [esp+14h] [ebp+8h]

  sub_100CE0A0((_DWORD *)this, (int)a2);
  v4 = (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 192))(dword_106B3CDC, this, a2);
  if ( !v4 )
  {
    v5 = sub_100CF460((_DWORD *)this);
    if ( (_DWORD *)sub_103FA8C0(v5) == a2 )
    {
      v8 = (const char *)a2[23];
      if ( !v8 )
        v8 = String;
      v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 856))(a2);
      if ( sub_100CF660((_DWORD *)this, (int)v8, v6) )
        v4 = 1;
    }
  }
  result = (*(int (__thiscall **)(_DWORD *))(*a2 + 876))(a2);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*a2 + 1248))(a2);
    if ( result == 1 )
    {
      *(_BYTE *)(this + 3371) = 1;
    }
    else
    {
      result = (*(int (__thiscall **)(_DWORD *))(*a2 + 1248))(a2);
      if ( result == 4 )
        *(_BYTE *)(this + 3372) = 1;
    }
  }
  if ( v4 )
    return (*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)this + 964))(this, a2, 0);
  return result;
}
