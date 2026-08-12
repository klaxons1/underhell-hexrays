int __thiscall sub_101E50A0(int this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = sub_101C5260((_DWORD *)this);
  if ( a2 != result && *(_BYTE *)(a2 + 306) == 6 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 44))(a2 + 320);
    if ( result == 6 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 48))(a2 + 320);
      if ( (result & 8) == 0 )
      {
        v4 = *(_DWORD *)(a2 + 424);
        if ( v4 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4);
          if ( (_BYTE)result )
            *(_BYTE *)(this + 3624) = 1;
        }
      }
    }
  }
  return result;
}
