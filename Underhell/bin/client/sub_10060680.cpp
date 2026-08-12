int __thiscall sub_10060680(_DWORD *this, int ArgList)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  char Buffer[512]; // [esp+2Ch] [ebp-218h] BYREF
  float v9[3]; // [esp+22Ch] [ebp-18h] BYREF
  float v10[3]; // [esp+238h] [ebp-Ch] BYREF

  v3 = (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         ArgList,
         "Other textures",
         1,
         0);
  this[488] = v3;
  if ( v3 )
    this[490] = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  else
    this[490] = 1;
  sub_10228370(Buffer, 0x200u, "%s_back", ArgList);
  v4 = (*(int (__thiscall **)(int, char *, const char *, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         Buffer,
         "Other textures",
         0,
         0);
  this[489] = v4;
  if ( !v4 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 168))(v4) )
    this[489] = 0;
  v5 = this[489];
  if ( v5 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 16))(v5);
  v6 = this[476];
  if ( v6 <= 10 )
  {
    if ( v6 < 2 )
      v6 = 2;
  }
  else
  {
    v6 = 10;
  }
  this[476] = v6;
  sub_10116570(v6);
  v9[0] = 10.0;
  v9[1] = 10.0;
  v9[2] = 10.0;
  v10[0] = -10.0;
  v10[1] = -10.0;
  v10[2] = -10.0;
  sub_1008FC00(v10, v9);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 408))(this, -1293.0);
}
