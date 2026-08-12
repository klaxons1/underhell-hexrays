int __thiscall sub_1024E420(int this, _DWORD *a2)
{
  bool v3; // bl
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v10; // [esp+20h] [ebp-28h] BYREF
  int v11; // [esp+24h] [ebp-24h] BYREF
  int v12; // [esp+28h] [ebp-20h] BYREF
  int v13; // [esp+2Ch] [ebp-1Ch] BYREF
  int v14; // [esp+30h] [ebp-18h] BYREF
  int v15; // [esp+34h] [ebp-14h] BYREF
  int v16; // [esp+38h] [ebp-10h] BYREF
  int v17; // [esp+3Ch] [ebp-Ch] BYREF
  int v18; // [esp+40h] [ebp-8h] BYREF
  int v19; // [esp+44h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 348))(
    dword_1047CA6C,
    &v15,
    &v19,
    &v16,
    &v14);
  sub_10236250((int (__thiscall ***)(void *, int, int))this, (int)&v12, (int)&v13, (int)&v10, (int)&v11);
  v3 = 0;
  if ( *(_BYTE *)(this + 353) )
  {
    v3 = sub_1022A6A0(a2, "xpos", 0) == 0;
    v12 = sub_1022A800(a2, "xpos", v12);
    v13 = sub_1022A800(a2, "ypos", v13);
  }
  if ( *(_BYTE *)(this + 352) )
  {
    v10 = sub_1022A800(a2, "wide", v10);
    v4 = sub_1022A800(a2, "tall", v11);
    v11 = v4;
    if ( v10 > v16 )
      v10 = v16;
    if ( v4 > v14 )
      v11 = v14;
  }
  if ( v3
    && (*(unsigned __int8 (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)this + 1008))(
         this,
         &v12,
         &v13,
         &v10,
         &v11) )
  {
    v3 = 0;
  }
  sub_10237070((int (__thiscall ***)(void *, int, int))this, (int)&v17, (int)&v18);
  v5 = v10;
  if ( v10 < v17 )
  {
    v5 = v17;
    v10 = v17;
  }
  v6 = v11;
  if ( v11 < v18 )
  {
    v6 = v18;
    v11 = v18;
  }
  v7 = v12;
  if ( v12 + v5 > v16 )
  {
    v7 = v16 + v15 - v5;
    v12 = v7;
  }
  v8 = v13;
  if ( v13 + v6 > v14 )
  {
    v8 = v14 + v19 - v6;
    v13 = v8;
  }
  if ( v7 < v15 )
  {
    v7 = v15;
    v12 = v15;
  }
  if ( v8 < v19 )
  {
    v8 = v19;
    v13 = v19;
  }
  sub_10236200((int (__thiscall ***)(void *, int, int))this, v7, v8, v5, v6);
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 892))(this);
  return sub_1024BAB0((int (__thiscall ***)(void *, int, int))this, a2);
}
