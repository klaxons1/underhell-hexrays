_DWORD *__thiscall sub_1022D1D0(_DWORD *this, const char *Src)
{
  int v3; // eax
  int v4; // edi
  signed int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // eax
  int v11; // [esp+Ch] [ebp-4h]

  v3 = this[3];
  v4 = 0;
  if ( v3 )
    v11 = v3 - 1;
  else
    v11 = 0;
  v5 = strlen(Src);
  if ( v5 + v11 > 0 )
    v4 = v5 + v11 + 1;
  v6 = this[1];
  this[3] = v4;
  if ( v4 > v6 )
  {
    sub_1001A460(this, v4 - v6);
    v6 = this[1];
    if ( v4 > v6 )
      this[3] = v6;
  }
  v7 = this[3];
  if ( v7 )
    v8 = v7 - 1;
  else
    v8 = 0;
  if ( v8 - v11 < v5 )
    v5 = v8 - v11;
  if ( !v7 )
  {
    this[3] = 1;
    if ( v6 < 1 )
    {
      sub_1001A460(this, 1 - v6);
      v9 = this[1];
      if ( v9 < 1 )
        this[3] = v9;
    }
    *(_BYTE *)*this = 0;
  }
  memcpy_0((void *)(v11 + *this), Src, v5);
  *(_BYTE *)(v8 + *this) = 0;
  return this;
}
