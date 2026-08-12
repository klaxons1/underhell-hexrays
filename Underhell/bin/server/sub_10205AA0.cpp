int __thiscall sub_10205AA0(int this, _DWORD *a2)
{
  float v4; // [esp+0h] [ebp-Ch]

  if ( *a2 )
    *(_DWORD *)(this + 820) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  else
    *(_DWORD *)(this + 820) = -1;
  v4 = 0.0;
  if ( *(int (__thiscall **)(int))(this + 8) == sub_10205830 )
    return sub_100EC3F0((_DWORD *)this, 0, v4, 0);
  else
    return sub_100EC3F0((_DWORD *)this, (int)sub_10205830, v4, 0);
}
