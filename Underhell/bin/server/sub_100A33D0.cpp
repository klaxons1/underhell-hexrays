__int16 __thiscall sub_100A33D0(_WORD *this, int a2)
{
  __int16 v3; // si
  int v5; // [esp+8h] [ebp-34h] BYREF
  int v6[12]; // [esp+Ch] [ebp-30h] BYREF

  if ( !a2 )
    return -1;
  sub_100A0F60((char *)v6);
  v5 = a2;
  v3 = sub_1009CA60(this, (int)&v5);
  sub_1009CA00(v6);
  if ( v6[2] >= 0 )
  {
    if ( v6[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v6[0]);
  }
  return v3;
}
