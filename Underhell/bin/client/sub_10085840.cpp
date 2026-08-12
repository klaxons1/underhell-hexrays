int __thiscall sub_10085840(int this, int a2, int a3, int a4)
{
  unsigned __int16 v5; // ax
  int v6; // eax
  __int16 v7; // ax
  int v8; // eax
  unsigned __int16 v9; // ax
  int v10; // eax
  __int16 v11; // ax
  int v12; // eax
  int v13; // eax
  int v15; // [esp-4h] [ebp-60h]
  int v16; // [esp+8h] [ebp-54h]
  int v17; // [esp+Ch] [ebp-50h]
  int v18[3]; // [esp+2Ch] [ebp-30h] BYREF
  int v19[3]; // [esp+38h] [ebp-24h] BYREF
  int v20[3]; // [esp+44h] [ebp-18h] BYREF
  int v21[3]; // [esp+50h] [ebp-Ch] BYREF

  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 28))(a2);
  if ( v5 == 0xFFFF )
  {
    v6 = 0;
  }
  else
  {
    v7 = *(_WORD *)(168 * v5 + *(_DWORD *)(this + 36) + 8);
    if ( (v7 & 4) != 0 )
      v8 = *(_BYTE *)(this + 208) != 0;
    else
      v8 = (v7 & 0x10) != 0 ? 3 : 0;
    v6 = v8 + 1;
  }
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)a2 + 88))(a2, v18, v19, v6);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 28))(a3);
  if ( v9 == 0xFFFF )
  {
    v10 = 0;
  }
  else
  {
    v11 = *(_WORD *)(168 * v9 + *(_DWORD *)(this + 36) + 8);
    if ( (v11 & 4) != 0 )
      v12 = *(_BYTE *)(this + 208) != 0;
    else
      v12 = (v11 & 0x10) != 0 ? 3 : 0;
    v10 = v12 + 1;
  }
  (*(void (__thiscall **)(int, int *, int *, int))(*(_DWORD *)a3 + 88))(a3, v20, v21, v10);
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  v16 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3);
  v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  return sub_100913D0(v13, v15, (int)v18, (int)v19, v16, v17, (int)v20, (int)v21, 3.0, a4);
}
