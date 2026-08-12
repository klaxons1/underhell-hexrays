char __thiscall sub_103EC430(int this)
{
  int v2; // edi
  int v3; // ebx
  bool v4; // al
  int v5; // eax
  bool v6; // al
  char v7; // bl
  char v9[12]; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v10[12]; // [esp+18h] [ebp-14h] BYREF
  _DWORD *v11; // [esp+24h] [ebp-8h]
  char v12; // [esp+2Bh] [ebp-1h]

  v12 = 0;
  v2 = 0;
  v3 = this + 1852;
  v11 = (_DWORD *)(this + 1204);
  do
  {
    if ( *v11 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int, _DWORD))(*(_DWORD *)*v11 + 264))(*v11, v3, 0) )
      {
        v4 = ((**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, v3, 0) & 0x4030) != 0;
        *(_BYTE *)(v2 + this + 1844) = v4;
        if ( v4 )
          v12 = 1;
      }
    }
    ++v11;
    ++v2;
    v3 += 12;
  }
  while ( v2 < 4 );
  v5 = sub_100BEF30(this, "vehicle_engine");
  sub_100BCCA0((void *)this, v5, (int)v10, (int)v9);
  v6 = ((**(int (__thiscall ***)(int, _BYTE *, _DWORD))dword_106B31F4)(dword_106B31F4, v10, 0) & 0x4030) != 0;
  *(_BYTE *)(this + 1916) = v6;
  if ( !v6 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1160) + 56))(*(_DWORD *)(this + 1160)) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(this + 1944) )
  {
    sub_100D7330((void *)this);
    *(_BYTE *)(this + 1944) = 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1160) + 56))(*(_DWORD *)(this + 1160)) )
LABEL_13:
    sub_10144FC0((_DWORD **)(this + 1124));
LABEL_14:
  v7 = v12;
  if ( v12 )
    sub_103EBF40(this);
  return v7;
}
