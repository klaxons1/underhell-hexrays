char __thiscall sub_103930D0(int *this)
{
  _DWORD ***v2; // ecx
  int i; // edi
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  double v7; // st6
  double v8; // st5
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // eax
  char v14[4]; // [esp+Ch] [ebp-4h] BYREF

  sub_10094C40((int)this);
  v2 = (_DWORD ***)this[601];
  this[1170] = 0;
  this[1171] = 0;
  for ( i = sub_100AB0F0(v2, (int)v14, -1); i; i = sub_100AB170((_DWORD **)this[601], v14) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)i + 220))(i) == 19 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)i + 264))(i) )
      {
        v4 = __RTDynamicCast(
               i,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CAI_BaseNPC `RTTI Type Descriptor',
               0);
        v5 = v4;
        if ( v4 )
        {
          if ( (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 368))(v4) == this )
          {
            v6 = this[63];
            ++this[1170];
            if ( (v6 & 0x800) != 0 )
              sub_100DAE60((int)this);
            if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
              sub_100DAE60(v5);
            v7 = *(float *)(v5 + 584) - *((float *)this + 146);
            v8 = *(float *)(v5 + 580) - *((float *)this + 145);
            if ( v8 * v8 + v7 * v7 <= 16384.0 )
              ++this[1171];
          }
        }
      }
    }
  }
  if ( this[1171] >= 3 || (*(int (__thiscall **)(int *))(*this + 368))(this) && this[55] < 25 )
    (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
      this,
      "TLK_HELP_ME",
      0,
      0,
      0,
      0);
  sub_10023E00((char *)this, 3);
  v9 = sub_100CF460(this);
  if ( v9 )
  {
    v10 = (_DWORD *)sub_100CF460(this);
    LOBYTE(v9) = sub_100D1400(v10);
    if ( (_BYTE)v9 )
    {
      v11 = sub_100CF460(this);
      LOBYTE(v9) = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 972))(v11);
      if ( (_BYTE)v9 )
      {
        if ( this[581] != 3 )
        {
          v12 = sub_100CF460(this);
          LOBYTE(v9) = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 1272))(v12);
          if ( (_BYTE)v9 )
          {
            v9 = sub_100CF460(this);
            if ( *(int *)(v9 + 1200) < 2 )
              LOBYTE(v9) = (unsigned __int8)sub_10023CB0((char *)this, 3);
          }
        }
      }
      else
      {
        LOBYTE(v9) = (unsigned __int8)sub_10023CB0((char *)this, 4);
      }
    }
  }
  return v9;
}
