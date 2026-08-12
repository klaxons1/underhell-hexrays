_DWORD *__thiscall sub_100285C0(_DWORD *this, _DWORD *a2, char a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  _DWORD *result; // eax
  char v7; // cl
  int v8; // ecx

  v4 = this[603];
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (this[603] & 0xFFF) + 1], v5[1] != v4 >> 12) )
    result = 0;
  else
    result = (_DWORD *)*v5;
  if ( result != a2 )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2004))(this);
    result = (_DWORD *)sub_1004AF00(this);
    *((_BYTE *)this + 2428) = 0;
    if ( !a2 )
    {
LABEL_13:
      this[603] = -1;
      goto LABEL_14;
    }
    if ( a3 )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
      result = (_DWORD *)sub_1007DB30(26);
      if ( result != (_DWORD *)-1 )
      {
        v7 = (char)result;
        if ( result != (_DWORD *)999999999 )
        {
          result = &this[((int)(result - 250000000) >> 5) + 548];
          *result |= 1 << (v7 & 0x1F);
        }
      }
    }
  }
  if ( !a2 )
    goto LABEL_13;
  result = *(_DWORD **)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  this[603] = result;
LABEL_14:
  *((float *)this + 604) = *(float *)(dword_106B31C8 + 12);
  this[894] = 0;
  this[895] = 0;
  *((float *)this + 893) = -1.0;
  if ( !a2 )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    result = (_DWORD *)sub_1007DB30(26);
    if ( result != (_DWORD *)-1 )
    {
      v8 = (int)(result - 250000000);
      if ( result != (_DWORD *)999999999 )
      {
        result = &this[(v8 >> 5) + 548];
        *result &= ~(1 << (v8 & 0x1F));
      }
    }
  }
  return result;
}
