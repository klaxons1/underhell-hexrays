void __thiscall sub_10214340(_BYTE *this, int a2)
{
  __int64 v2; // rdi
  const char *v3; // eax
  unsigned int v4; // eax
  int v5; // eax

  HIDWORD(v2) = this;
  if ( !this[1728] )
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
  LODWORD(v2) = a2;
  sub_10208230(SHIDWORD(v2), a2);
  if ( (*(_DWORD *)(HIDWORD(v2) + 248) & 0x1000) == 0 )
  {
    v3 = *(const char **)(HIDWORD(v2) + 1732);
    if ( !v3 )
      v3 = String;
    sub_1023B860(v3);
  }
  if ( *(_DWORD *)(HIDWORD(v2) + 1672) == 3 )
  {
    if ( sub_100D7680(a2) )
    {
      if ( *(_BYTE *)(HIDWORD(v2) + 1624) )
        goto LABEL_12;
      sub_102141C0((_DWORD *)HIDWORD(v2), a2);
    }
    if ( !*(_BYTE *)(HIDWORD(v2) + 1624) )
    {
LABEL_13:
      sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1752), v2, 0.0);
      return;
    }
LABEL_12:
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2) )
      return;
    goto LABEL_13;
  }
  if ( sub_100D7680(a2) )
  {
    if ( *(_BYTE *)(HIDWORD(v2) + 1624) )
      goto LABEL_18;
    sub_10210260((_DWORD *)HIDWORD(v2));
  }
  if ( *(_BYTE *)(HIDWORD(v2) + 1624) )
  {
LABEL_18:
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2) )
      return;
  }
  v4 = *(_DWORD *)(HIDWORD(v2) + 1716);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v2) + 1716) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v2) + 1716) & 0xFFF) + 1];
  if ( __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CAI_BaseNPC `RTTI Type Descriptor',
         0) )
  {
    nullsub_5(SHIDWORD(v2));
  }
  sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1776), v2, 0.0);
}
