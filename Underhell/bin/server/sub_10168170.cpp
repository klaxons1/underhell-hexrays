char *__thiscall sub_10168170(int this)
{
  char *result; // eax
  char *v3; // esi
  int v4; // eax
  int v5; // ecx
  int (__thiscall *v6)(int, _DWORD *, _DWORD, _DWORD); // edx
  _DWORD v7[3]; // [esp+8h] [ebp-Ch] BYREF

  sub_100E38F0((float *)this);
  result = sub_100D8070((_DWORD *)this);
  v3 = result;
  if ( result )
  {
    *(_DWORD *)(this + 920) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
    if ( (*((_DWORD *)v3 + 63) & 0x800) != 0 )
      sub_100DAE60((int)v3);
    v4 = *((_DWORD *)v3 + 146);
    v5 = *((_DWORD *)v3 + 147);
    v7[0] = *((_DWORD *)v3 + 145);
    v6 = *(int (__thiscall **)(int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)this + 416);
    v7[1] = v4;
    v7[2] = v5;
    return (char *)v6(this, v7, 0, 0);
  }
  return result;
}
