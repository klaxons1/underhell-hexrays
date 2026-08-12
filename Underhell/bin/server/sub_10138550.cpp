int __thiscall sub_10138550(int this)
{
  const char *v3; // eax
  int v4; // ecx
  int v5; // eax
  _BYTE v6[4]; // [esp+10h] [ebp-4h] BYREF
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  if ( !*(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 28))(this, v6) )
    return sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
  sub_10112C00(this + 320, 0);
  sub_100EC3F0((_DWORD *)this, (int)&loc_10137F40, 0.0, 0);
  sub_1005C410(this, *(float *)(this + 912));
  sub_100FAC00(this, (float *)(this + 716), (float *)(this + 716));
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  if ( *(_DWORD *)(this + 972) || !*(_DWORD *)(this + 976) )
  {
    *(_DWORD *)(this + 972) = 0;
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(const char **)(this + 976);
    if ( !v3 )
      v3 = String;
    *(_DWORD *)(this + 972) = sub_10243040(v3, this + 580, 1);
  }
  v4 = *(_DWORD *)(this + 972);
  if ( v4 )
  {
    if ( *(_DWORD *)(this + 308) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != *(_DWORD *)(this + 308) >> 12 )
    {
      v5 = 0;
    }
    else
    {
      v5 = off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1];
    }
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 140))(v4, v5, -1);
    sub_10128950(
      *(_DWORD *)(this + 972),
      3,
      *(_BYTE *)(this + 116),
      *(_BYTE *)(this + 117),
      *(_BYTE *)(this + 118),
      *(unsigned __int8 *)(this + 119),
      *(_BYTE *)(this + 112));
  }
  if ( !*(_DWORD *)(this + 260) || (*(_BYTE *)(this + 248) & 1) != 0 )
    return sub_10138220(this, (int)&savedregs);
  else
    return sub_10137DF0((int *)this);
}
