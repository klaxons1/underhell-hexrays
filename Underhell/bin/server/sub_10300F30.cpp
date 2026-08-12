unsigned __int8 __thiscall sub_10300F30(int this)
{
  int v2; // eax
  int v3; // edi
  unsigned __int8 result; // al

  sub_10093FD0((int *)this);
  v2 = sub_101C5260((_DWORD *)this);
  v3 = v2;
  if ( v2
    && ((*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 320) + 48))(v2 + 320) & 0x10) != 0
    && (*(_BYTE *)(this + 256) & 1) != 0
    && (*(_DWORD *)(this + 192) & 0x20) == 0
    && (*(_DWORD *)(v3 + 192) & 0x20) == 0 )
  {
    sub_10023CB0((char *)this, 74);
  }
  else
  {
    sub_10023E00((char *)this, 74);
  }
  if ( !sub_100697A0((_DWORD *)this, 92, 1)
    && !sub_100697A0((_DWORD *)this, 91, 1)
    && !sub_100697A0((_DWORD *)this, 93, 1)
    && !sub_100697A0((_DWORD *)this, 78, 1)
    && (*(_DWORD *)(this + 192) & 0x20) == 0
    && !*(_BYTE *)(this + 224)
    && *(_BYTE *)(this + 447) > 1u )
  {
    sub_10023CB0((char *)this, 78);
  }
  result = sub_100697A0((_DWORD *)this, 99, 1);
  if ( result )
    return (unsigned __int8)sub_10023E00((char *)this, 67);
  return result;
}
