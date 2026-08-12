int __thiscall sub_100C1600(int this, int a2, int a3)
{
  int *v4; // ebx
  int v5; // edi
  _DWORD *v6; // esi
  int result; // eax
  int *v8; // eax
  int *v9; // ecx
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v4 = (int *)(this + 852);
  v5 = dword_10700AC8;
  v10 = *(_DWORD *)(this + 852);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( !v6 || !*v6 )
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  result = sub_100BAB10((int)v6, &v10, a2, a3);
  if ( *v4 != v10 )
  {
    v8 = v4 - 213;
    if ( *((_BYTE *)v4 - 768) )
    {
      *((_BYTE *)v8 + 88) |= 1u;
      result = v10;
      *v4 = v10;
    }
    else
    {
      v9 = (int *)v8[6];
      if ( v9 )
        sub_100194B0(v9, 852);
      result = v10;
      *v4 = v10;
    }
  }
  return result;
}
