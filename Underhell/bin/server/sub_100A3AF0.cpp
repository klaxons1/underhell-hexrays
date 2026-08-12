char __thiscall sub_100A3AF0(int this, _WORD *a2, void *a3, unsigned __int8 (__thiscall ***a4)(_DWORD, int, _DWORD))
{
  int v4; // eax
  char v5; // bl
  int v7; // esi
  const char *v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // ebx
  char v12; // al
  char Destination[128]; // [esp+10h] [ebp-130h] BYREF
  char v15[128]; // [esp+90h] [ebp-B0h] BYREF
  int v16; // [esp+110h] [ebp-30h] BYREF
  int v17; // [esp+114h] [ebp-2Ch]
  char v18[4]; // [esp+118h] [ebp-28h]
  char v19[4]; // [esp+11Ch] [ebp-24h]
  int v20; // [esp+120h] [ebp-20h] BYREF
  int v21; // [esp+124h] [ebp-1Ch]
  int v22; // [esp+128h] [ebp-18h]
  int v23; // [esp+12Ch] [ebp-14h]
  _BYTE v24[5]; // [esp+130h] [ebp-10h]
  int v25; // [esp+13Bh] [ebp-5h]
  bool v26; // [esp+13Fh] [ebp-1h]

  v4 = *(_DWORD *)(dword_10694194 + 48);
  v5 = 0;
  v26 = v4 == 2;
  if ( v4 == 1 || (LOBYTE(v25) = 0, v4 == 2) )
    LOBYTE(v25) = 1;
  v7 = sub_100A2D80(this, (char *)this, a2, 0);
  *(_DWORD *)v19 = 0;
  v23 = 100;
  LOWORD(v20) = sub_10065220(0.0);
  HIWORD(v20) = v20;
  LOWORD(v21) = v20;
  HIWORD(v21) = v20;
  LOWORD(v22) = v20;
  HIWORD(v22) = v20;
  *(_WORD *)&v24[1] = v20;
  *(_WORD *)&v24[3] = v20;
  v8 = 0;
  v24[0] = 0;
  v15[0] = 0;
  Destination[0] = 0;
  v18[0] = 0;
  if ( v7 != -1 )
  {
    v9 = *(_DWORD *)(this + 64);
    v16 = 0;
    v17 = 0;
    v10 = 60 * (__int16)v7;
    v11 = v9 + v10 + 12;
    if ( sub_100A3970((_DWORD *)this, &v16, v11, v25, a4) )
    {
      sub_104299C0(Destination, *(char **)v17, 0x80u);
      *(_DWORD *)v19 = *(_BYTE *)(v17 + 7) & 0x3F;
      v20 = *(_DWORD *)(v16 + 20);
      v21 = *(_DWORD *)(v16 + 24);
      v22 = *(_DWORD *)(v16 + 28);
      v23 = *(_DWORD *)(v16 + 32);
      *(_DWORD *)v24 = *(_DWORD *)(v16 + 36);
      v24[4] = *(_BYTE *)(v16 + 40);
    }
    sub_104299C0(v15, *(char **)(*(_DWORD *)(this + 64) + v10 + 8), 0x80u);
    v12 = *(_BYTE *)(v11 + 44);
    if ( (v12 & 2) != 0 )
      *(_BYTE *)(v11 + 44) = v12 & 0xFB;
    v8 = *(const char **)(v11 + 40);
    v18[0] = *(_BYTE *)(v11 + 44) & 1;
    v5 = 1;
  }
  sub_100680A0((int)a3, v19[0], Destination, a2, (int)&v20, v15, v8, v18[0]);
  if ( (_BYTE)v25 && (v5 || v26) )
    sub_10067810(a3);
  return v5;
}
