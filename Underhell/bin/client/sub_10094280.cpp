int __thiscall sub_10094280(unsigned __int8 (__cdecl **this)(int, int), _BYTE *a2)
{
  int v2; // edi
  unsigned __int8 (__cdecl **v3)(int, int); // ebx
  int v4; // esi
  _DWORD *v5; // ecx
  int v6; // edx
  double v8; // st7
  double v9; // st6
  int v10; // esi
  int v11; // ebx
  bool v12; // c0
  float v13; // [esp+0h] [ebp-3Ch]
  float v14; // [esp+4h] [ebp-38h]
  _BYTE *v15; // [esp+14h] [ebp-28h] BYREF
  _DWORD v16[5]; // [esp+18h] [ebp-24h] BYREF
  int v17; // [esp+2Ch] [ebp-10h]
  _DWORD *v18; // [esp+30h] [ebp-Ch]
  unsigned __int8 (__cdecl **v19)(int, int); // [esp+34h] [ebp-8h]
  float v20; // [esp+38h] [ebp-4h]
  int v21; // [esp+44h] [ebp+8h]

  v2 = 0;
  v3 = this;
  v19 = this;
  if ( !a2 || !*a2 )
    return -1;
  v15 = a2;
  memset(v16, 0, sizeof(v16));
  v4 = sub_100937A0(this + 9, (int)&v15);
  sub_1011A810(v16);
  if ( v4 == -1 )
    return -1;
  v5 = (_DWORD *)((char *)v3[10] + 40 * v4 + 20);
  v6 = *((_DWORD *)v3[10] + 10 * v4 + 8);
  v18 = v5;
  v17 = v6;
  if ( v6 <= 0 )
    return -1;
  v8 = 0.0;
  v9 = 0.0;
  v21 = 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)(*v5 + 4 * v2);
    v11 = (int)v3[4] + 12 * v10;
    if ( v8 == v9 )
      v21 = *(_DWORD *)(*v5 + 4 * v2);
    v9 = v9 + *(float *)(v11 + 8);
    v20 = v9;
    if ( v8 == v9
      || (v14 = v9,
          v13 = v8,
          v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  LODWORD(v13),
                  LODWORD(v14)) < *(float *)(v11 + 8),
          v8 = 0.0,
          v9 = v20,
          v12) )
    {
      v21 = v10;
    }
    v3 = v19;
    if ( ++v2 >= v17 )
      break;
    v5 = v18;
  }
  return *((_DWORD *)v19[4] + 3 * v21 + 1);
}
