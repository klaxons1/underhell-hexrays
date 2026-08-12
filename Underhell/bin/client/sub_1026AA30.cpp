int __thiscall sub_1026AA30(void *this)
{
  int v1; // edi
  int v2; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v11; // [esp+20h] [ebp-30h] BYREF
  int v12; // [esp+24h] [ebp-2Ch] BYREF
  int v13; // [esp+28h] [ebp-28h] BYREF
  int v14; // [esp+2Ch] [ebp-24h] BYREF
  int v15; // [esp+30h] [ebp-20h] BYREF
  int v16; // [esp+34h] [ebp-1Ch] BYREF
  int v17; // [esp+38h] [ebp-18h] BYREF
  int v18; // [esp+3Ch] [ebp-14h] BYREF
  int v19; // [esp+40h] [ebp-10h] BYREF
  int v20; // [esp+44h] [ebp-Ch] BYREF
  int v21; // [esp+48h] [ebp-8h] BYREF
  _BYTE v22[4]; // [esp+4Ch] [ebp-4h] BYREF

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v4 = (*(int (__thiscall **)(void *, int *, _BYTE *))(*(_DWORD *)this + 148))(this, &v15, v22);
  (*(void (__thiscall **)(int, int))(v2 + 20))(v1, v4);
  v5 = dword_1047CA70;
  v6 = *(_DWORD *)dword_1047CA70;
  v7 = (*(int (__thiscall **)(void *, int *, int *))(*(_DWORD *)this + 148))(this, &v11, &v12);
  (*(void (__thiscall **)(int, int))(v6 + 12))(v5, v7);
  v11 += v15;
  v12 = 0;
  sub_10236FB0(this, &v11, &v12);
  sub_10236140((int (__thiscall ***)(void *, int, int))this, v11, v12);
  sub_10236250((int (__thiscall ***)(void *, int, int))this, (int)&v13, (int)&v14, (int)&v19, (int)&v16);
  (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 348))(
    dword_1047CA6C,
    &v18,
    &v20,
    &v17,
    &v21);
  if ( v13 + v19 <= v17 + v18 )
    v8 = v13 + 1;
  else
    v8 = -2 - v19 - v15 + v13;
  v13 = v8;
  if ( v14 + v16 <= v20 + v21 )
    v9 = v14 - 1;
  else
    v9 = v20 - v16 + v21 - 2;
  v14 = v9;
  sub_10236140((int (__thiscall ***)(void *, int, int))this, v8, v9);
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 212))(this);
}
