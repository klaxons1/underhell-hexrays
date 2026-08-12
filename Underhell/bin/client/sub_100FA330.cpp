int __thiscall sub_100FA330(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // eax
  _DWORD v5[2]; // [esp+4h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = this + 1;
  v5[0] = a2;
  v5[1] = 0;
  if ( !(unsigned __int8)sub_100FA5A0(v5, &a2, &v6) )
    return 0;
  v3 = v6 | (a2 << 16);
  if ( v3 == -1 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(*v2 + 20 * HIWORD(v3)) + 8 * (unsigned __int16)v6 + 4);
}
