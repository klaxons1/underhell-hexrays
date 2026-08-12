int __thiscall sub_10062040(int this, int a2)
{
  int result; // eax
  int v4; // eax
  char *v5; // eax
  _BYTE *v6; // eax
  char Destination[512]; // [esp+8h] [ebp-200h] BYREF

  result = sub_1003CD40((_DWORD *)this, a2);
  *(_BYTE *)(this + 2065) |= 4u;
  if ( !a2 )
  {
    v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, *(_DWORD *)(this + 1244));
    if ( v4 )
    {
      v5 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v4);
      sub_102282F0(Destination, v5, 0x200u);
      v6 = (_BYTE *)sub_10227FA0(Destination, ".vmt");
      if ( v6 )
      {
        *v6 = 0;
        return sub_10060680((_DWORD *)(this - 8), (int)Destination);
      }
    }
    else
    {
      sub_102282F0(Destination, "asdf", 0x200u);
    }
    return sub_10060680((_DWORD *)(this - 8), (int)Destination);
  }
  return result;
}
