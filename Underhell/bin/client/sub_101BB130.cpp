unsigned int __thiscall sub_101BB130(int this, int a2, char a3)
{
  unsigned int result; // eax
  int *v5; // ecx
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  v6[0] = a2;
  v6[1] = -1;
  result = (unsigned __int16)sub_101BA800((_WORD *)(this + 8), (int)v6);
  if ( (unsigned __int16)result != 0xFFFF )
  {
    result = *(_DWORD *)(*(_DWORD *)(this + 12) + 16 * (unsigned __int16)result + 12);
    if ( result != -1 )
    {
      v5 = (int *)((char *)off_103DCD74 + 16 * (result & 0xFFF) + 4);
      result >>= 12;
      if ( v5[1] == result )
      {
        if ( *v5 )
        {
          if ( v5[1] == result )
            return sub_100366D0(*v5, a3);
          else
            return sub_100366D0(0, a3);
        }
      }
    }
  }
  return result;
}
