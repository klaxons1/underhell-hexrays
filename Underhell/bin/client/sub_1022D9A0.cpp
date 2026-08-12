int __thiscall sub_1022D9A0(int this)
{
  int v2; // eax
  unsigned __int16 *v3; // ebx
  void *v4; // esp
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  int v8; // ebx
  _BYTE *v9; // ecx
  int *v10; // ebx
  int v11; // eax
  int v12; // ebx
  unsigned __int16 v13; // ax
  int v14; // ebx
  _BYTE *v15; // ecx
  int *v16; // ebx
  void (__thiscall *v17)(int); // eax
  int v18; // ebx
  int i; // edi
  unsigned __int16 v21; // [esp-8h] [ebp-38h]
  unsigned __int16 v22; // [esp-8h] [ebp-38h]
  _BYTE v23[12]; // [esp+0h] [ebp-30h] BYREF
  _BYTE *v24; // [esp+Ch] [ebp-24h] BYREF
  int v25; // [esp+10h] [ebp-20h]
  int v26; // [esp+14h] [ebp-1Ch]
  int v27; // [esp+18h] [ebp-18h]
  _BYTE *v28; // [esp+1Ch] [ebp-14h]
  int v29; // [esp+20h] [ebp-10h]
  int v30; // [esp+24h] [ebp-Ch]
  int v31; // [esp+28h] [ebp-8h]
  int v32; // [esp+2Ch] [ebp-4h]

  (**(void (__thiscall ***)(int))this)(this);
  v2 = *(_DWORD *)(this + 24);
  v3 = (unsigned __int16 *)(v2 + 10 * *(unsigned __int16 *)(this + 68));
  v29 = v3[2] + *(unsigned __int16 *)(v2 + 10 * *(unsigned __int16 *)(this + 70) + 4);
  v4 = alloca(4 * v29);
  v5 = *v3;
  v6 = *(_DWORD *)(this + 8);
  v25 = v29;
  v7 = 0;
  v24 = v23;
  v26 = -1;
  v27 = 0;
  v28 = v23;
  v30 = v6;
  if ( v5 != 0xFFFF )
  {
    do
    {
      v21 = *(_WORD *)(this + 68);
      v32 = *(unsigned __int16 *)(*(_DWORD *)(this + 12) + 12 * (unsigned __int16)v5 + 10);
      sub_1022D600((_DWORD *)(this + 12), v21, v5);
      v31 = sub_1022D8D0((void *)this, v5);
      v8 = v7;
      if ( v7 + 1 > v25 )
      {
        sub_1010AFF0(&v24, v7 - v25 + 1);
        v7 = v27;
      }
      v9 = v24;
      v27 = ++v7;
      v28 = v24;
      if ( v7 - v8 - 1 > 0 )
      {
        memcpy(&v24[4 * v8 + 4], &v24[4 * v8], 4 * (v7 - v8 - 1));
        v9 = v24;
      }
      v10 = (int *)&v9[4 * v8];
      if ( v10 )
        *v10 = v31;
      LOWORD(v5) = v32;
    }
    while ( v32 != 0xFFFF );
  }
  v11 = *(unsigned __int16 *)(*(_DWORD *)(this + 24) + 10 * *(unsigned __int16 *)(this + 70));
  v31 = v11;
  if ( v11 != 0xFFFF )
  {
    while ( 1 )
    {
      v12 = 12 * (unsigned __int16)v11;
      v22 = *(_WORD *)(this + 70);
      v32 = *(unsigned __int16 *)(*(_DWORD *)(this + 12) + v12 + 10);
      sub_1022D600((_DWORD *)(this + 12), v22, v11);
      v13 = v31;
      *(_WORD *)(v12 + *(_DWORD *)(this + 12)) = 0;
      v31 = sub_1022D8D0((void *)this, v13);
      v14 = v7;
      if ( v7 + 1 > v25 )
      {
        sub_1010AFF0(&v24, v7 - v25 + 1);
        v7 = v27;
      }
      v15 = v24;
      v27 = ++v7;
      v28 = v24;
      if ( v7 - v14 - 1 > 0 )
      {
        memcpy(&v24[4 * v14 + 4], &v24[4 * v14], 4 * (v7 - v14 - 1));
        v15 = v24;
      }
      v16 = (int *)&v15[4 * v14];
      if ( v16 )
        *v16 = v31;
      v31 = v32;
      if ( v32 == 0xFFFF )
        break;
      LOWORD(v11) = v31;
    }
  }
  v17 = *(void (__thiscall **)(int))(*(_DWORD *)this + 8);
  *(_WORD *)(this + 74) &= ~1u;
  v17(this);
  v18 = v29;
  for ( i = 0; i < v18; ++i )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 16))(this, *(_DWORD *)&v24[4 * i]);
  if ( v26 >= 0 && v24 )
    (*(void (__thiscall **)(_DWORD, _BYTE *))(*g_pMemAlloc + 20))(g_pMemAlloc, v24);
  return v30;
}
