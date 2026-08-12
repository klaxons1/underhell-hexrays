char __thiscall sub_100BEFF0(int this, int a2, void *a3)
{
  int v3; // ebx
  _DWORD *v5; // edi
  int v6; // ebx
  int v7; // eax
  _BYTE v9[48]; // [esp+Ch] [ebp-48h] BYREF
  _BYTE v10[12]; // [esp+3Ch] [ebp-18h] BYREF
  _BYTE v11[12]; // [esp+48h] [ebp-Ch] BYREF
  int v12; // [esp+5Ch] [ebp+8h]

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  if ( v5 && a2 >= 1 && a2 <= sub_102452B0(v5) )
  {
    v6 = a2 - 1;
    v12 = sub_102457E0(a2 - 1);
    v7 = sub_10245840(v6);
    (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)this + 772))(this, v7, v9);
    if ( (*(_DWORD *)(v12 + 4) & 0x10000) != 0 )
    {
      sub_10421CE0(v12 + 12, 3, v11);
      sub_10421B40(v11, v9, v10);
      sub_10422700(a3);
      sub_10421D00(v10, 3, a3);
    }
    else
    {
      sub_10421E30(v9, v12 + 12, a3);
    }
    return 1;
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10421CC0(this + 500, a3);
    return 0;
  }
}
