void __thiscall sub_1019D410(int this)
{
  _WORD *v2; // eax
  _WORD *v3; // eax
  int v4; // eax
  int v5; // edi
  _BYTE v6[12]; // [esp+8h] [ebp-3Ch] BYREF
  _BYTE v7[12]; // [esp+14h] [ebp-30h] BYREF
  _BYTE v8[12]; // [esp+20h] [ebp-24h] BYREF
  _BYTE v9[12]; // [esp+2Ch] [ebp-18h] BYREF
  _BYTE v10[12]; // [esp+38h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 2284) )
  {
    if ( *(_DWORD *)(this + 2292) )
    {
LABEL_8:
      v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(this + 4) + 140))(this + 4, "vehicle_headlight");
      (*(void (__thiscall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)(this + 4) + 148))(this + 4, v4, v6, v10);
      sub_101EE040(v10, v7, v8, v9);
      (***(void (__thiscall ****)(_DWORD, _BYTE *, _BYTE *, _BYTE *, _BYTE *, int))(this + 2292))(
        *(_DWORD *)(this + 2292),
        v6,
        v7,
        v8,
        v9,
        1000);
      return;
    }
    v2 = (_WORD *)sub_100DDA40(28);
    if ( v2 )
      v3 = sub_1009D3F0(v2);
    else
      v3 = 0;
    *(_DWORD *)(this + 2292) = v3;
    if ( v3 )
    {
      sub_1009D3C0((int)v3);
      goto LABEL_8;
    }
  }
  else
  {
    v5 = *(_DWORD *)(this + 2292);
    if ( v5 )
    {
      sub_1009D410(*(_DWORD **)(this + 2292));
      sub_10034930(v5);
      *(_DWORD *)(this + 2292) = 0;
    }
  }
}
