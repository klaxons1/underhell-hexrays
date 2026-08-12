char __thiscall sub_102958E0(_DWORD *this, int a2)
{
  __int16 v3; // ax
  const char *v6; // eax
  char *v7; // eax
  float *v8; // eax
  int v9; // ecx
  int v10; // edx
  float *v11; // eax
  int v12; // ecx
  int v13; // ebx
  _BYTE v14[44]; // [esp+10h] [ebp-5Ch] BYREF
  float v15; // [esp+3Ch] [ebp-30h]
  float *v16; // [esp+64h] [ebp-8h]
  float *v17; // [esp+68h] [ebp-4h]
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF
  int v19; // [esp+74h] [ebp+8h]
  int v20; // [esp+74h] [ebp+8h]

  v3 = *(_WORD *)(a2 + 816);
  if ( v3 != 12 && v3 != 903 )
    return 0;
  v6 = *(const char **)(a2 + 832);
  if ( !v6 )
    v6 = String;
  v7 = strchr(v6, 32);
  if ( v7 && !sub_104291C0(v7 + 1, "teleport", 8) )
    return 1;
  v19 = this[1];
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v19 + 320) + 8))(v19 + 320);
  v9 = this[1];
  v10 = *(_DWORD *)(v9 + 320);
  v17 = v8;
  v11 = (float *)(*(int (__thiscall **)(int))(v10 + 4))(v9 + 320);
  v12 = *(_DWORD *)(a2 + 252) >> 11;
  v16 = v11;
  if ( (v12 & 1) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  sub_100231A0((int)&savedregs, a2, (float *)(a2 + 580), (float *)(a2 + 580), v16, v17, 33570827, v19, 0, (int)v14);
  if ( 1.0 == v15 )
    return 1;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 3 && (*(_DWORD *)(this[1] + 236) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    sub_1011CF30((float *)(a2 + 580), (int)"Node isn't clear.", 0, 60.0);
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    sub_1011BB20(a2 + 580, v13, v20, 255, 0, 0, 8, 2.0);
  }
  return 0;
}
