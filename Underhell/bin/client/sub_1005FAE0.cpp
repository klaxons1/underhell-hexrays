char __thiscall sub_1005FAE0(char *this, int a2, int a3, int a4)
{
  int v4; // edi
  int v5; // esi
  _DWORD *v6; // ecx
  unsigned int v7; // eax
  char *v8; // edx
  _DWORD v10[128]; // [esp+Ch] [ebp-21Ch] BYREF
  _BYTE v11[12]; // [esp+20Ch] [ebp-1Ch] BYREF
  _BYTE v12[12]; // [esp+218h] [ebp-10h] BYREF
  char *v13; // [esp+224h] [ebp-4h]

  v13 = this;
  sub_1008EA70(this + 360, this + 372, v11, v12);
  v4 = sub_10076C00(v10, 128, v11, v12, 0, 4);
  v5 = 0;
  if ( v4 <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = (_DWORD *)v10[v5];
    v7 = v6[281];
    if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v6[281] & 0xFFF) + 2) != v7 >> 12 )
      v8 = 0;
    else
      v8 = (char *)*((_DWORD *)off_103DCD74 + 4 * (v6[281] & 0xFFF) + 1);
    if ( v8 == v13 && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, int))(*v6 + 176))(v6, a2, a3, a4) )
      break;
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}
