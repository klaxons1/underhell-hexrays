void __thiscall sub_103B2B50(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int v10; // esi
  double v11; // st7
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  int v15; // [esp+3Ch] [ebp-14h]
  int v16; // [esp+44h] [ebp-Ch] BYREF
  float v17; // [esp+48h] [ebp-8h]
  float v18; // [esp+4Ch] [ebp-4h]

  if ( *((_BYTE *)this + 3912) )
  {
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      v2 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
      {
        v3 = *this;
        v4 = (*(int (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*this + 368))(this, 1.0, 2.0, 0.0);
        v5 = (*(int (__thiscall **)(int *, int))(*this + 1868))(this, v4);
        v6 = sub_10077560(v5, v15);
        v7 = (*(int (__thiscall **)(int *, int))(*this + 368))(this, v6);
        (*(void (__thiscall **)(int *, int))(v3 + 1704))(this, v7);
      }
    }
  }
  if ( this[55] <= 50
    && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 20) )
  {
    v8 = sub_101811E0("sparktrail", -1);
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)v8 + 76))(v8, this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 96))(v8);
  }
  if ( *(_DWORD *)(dword_106EAEA4 + 48) )
  {
    v9 = (*(int (__thiscall **)(int *, int *))(*this + 504))(this, &v16);
    sub_1011C120(v9, 16.0, 0, 255, 0, 0, 0.1);
    if ( (this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v16 = this[145];
    v17 = *((float *)this + 146);
    v18 = *((float *)this + 147) - 330.0;
    sub_1011C120((int)&v16, 16.0, 255, 255, 0, 0, 0.1);
  }
  if ( *(_DWORD *)(dword_106EAEEC + 48) )
  {
    v10 = this[975];
    v11 = *(float *)(dword_106B31C8 + 12) * 20.0;
    *(float *)&v16 = v11;
    v17 = v11 * 0.5;
    v18 = 0.0;
    if ( v10 == -1 || (v12 = 4 * (v10 & 0xFFF), off_1061BE18[v12 + 2] != v10 >> 12) )
      v13 = 0;
    else
      v13 = off_1061BE18[v12 + 1];
    v14 = __RTDynamicCast(
            v13,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CNPC_Bullseye `RTTI Type Descriptor',
            0);
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    sub_1011C220((float *)(v14 + 580), (int)&v16, 24.0, 255, 255, 0, 0, 0.1);
  }
}
