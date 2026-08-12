unsigned int *__thiscall sub_1020FD90(unsigned int *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ebx
  unsigned int *v5; // edi
  unsigned int *result; // eax
  unsigned int v7; // esi
  int *v8; // ecx
  __int64 v9; // [esp+8h] [ebp-2Ch]
  float v10[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v11[3]; // [esp+28h] [ebp-Ch] BYREF

  v2 = this[106];
  if ( v2 )
  {
    if ( sub_1020D2D0(this, v10, v11) )
    {
      v3 = sub_1020D1E0(this);
      v4 = v3;
      if ( v3 )
      {
        sub_1016AF10(v3);
        sub_1025FAC0(v4);
      }
      (*(void (__thiscall **)(unsigned int *, float *, float *, _DWORD))(*this + 416))(this, v10, v11, 0);
    }
    (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)v2 + 60))(v2, 1);
    (*(void (__thiscall **)(unsigned int))(*(_DWORD *)v2 + 96))(v2);
    HIDWORD(v9) = this;
    LODWORD(v9) = this;
    sub_1010DD80(this + 361, v9, 0.0);
  }
  v5 = this + 62;
  result = (unsigned int *)(this[62] >> 11);
  if ( (this[62] & 0x800) != 0 )
  {
    result = (unsigned int *)sub_101CFB90((int)this);
    v7 = *v5 & 0xFFFFF7FF;
    if ( *v5 != v7 )
    {
      result = v5 - 62;
      if ( *((_BYTE *)v5 - 164) )
      {
        *((_BYTE *)result + 88) |= 1u;
        *v5 = v7;
      }
      else
      {
        v8 = (int *)result[6];
        if ( v8 )
          result = (unsigned int *)sub_100194B0(v8, 248);
        *v5 = v7;
      }
    }
  }
  return result;
}
