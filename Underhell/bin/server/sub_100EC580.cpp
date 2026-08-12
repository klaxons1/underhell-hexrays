int __thiscall sub_100EC580(int *this, int a2, float a3)
{
  double v3; // st7
  int v5; // esi
  int *v6; // ebx
  bool v7; // zf
  int v8; // esi
  int v9; // esi
  unsigned int v10; // esi
  int v12; // [esp+Ch] [ebp+Ch]

  v3 = a3;
  if ( -1.0 == a3 )
    v12 = -1;
  else
    v12 = (int)(v3 / *(float *)(dword_106B31C8 + 28) + 0.5);
  if ( a2 < 0 )
  {
    if ( v3 == -1.0 )
      v5 = -1;
    else
      v5 = (int)(v3 / *(float *)(dword_106B31C8 + 28) + 0.5);
    v6 = this + 47;
    if ( this[47] != v5 )
    {
      (*(void (__thiscall **)(int *, int *))(*this + 200))(this, this + 47);
      *v6 = v5;
    }
    v7 = v5 == -1;
    v8 = this[63];
    if ( (v8 & 0x400000) != 0 )
    {
      if ( !v7 )
      {
        this[63] = v8 & 0xFFBFFFFF;
        sub_1012D820(this);
        goto LABEL_19;
      }
    }
    else if ( !v7 )
    {
LABEL_17:
      sub_1012D820(this);
      goto LABEL_19;
    }
    if ( (this[63] & 0x400000) == 0 && !sub_100E9300(this) )
      this[63] = v8 | 0x400000;
    goto LABEL_17;
  }
  *(_DWORD *)(this[36] + 16 * a2 + 8) = v12;
LABEL_19:
  v9 = this[63];
  if ( (v9 & 0x400000) != 0 )
  {
    if ( v12 != -1 )
    {
      v10 = v9 & 0xFFBFFFFF;
LABEL_26:
      this[63] = v10;
      return sub_1012D820(this);
    }
  }
  else if ( v12 != -1 )
  {
    return sub_1012D820(this);
  }
  if ( (this[63] & 0x400000) == 0 && !sub_100E9300(this) )
  {
    v10 = v9 | 0x400000;
    goto LABEL_26;
  }
  return sub_1012D820(this);
}
