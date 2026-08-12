int __thiscall sub_100931B0(_BYTE *this, int *a2, int a3, int a4)
{
  int v4; // eax
  const char *v5; // edi
  const char *v7; // eax
  char Buffer[128]; // [esp+Ch] [ebp-80h] BYREF

  v4 = *(_DWORD *)(a4 + 68);
  v5 = 0;
  switch ( v4 )
  {
    case 6:
    case 7:
      v5 = "shotloc:leg";
      break;
    case 4:
    case 5:
      v5 = "shotloc:arm";
      break;
    case 3:
      v5 = "shotloc:gut";
      break;
  }
  v7 = (const char *)sub_10248160(a2);
  sub_10092C10(Buffer, "%s,damageammo:%s", v5, v7);
  (*(void (__thiscall **)(_BYTE *, const char *, char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
    this,
    "TLK_SHOT",
    Buffer,
    0,
    0,
    0);
  return sub_1001EB60(this, a2, a3, a4);
}
