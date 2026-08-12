char __thiscall sub_1019FFC0(_DWORD *this, int a2, int a3)
{
  int v3; // esi
  char result; // al
  char v6; // [esp+Bh] [ebp-1h] BYREF

  v3 = a2;
  this[1] = (*(int (__thiscall **)(int, const char *, char *, int))(*(_DWORD *)a2 + 44))(
              a2,
              "$emissiveblendstrength",
              (char *)&a2 + 3,
              1);
  result = HIBYTE(a2);
  if ( HIBYTE(a2) )
  {
    this[2] = (*(int (__thiscall **)(int, const char *, char *, int))(*(_DWORD *)v3 + 44))(
                v3,
                "$detailblendfactor",
                &v6,
                1);
    return HIBYTE(a2);
  }
  return result;
}
