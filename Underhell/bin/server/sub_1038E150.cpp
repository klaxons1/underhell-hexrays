int __thiscall sub_1038E150(int this, int a2)
{
  int v4; // ecx
  int v5; // eax
  int v6; // edi

  if ( (*(_DWORD *)(this + 256) & 0x8000000) != 0 && a2 == 11 )
    return 127;
  if ( a2 == dword_106E9D18 && *(int *)(this + 4364) >= 3 )
    return 64;
  v4 = *(_DWORD *)(this + 3624);
  if ( v4 )
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 136))(v4, a2);
  else
    v5 = sub_1002CC40((_DWORD *)this, a2);
  v6 = v5;
  if ( *(_BYTE *)(this + 4180) && v5 == 1 && (*(_DWORD *)(this + 2324) == 3 || sub_10389BD0((_DWORD *)this)) )
    return 76;
  return v6;
}
