int __thiscall sub_1038AFD0(int this, int a2, int a3)
{
  int v4; // edi
  int v6; // eax
  int v7; // ecx

  if ( (_BYTE)a3 || !*(_BYTE *)(this + 4181) )
    goto LABEL_12;
  if ( *(float *)(this + 5192) > 90.0 && *(float *)(this + 5192) < 270.0 )
  {
    v4 = dword_106E9D24;
    if ( sub_100BDCE0(this, dword_106E9D24) != -1 )
      return v4;
  }
  v6 = *(_DWORD *)(this + 1744);
  if ( (v6 == 2 || v6 == 6 || v6 == 7) && sub_100BDCE0(this, 119) != -1 )
    return 119;
LABEL_12:
  v7 = *(_DWORD *)(this + 3624);
  if ( v7 )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 232))(v7, a2, a3);
  else
    return sub_1001F610((_DWORD *)this, a2, a3);
}
