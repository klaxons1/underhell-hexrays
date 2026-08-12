char __thiscall sub_102F6940(_DWORD *this, _DWORD *a2)
{
  char result; // al
  const char *v4; // eax
  char Buffer[128]; // [esp+4h] [ebp-80h] BYREF

  result = sub_10023D10(this, 86);
  if ( !result )
  {
    v4 = sub_10248160(a2);
    sub_10092C10(Buffer, "damageammo:%s", v4);
    return (*(int (__thiscall **)(_DWORD *, const char *, char *, _DWORD, _DWORD, _DWORD))(*this + 2344))(
             this,
             "TLK_WOUND",
             Buffer,
             0,
             0,
             0);
  }
  return result;
}
