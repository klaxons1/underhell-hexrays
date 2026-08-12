int __thiscall sub_100BEB30(int this, int a2, int a3, int a4)
{
  int v4; // esi
  _DWORD *v6; // eax
  int v7; // ebx
  int result; // eax
  _BYTE v9[48]; // [esp+Ch] [ebp-30h] BYREF

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( v6 && *v6 )
    v7 = *(_DWORD *)(this + 1100);
  else
    v7 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( v7 )
  {
    result = a2;
    if ( a2 >= 0 && a2 < *(_DWORD *)(*(_DWORD *)v7 + 156) )
    {
      (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)this + 772))(this, a2, v9);
      sub_10421A90(v9, a4);
      return sub_10421CE0(v9, 3, a3);
    }
  }
  return result;
}
