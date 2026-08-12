_DWORD *__thiscall sub_1022D0F0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  signed int v6; // ebx
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  const char *v10; // ebx
  int v11; // eax
  size_t Size; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  v3 = this[3];
  v4 = 0;
  if ( v3 )
    v14 = v3 - 1;
  else
    v14 = 0;
  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 )
    v6 = v5 - 1;
  else
    v6 = 0;
  if ( v6 + v14 > 0 )
    v4 = v6 + v14 + 1;
  v7 = this[1];
  this[3] = v4;
  if ( v4 > v7 )
  {
    sub_1001A460(this, v4 - v7);
    v7 = this[1];
    if ( v4 > v7 )
      this[3] = v7;
  }
  v8 = this[3];
  if ( v8 )
    v9 = v8 - 1;
  else
    v9 = 0;
  Size = v9 - v14;
  if ( v9 - v14 >= v6 )
    Size = v6;
  v10 = Locale;
  if ( *(_DWORD *)(a2 + 12) )
    v10 = *(const char **)a2;
  if ( !v8 )
  {
    this[3] = 1;
    if ( v7 < 1 )
    {
      sub_1001A460(this, 1 - v7);
      v11 = this[1];
      if ( v11 < 1 )
        this[3] = v11;
    }
    *(_BYTE *)*this = 0;
  }
  memcpy_0((void *)(v14 + *this), v10, Size);
  *(_BYTE *)(v9 + *this) = 0;
  return this;
}
