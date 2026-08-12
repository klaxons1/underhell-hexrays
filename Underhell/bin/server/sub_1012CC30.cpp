void *__thiscall sub_1012CC30(_DWORD *this)
{
  int v2; // edi
  void *v3; // esp
  void *result; // eax
  int v5; // esi
  const void *v6; // [esp-8h] [ebp-18h]
  _BYTE v7[12]; // [esp+0h] [ebp-10h] BYREF
  _BYTE *v8; // [esp+Ch] [ebp-4h]

  v2 = this[4];
  if ( v2 )
  {
    v3 = alloca(4 * v2);
    v6 = (const void *)this[1];
    v8 = v7;
    result = memcpy_0(v7, v6, 4 * v2);
    v5 = 0;
    for ( this[4] = 0; v5 < v2; ++v5 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)&v8[4 * v5] + 255) & 1) != 0 )
        result = (void *)sub_101C6AC0();
    }
  }
  return result;
}
