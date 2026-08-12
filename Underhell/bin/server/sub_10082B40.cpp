char __thiscall sub_10082B40(_DWORD *this)
{
  _DWORD *v2; // ecx
  int *v3; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  float v7; // [esp+0h] [ebp-2Ch]
  int v8[3]; // [esp+14h] [ebp-18h] BYREF
  int v9[3]; // [esp+20h] [ebp-Ch] BYREF
  int savedregs; // [esp+2Ch] [ebp+0h] BYREF

  v2 = (_DWORD *)this[9];
  if ( !*v2 )
    return 0;
  while ( 1 )
  {
    v3 = (int *)sub_100A6030(v2);
    v8[0] = *v3;
    v8[1] = v3[1];
    v8[2] = v3[2];
    sub_100820C0((int)this);
    v4 = (_DWORD *)this[1];
    v5 = (_DWORD *)v4[650];
    v7 = ((double (*)(void))*(_DWORD *)(*v4 + 1724))();
    sub_1007A2B0(v5, (float *)v8, 33701899, v7, -64.0, (float *)v9);
    if ( sub_1007EA60((int)this, (int)&savedregs, (int)v5, (int)this, (float *)v9, 33701899, 0, 0)
      && sub_1007A470(*(_DWORD *)(this[1] + 2600), (float *)v9, 33701899) )
    {
      break;
    }
    if ( !(unsigned __int8)sub_100A61C0(this[9]) )
    {
      v2 = (_DWORD *)this[9];
      if ( *v2 )
        continue;
    }
    return 0;
  }
  (*(void (__thiscall **)(_DWORD, int *, _DWORD, _DWORD))(*(_DWORD *)this[1] + 416))(this[1], v9, 0, 0);
  sub_101C73D0(0);
  sub_100DCB50(v9);
  return 1;
}
