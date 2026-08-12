int __thiscall sub_10148FC0(int this)
{
  int result; // eax
  int v3; // edi
  char Buffer[512]; // [esp+1Ch] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 448))(this) )
    {
      sub_10429A00(Buffer, 0x200u, "Health: %i", *(_DWORD *)(this + 220));
      sub_100D5DE0((_DWORD *)this, v3++, (int)Buffer, 0.0, 255, 255, 255, 255);
    }
    if ( *(_DWORD *)(this + 952) )
    {
      sub_10429A00(Buffer, 0x200u, "Base PropData: %s", *(_DWORD *)(this + 952));
      sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v3 + 1;
    }
    else
    {
      return v3;
    }
  }
  return result;
}
