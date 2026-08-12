int __thiscall sub_102A0860(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // esi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  char *v12; // eax
  int v13; // eax
  int v14; // esi
  float v15[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v16[3]; // [esp+14h] [ebp-10h] BYREF
  _DWORD *v17; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v2 = this[17];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4);
  v6 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 136))(v5, this[1], 1);
  v17 = v6;
  if ( !v6 )
    return -1;
  v8 = this[17];
  if ( v8 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 340))(v9);
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v10 + 120))(v10, this[1], v15, 0) )
    return -1;
  v11 = 0;
  if ( (int)v6[3] <= 0 )
    return -1;
  while ( 1 )
  {
    v12 = *(char **)(*v6 + 8 * v11);
    if ( !v12 )
      v12 = (char *)String;
    v13 = sub_100BDF40(this[1], v12);
    v14 = v13;
    if ( v13 != -1
      && sub_1029F330(this, v13, v16, 0)
      && sub_1029F5D0((int)this, (int)&savedregs, (int)this, v14, v15, v16) )
    {
      break;
    }
    if ( ++v11 >= v17[3] )
      return -1;
    v6 = v17;
  }
  return v14;
}
