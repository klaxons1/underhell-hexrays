int __thiscall sub_100EC4A0(int *this, float a2, int a3)
{
  int v4; // edi
  int *v5; // ebx
  bool v6; // zf
  int v7; // edi
  unsigned int v8; // edi
  int v9; // eax

  if ( -1.0 == a2 )
    v4 = -1;
  else
    v4 = (int)(a2 / *(float *)(dword_106B31C8 + 28) + 0.5);
  if ( a3 )
  {
    v9 = sub_100E91A0(this, a3);
    if ( v9 == -1 )
      v9 = sub_100EC390(this, a3);
    *(_DWORD *)(this[36] + 16 * v9 + 8) = v4;
  }
  else
  {
    v5 = this + 47;
    if ( this[47] != v4 )
    {
      (*(void (__thiscall **)(int *, int *))(*this + 200))(this, this + 47);
      *v5 = v4;
    }
  }
  v6 = v4 == -1;
  v7 = this[63];
  if ( (v7 & 0x400000) != 0 )
  {
    if ( !v6 )
    {
      v8 = v7 & 0xFFBFFFFF;
LABEL_17:
      this[63] = v8;
      return sub_1012D820(this);
    }
  }
  else if ( !v6 )
  {
    return sub_1012D820(this);
  }
  if ( (this[63] & 0x400000) == 0 && !sub_100E9300(this) )
  {
    v8 = v7 | 0x400000;
    goto LABEL_17;
  }
  return sub_1012D820(this);
}
