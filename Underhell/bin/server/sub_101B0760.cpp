int __thiscall sub_101B0760(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // ecx
  double v5; // st5
  double v6; // st6
  char Buffer[256]; // [esp+20h] [ebp-118h] BYREF
  _DWORD v8[3]; // [esp+120h] [ebp-18h] BYREF
  float v9; // [esp+12Ch] [ebp-Ch]
  float v10; // [esp+130h] [ebp-8h]
  int v11; // [esp+134h] [ebp-4h]

  result = sub_100DF940(this);
  v3 = result;
  if ( *(_DWORD *)(this + 800) && (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = *(_DWORD *)(this + 800);
    memset(v8, 0, sizeof(v8));
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 44))(v4, v8);
    v5 = v10;
    if ( 1.0 == v9 || 0.0 == v9 )
    {
      if ( v5 == 1.0 )
        return v3 + 1;
      v6 = v10;
      if ( v5 == 0.0 )
        return v3 + 1;
    }
    else
    {
      v6 = v10;
    }
    sub_1001E280(Buffer, "mass ratio %.4f:%.4f\n", v9, v6);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011BA70(this + 580, v3, (int)Buffer, 0.0, 255, 255, 0, 255);
    return v3 + 1;
  }
  return result;
}
