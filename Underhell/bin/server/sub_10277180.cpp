int __thiscall sub_10277180(int *this, _DWORD *a2, void *a3)
{
  char *v5; // eax
  int *v6; // eax
  int v7; // eax
  float *v8; // eax
  _BYTE v9[12]; // [esp+4h] [ebp-3Ch] BYREF
  _BYTE v10[12]; // [esp+10h] [ebp-30h] BYREF
  int v11[3]; // [esp+1Ch] [ebp-24h] BYREF
  float v12[3]; // [esp+28h] [ebp-18h] BYREF
  int v13[3]; // [esp+34h] [ebp-Ch] BYREF

  if ( *a2 != 3002 )
    return sub_100CFE60(this, (int)a2, (int)a3);
  v5 = (char *)a2[1];
  if ( !v5 || !*v5 || !sub_100BEFA0(a3, v5, (int)v13, (int)v11) )
  {
    v6 = (int *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)a3 + 968))(a3, v10);
    v13[0] = *v6;
    v13[1] = v6[1];
    v13[2] = v6[2];
  }
  v7 = sub_100D7680((int)a3);
  v8 = (float *)(*(int (__thiscall **)(int, _BYTE *, int *))(*(_DWORD *)v7 + 2104))(v7, v9, v13);
  v12[0] = *v8;
  v12[1] = v8[1];
  v12[2] = v8[2];
  return sub_10277020(this, (int)a3, (float *)v13, v12);
}
