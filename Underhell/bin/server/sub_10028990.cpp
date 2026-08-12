int __thiscall sub_10028990(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // eax
  float v7; // [esp+0h] [ebp-64h]
  float v8; // [esp+4h] [ebp-60h]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = this[55];
  result = abs32(v4 - v3);
  if ( v3 <= v4 )
  {
    if ( v3 < v4 )
    {
      v7 = (float)result;
      v6 = sub_10248110((int)this, (int)this, v7, 0, 0);
      return sub_100D9E70(v6);
    }
  }
  else
  {
    v8 = (float)result;
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 260))(this, LODWORD(v8), 0);
  }
  return result;
}
