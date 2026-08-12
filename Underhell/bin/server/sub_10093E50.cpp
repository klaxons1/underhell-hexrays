void *__thiscall sub_10093E50(_DWORD *this, unsigned int a2, size_t Size)
{
  _DWORD *v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  void *result; // eax
  void *v8; // ebx
  size_t v9; // ecx
  const void *v10; // eax
  _DWORD v11[6]; // [esp+0h] [ebp-24h] BYREF
  int v12; // [esp+20h] [ebp-4h]

  v11[5] = v11;
  v3 = this;
  v11[4] = this;
  v4 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFF )
  {
    v4 = a2;
  }
  else
  {
    v5 = this[5];
    v6 = v5 >> 1;
    if ( v5 >> 1 > v4 / 3 )
    {
      v4 = v6 + v5;
      if ( v5 > -2 - v6 )
        v4 = -2;
    }
  }
  v12 = 0;
  result = (void *)sub_10093780((char *)(v4 + 1));
  v8 = result;
  v11[3] = result;
  v12 = -1;
  v9 = Size;
  if ( Size )
  {
    if ( v3[5] < 0x10u )
      v10 = v3;
    else
      v10 = (const void *)*v3;
    result = memcpy_0(v8, v10, Size);
    v9 = Size;
  }
  if ( v3[5] >= 0x10u )
  {
    result = (void *)sub_10184660(*v3);
    v9 = Size;
  }
  *(_BYTE *)v3 = 0;
  *v3 = v8;
  v3[5] = v4;
  v3[4] = v9;
  if ( v4 >= 0x10 )
    v3 = v8;
  *((_BYTE *)v3 + v9) = 0;
  return result;
}
