int __thiscall sub_10033A80(int this)
{
  int result; // eax
  int v3; // edi
  bool v4; // bl
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h]

  result = sub_100422D0();
  v3 = result;
  if ( result )
  {
    v9 = dword_1042FB88;
    result = sub_100B4090("CHudCrosshair");
    v11 = result;
    if ( result )
    {
      v4 = *(_DWORD *)(this + 2024) == 64;
      if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 952))(v3) < 90.0 )
      {
        v10 = -1;
        if ( v4 && *(_DWORD *)(sub_1000AA30((__int16 *)this) + 1868) )
        {
          v7 = sub_1000AA30((__int16 *)this);
          return sub_100C6EC0(*(_DWORD *)(v7 + 1868), &v10);
        }
        if ( *(_DWORD *)(sub_1000AA30((__int16 *)this) + 1864) )
        {
          v8 = sub_1000AA30((__int16 *)this);
          return sub_100C6EC0(*(_DWORD *)(v8 + 1864), &v10);
        }
      }
      else
      {
        if ( v4 && *(_DWORD *)(sub_1000AA30((__int16 *)this) + 1860) )
        {
          HIBYTE(v9) = -1;
          v5 = sub_1000AA30((__int16 *)this);
          return sub_100C6EC0(*(_DWORD *)(v5 + 1860), &v9);
        }
        if ( *(_DWORD *)(sub_1000AA30((__int16 *)this) + 1856) )
        {
          HIBYTE(v9) = -1;
          v6 = sub_1000AA30((__int16 *)this);
          return sub_100C6EC0(*(_DWORD *)(v6 + 1856), &v9);
        }
      }
      return sub_100C7020(v11);
    }
  }
  return result;
}
