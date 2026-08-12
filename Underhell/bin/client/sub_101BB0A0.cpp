unsigned int __thiscall sub_101BB0A0(int this, int a2, char a3)
{
  unsigned int result; // eax
  int v5; // edx
  int *v6; // ecx
  int v7; // esi
  _DWORD v8[2]; // [esp+4h] [ebp-8h] BYREF

  v8[0] = a2;
  v8[1] = -1;
  result = (unsigned __int16)sub_101BA800((_WORD *)(this + 8), (int)v8);
  if ( (unsigned __int16)result != 0xFFFF )
  {
    v5 = 2 * (unsigned __int16)result;
    result = *(_DWORD *)(this + 12) + 16 * (unsigned __int16)result + 8;
    if ( *(_DWORD *)(this + 12) + 8 * v5 != -8 )
    {
      result = *(_DWORD *)(result + 4);
      if ( result != -1 )
      {
        v6 = (int *)((char *)off_103DCD74 + 16 * (result & 0xFFF) + 4);
        result >>= 12;
        if ( v6[1] == result )
        {
          v7 = *v6;
          if ( *v6 )
          {
            result = (*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 8) + 36))(v7 + 8);
            if ( result )
              return sub_10039F80(v7, a3);
          }
        }
      }
    }
  }
  return result;
}
